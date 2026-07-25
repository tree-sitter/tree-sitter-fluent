#include "tree_sitter/parser.h"

#include <stdbool.h>
#include <stdint.h>

enum TokenType { TEXT, BLOCK_PREFIX, EOF_BLANK };

void *tree_sitter_fluent_external_scanner_create(void) { return NULL; }
void tree_sitter_fluent_external_scanner_destroy(void *payload) {
  (void)payload;
}
unsigned tree_sitter_fluent_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  (void)payload;
  (void)buffer;
  return 0;
}
void tree_sitter_fluent_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {
  (void)payload;
  (void)buffer;
  (void)length;
}

static inline bool is_text_char(int32_t c) {
  return c != '{' && c != '}' && c != '\n' && c != '\r' && c != 0;
}

static inline bool is_special_line_start(int32_t c) {
  return c == '}' || c == '.' || c == '[' || c == '*';
}

static inline bool is_newline(int32_t c) { return c == '\n' || c == '\r'; }

static inline bool is_blank_or_newline(int32_t c) {
  return c == ' ' || is_newline(c);
}

static void advance_newline(TSLexer *lexer) {
  if (lexer->lookahead == '\r') {
    lexer->advance(lexer, false);
    if (lexer->lookahead == '\n') {
      lexer->advance(lexer, false);
    }
  } else {
    lexer->advance(lexer, false);
  }
}

static void skip_blank_block_and_indent(TSLexer *lexer, uint32_t *indent_out) {
  uint32_t indent = 0;
  for (;;) {
    indent = 0;
    while (lexer->lookahead == ' ') {
      lexer->advance(lexer, false);
      indent++;
    }
    if (is_newline(lexer->lookahead)) {
      advance_newline(lexer);
      continue;
    }
    break;
  }
  *indent_out = indent;
}

static bool is_text_continuation(uint32_t indent, int32_t ch, bool at_eof) {
  if (at_eof || ch == '{') {
    return false;
  }
  if (indent == 0) {
    return false;
  }
  if (is_special_line_start(ch)) {
    return false;
  }
  return true;
}

static void scan_text_with_continuation(TSLexer *lexer) {
  while (is_text_char(lexer->lookahead)) {
    lexer->advance(lexer, false);
  }
  lexer->mark_end(lexer);

  while (is_newline(lexer->lookahead)) {
    advance_newline(lexer);
    uint32_t indent = 0;
    skip_blank_block_and_indent(lexer, &indent);
    int32_t ch = lexer->lookahead;
    if (!is_text_continuation(indent, ch, lexer->eof(lexer))) {
      break;
    }
    while (is_text_char(lexer->lookahead)) {
      lexer->advance(lexer, false);
    }
    lexer->mark_end(lexer);
  }
}

bool tree_sitter_fluent_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  (void)payload;

  if (valid_symbols[EOF_BLANK] && !valid_symbols[TEXT] &&
      !valid_symbols[BLOCK_PREFIX] && is_blank_or_newline(lexer->lookahead)) {
    while (is_blank_or_newline(lexer->lookahead)) {
      lexer->advance(lexer, false);
    }
    if (lexer->eof(lexer)) {
      lexer->mark_end(lexer);
      lexer->result_symbol = EOF_BLANK;
      return true;
    }
    return false;
  }

  if (lexer->lookahead == ' ') {
    return false;
  }

  if (is_newline(lexer->lookahead)) {
    if (!valid_symbols[TEXT] && !valid_symbols[BLOCK_PREFIX]) {
      return false;
    }
    advance_newline(lexer);
    uint32_t indent = 0;
    skip_blank_block_and_indent(lexer, &indent);
    int32_t ch = lexer->lookahead;

    if (ch == '{' && valid_symbols[BLOCK_PREFIX]) {
      lexer->mark_end(lexer);
      lexer->result_symbol = BLOCK_PREFIX;
      return true;
    }

    if (valid_symbols[TEXT] &&
        is_text_continuation(indent, ch, lexer->eof(lexer))) {
      scan_text_with_continuation(lexer);
      lexer->result_symbol = TEXT;
      return true;
    }

    return false;
  }

  if (!valid_symbols[TEXT]) {
    return false;
  }
  if (!is_text_char(lexer->lookahead)) {
    return false;
  }

  scan_text_with_continuation(lexer);
  lexer->result_symbol = TEXT;
  return true;
}
