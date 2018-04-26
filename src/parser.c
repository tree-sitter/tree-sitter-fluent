#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 106
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 5
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym__terminator = 1,
  anon_sym_EQ = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_DOT = 5,
  anon_sym_DOLLAR = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  anon_sym_COLON = 10,
  anon_sym_DASH_GT = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_STAR = 14,
  sym_number = 15,
  sym_identifier = 16,
  sym_term_identifier = 17,
  sym__text = 18,
  sym_comment = 19,
  sym_translation_file = 20,
  sym_message = 21,
  sym_term = 22,
  sym_value = 23,
  sym_placeable = 24,
  sym_variant = 25,
  sym__expression = 26,
  sym_variable_expression = 27,
  sym_call_expression = 28,
  sym_keyword_argument = 29,
  sym_select_expression = 30,
  sym_variant_expression = 31,
  sym_selector = 32,
  sym_default_selector = 33,
  aux_sym_translation_file_repeat1 = 34,
  aux_sym_value_repeat1 = 35,
  aux_sym_variant_repeat1 = 36,
  aux_sym_call_expression_repeat1 = 37,
  alias_sym_facet_identifier = 38,
  alias_sym_function_identifier = 39,
  alias_sym_keyword_identifier = 40,
  alias_sym_message_identifier = 41,
  alias_sym_variable_identifier = 42,
};

static const char *ts_symbol_names[] = {
  [sym__terminator] = "_terminator",
  [ts_builtin_sym_end] = "END",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT] = ".",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STAR] = "*",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_term_identifier] = "term_identifier",
  [sym__text] = "_text",
  [sym_comment] = "comment",
  [sym_translation_file] = "translation_file",
  [sym_message] = "message",
  [sym_term] = "term",
  [sym_value] = "value",
  [sym_placeable] = "placeable",
  [sym_variant] = "variant",
  [sym__expression] = "_expression",
  [sym_variable_expression] = "variable_expression",
  [sym_call_expression] = "call_expression",
  [sym_keyword_argument] = "keyword_argument",
  [sym_select_expression] = "select_expression",
  [sym_variant_expression] = "variant_expression",
  [sym_selector] = "selector",
  [sym_default_selector] = "default_selector",
  [aux_sym_translation_file_repeat1] = "translation_file_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_variant_repeat1] = "variant_repeat1",
  [aux_sym_call_expression_repeat1] = "call_expression_repeat1",
  [alias_sym_facet_identifier] = "facet_identifier",
  [alias_sym_function_identifier] = "function_identifier",
  [alias_sym_keyword_identifier] = "keyword_identifier",
  [alias_sym_message_identifier] = "message_identifier",
  [alias_sym_variable_identifier] = "variable_identifier",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_term_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_translation_file] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_placeable] = {
    .visible = true,
    .named = true,
  },
  [sym_variant] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_select_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_default_selector] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_translation_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variant_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_facet_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_message_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[8][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_message_identifier,
  },
  [2] = {
    [1] = alias_sym_variable_identifier,
  },
  [3] = {
    [0] = alias_sym_function_identifier,
  },
  [4] = {
    [1] = alias_sym_facet_identifier,
  },
  [5] = {
    [0] = alias_sym_message_identifier,
    [2] = alias_sym_facet_identifier,
  },
  [6] = {
    [2] = alias_sym_facet_identifier,
  },
  [7] = {
    [0] = alias_sym_keyword_identifier,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == ']')
        ADVANCE(15);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '}')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      if (lookahead == '>')
        ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_term_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 22:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == ']')
        ADVANCE(15);
      if (lookahead == '}')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(23);
      END_STATE();
    case 24:
      if (lookahead == '>')
        ADVANCE(9);
      END_STATE();
    case 25:
      if (lookahead == '\n')
        SKIP(25);
      if (lookahead == '#')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '[')
        ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*' ||
          lookahead == '[' ||
          lookahead == '{')
        ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '#')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(29);
      END_STATE();
    case 30:
      if (lookahead == '\n')
        SKIP(30);
      if (lookahead == '#')
        ADVANCE(26);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '#')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == '\n')
        SKIP(33);
      if (lookahead == '#')
        ADVANCE(26);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (lookahead != 0)
        ADVANCE(28);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '#')
        ADVANCE(26);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == '\n')
        SKIP(37);
      if (lookahead == '#')
        ADVANCE(26);
      if (lookahead == ')')
        ADVANCE(38);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(28);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '#')
        ADVANCE(26);
      if (lookahead == ')')
        ADVANCE(38);
      if (lookahead == ',')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')' &&
          lookahead != '*' &&
          lookahead != '[' &&
          lookahead != '{')
        ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 29, .external_lex_state = 1},
  [11] = {.lex_state = 25, .external_lex_state = 1},
  [12] = {.lex_state = 29, .external_lex_state = 1},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 25, .external_lex_state = 1},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 21},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 25, .external_lex_state = 1},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 25, .external_lex_state = 1},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 25},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 23},
  [37] = {.lex_state = 23},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 23},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 21},
  [46] = {.lex_state = 21},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 21},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 30},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 21},
  [55] = {.lex_state = 23},
  [56] = {.lex_state = 21},
  [57] = {.lex_state = 23},
  [58] = {.lex_state = 23},
  [59] = {.lex_state = 23},
  [60] = {.lex_state = 23},
  [61] = {.lex_state = 23},
  [62] = {.lex_state = 23},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 21},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 23},
  [67] = {.lex_state = 23},
  [68] = {.lex_state = 30},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 23},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 21},
  [75] = {.lex_state = 23},
  [76] = {.lex_state = 23},
  [77] = {.lex_state = 23},
  [78] = {.lex_state = 25},
  [79] = {.lex_state = 25},
  [80] = {.lex_state = 23},
  [81] = {.lex_state = 30},
  [82] = {.lex_state = 30},
  [83] = {.lex_state = 23},
  [84] = {.lex_state = 23},
  [85] = {.lex_state = 21},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 21},
  [88] = {.lex_state = 33},
  [89] = {.lex_state = 25},
  [90] = {.lex_state = 25},
  [91] = {.lex_state = 25},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 37},
  [98] = {.lex_state = 25},
  [99] = {.lex_state = 33},
  [100] = {.lex_state = 33},
  [101] = {.lex_state = 23},
  [102] = {.lex_state = 23},
  [103] = {.lex_state = 37},
  [104] = {.lex_state = 37},
  [105] = {.lex_state = 37},
};

enum {
  ts_external_token__terminator,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__terminator] = sym__terminator,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__terminator] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__terminator] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_term_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_translation_file] = STATE(4),
    [sym_message] = STATE(5),
    [sym_term] = STATE(5),
    [aux_sym_translation_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_term_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [anon_sym_EQ] = ACTIONS(11),
    [sym_comment] = ACTIONS(9),
  },
  [3] = {
    [anon_sym_EQ] = ACTIONS(13),
    [sym_comment] = ACTIONS(9),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_comment] = ACTIONS(9),
  },
  [5] = {
    [sym_message] = STATE(8),
    [sym_term] = STATE(8),
    [aux_sym_translation_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_identifier] = ACTIONS(5),
    [sym_term_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [6] = {
    [sym_value] = STATE(10),
    [sym_placeable] = STATE(11),
    [sym_variant] = STATE(11),
    [aux_sym_value_repeat1] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym__text] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [7] = {
    [sym_value] = STATE(12),
    [sym_placeable] = STATE(11),
    [sym_variant] = STATE(11),
    [aux_sym_value_repeat1] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym__text] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [8] = {
    [sym_message] = STATE(8),
    [sym_term] = STATE(8),
    [aux_sym_translation_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_term_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(9),
  },
  [9] = {
    [sym__expression] = STATE(18),
    [sym_variable_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_select_expression] = STATE(18),
    [sym_variant_expression] = STATE(18),
    [sym_selector] = STATE(19),
    [sym_default_selector] = STATE(19),
    [aux_sym_variant_repeat1] = STATE(19),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [sym_number] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
    [sym_term_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
  },
  [10] = {
    [sym__terminator] = ACTIONS(45),
    [sym_comment] = ACTIONS(9),
  },
  [11] = {
    [sym_placeable] = STATE(21),
    [sym_variant] = STATE(21),
    [aux_sym_value_repeat1] = STATE(21),
    [sym__terminator] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym__text] = ACTIONS(49),
    [sym_comment] = ACTIONS(23),
  },
  [12] = {
    [sym__terminator] = ACTIONS(51),
    [sym_comment] = ACTIONS(9),
  },
  [13] = {
    [sym_identifier] = ACTIONS(53),
    [sym_comment] = ACTIONS(9),
  },
  [14] = {
    [sym_number] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(9),
  },
  [15] = {
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_comment] = ACTIONS(9),
  },
  [16] = {
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(65),
    [sym_comment] = ACTIONS(9),
  },
  [17] = {
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_DASH_GT] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym_comment] = ACTIONS(9),
  },
  [18] = {
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_DASH_GT] = ACTIONS(73),
    [sym_comment] = ACTIONS(9),
  },
  [19] = {
    [sym_selector] = STATE(33),
    [sym_default_selector] = STATE(33),
    [aux_sym_variant_repeat1] = STATE(33),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [sym_comment] = ACTIONS(9),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_identifier] = ACTIONS(77),
    [sym_term_identifier] = ACTIONS(77),
    [sym_comment] = ACTIONS(9),
  },
  [21] = {
    [sym_placeable] = STATE(21),
    [sym_variant] = STATE(21),
    [aux_sym_value_repeat1] = STATE(21),
    [sym__terminator] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym__text] = ACTIONS(84),
    [sym_comment] = ACTIONS(23),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_identifier] = ACTIONS(87),
    [sym_term_identifier] = ACTIONS(87),
    [sym_comment] = ACTIONS(9),
  },
  [23] = {
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_DASH_GT] = ACTIONS(89),
    [sym_comment] = ACTIONS(9),
  },
  [24] = {
    [anon_sym_RBRACK] = ACTIONS(91),
    [sym_comment] = ACTIONS(9),
  },
  [25] = {
    [anon_sym_RBRACK] = ACTIONS(93),
    [sym_comment] = ACTIONS(9),
  },
  [26] = {
    [sym_identifier] = ACTIONS(95),
    [sym_comment] = ACTIONS(9),
  },
  [27] = {
    [sym__expression] = STATE(39),
    [sym_variable_expression] = STATE(39),
    [sym_call_expression] = STATE(39),
    [sym_keyword_argument] = STATE(40),
    [sym_select_expression] = STATE(39),
    [sym_variant_expression] = STATE(39),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(97),
    [sym_number] = ACTIONS(99),
    [sym_identifier] = ACTIONS(101),
    [sym_term_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
  },
  [28] = {
    [sym_number] = ACTIONS(103),
    [sym_identifier] = ACTIONS(105),
    [sym_comment] = ACTIONS(9),
  },
  [29] = {
    [sym_number] = ACTIONS(107),
    [sym_identifier] = ACTIONS(109),
    [sym_comment] = ACTIONS(9),
  },
  [30] = {
    [sym__terminator] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym__text] = ACTIONS(113),
    [sym_comment] = ACTIONS(23),
  },
  [31] = {
    [sym_selector] = STATE(47),
    [sym_default_selector] = STATE(47),
    [aux_sym_variant_repeat1] = STATE(47),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [sym_comment] = ACTIONS(9),
  },
  [32] = {
    [sym__terminator] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym__text] = ACTIONS(121),
    [sym_comment] = ACTIONS(23),
  },
  [33] = {
    [sym_selector] = STATE(33),
    [sym_default_selector] = STATE(33),
    [aux_sym_variant_repeat1] = STATE(33),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [34] = {
    [sym_value] = STATE(49),
    [sym_placeable] = STATE(50),
    [sym_variant] = STATE(50),
    [aux_sym_value_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym__text] = ACTIONS(133),
    [sym_comment] = ACTIONS(23),
  },
  [35] = {
    [sym_value] = STATE(51),
    [sym_placeable] = STATE(50),
    [sym_variant] = STATE(50),
    [aux_sym_value_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym__text] = ACTIONS(133),
    [sym_comment] = ACTIONS(23),
  },
  [36] = {
    [anon_sym_RBRACK] = ACTIONS(135),
    [sym_comment] = ACTIONS(9),
  },
  [37] = {
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_DASH_GT] = ACTIONS(137),
    [sym_comment] = ACTIONS(9),
  },
  [38] = {
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(65),
    [sym_comment] = ACTIONS(9),
  },
  [39] = {
    [aux_sym_call_expression_repeat1] = STATE(57),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_DASH_GT] = ACTIONS(145),
    [sym_comment] = ACTIONS(9),
  },
  [40] = {
    [aux_sym_call_expression_repeat1] = STATE(57),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(143),
    [sym_comment] = ACTIONS(9),
  },
  [41] = {
    [anon_sym_RBRACK] = ACTIONS(147),
    [sym_comment] = ACTIONS(9),
  },
  [42] = {
    [anon_sym_RBRACK] = ACTIONS(149),
    [sym_comment] = ACTIONS(9),
  },
  [43] = {
    [anon_sym_RBRACK] = ACTIONS(151),
    [sym_comment] = ACTIONS(9),
  },
  [44] = {
    [anon_sym_RBRACK] = ACTIONS(153),
    [sym_comment] = ACTIONS(9),
  },
  [45] = {
    [sym_number] = ACTIONS(155),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(9),
  },
  [46] = {
    [anon_sym_LBRACK] = ACTIONS(159),
    [sym_comment] = ACTIONS(9),
  },
  [47] = {
    [sym_selector] = STATE(65),
    [sym_default_selector] = STATE(65),
    [aux_sym_variant_repeat1] = STATE(65),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [sym_comment] = ACTIONS(9),
  },
  [48] = {
    [sym__expression] = STATE(66),
    [sym_variable_expression] = STATE(66),
    [sym_call_expression] = STATE(66),
    [sym_select_expression] = STATE(66),
    [sym_variant_expression] = STATE(66),
    [sym_selector] = STATE(67),
    [sym_default_selector] = STATE(67),
    [aux_sym_variant_repeat1] = STATE(67),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [sym_number] = ACTIONS(163),
    [sym_identifier] = ACTIONS(41),
    [sym_term_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
  },
  [49] = {
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_DASH_GT] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(165),
    [sym_comment] = ACTIONS(9),
  },
  [50] = {
    [sym_placeable] = STATE(68),
    [sym_variant] = STATE(68),
    [aux_sym_value_repeat1] = STATE(68),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [sym__text] = ACTIONS(169),
    [sym_comment] = ACTIONS(23),
  },
  [51] = {
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_DASH_GT] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [sym_comment] = ACTIONS(9),
  },
  [52] = {
    [sym_value] = STATE(69),
    [sym_placeable] = STATE(50),
    [sym_variant] = STATE(50),
    [aux_sym_value_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym__text] = ACTIONS(133),
    [sym_comment] = ACTIONS(23),
  },
  [53] = {
    [sym__expression] = STATE(70),
    [sym_variable_expression] = STATE(70),
    [sym_call_expression] = STATE(70),
    [sym_select_expression] = STATE(70),
    [sym_variant_expression] = STATE(70),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [sym_number] = ACTIONS(173),
    [sym_identifier] = ACTIONS(41),
    [sym_term_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
  },
  [54] = {
    [sym__expression] = STATE(71),
    [sym_variable_expression] = STATE(71),
    [sym_call_expression] = STATE(71),
    [sym_keyword_argument] = STATE(72),
    [sym_select_expression] = STATE(71),
    [sym_variant_expression] = STATE(71),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [sym_number] = ACTIONS(175),
    [sym_identifier] = ACTIONS(101),
    [sym_term_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
  },
  [55] = {
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_DASH_GT] = ACTIONS(177),
    [sym_comment] = ACTIONS(9),
  },
  [56] = {
    [sym_selector] = STATE(75),
    [sym_default_selector] = STATE(75),
    [aux_sym_variant_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(181),
    [sym_comment] = ACTIONS(9),
  },
  [57] = {
    [aux_sym_call_expression_repeat1] = STATE(77),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(183),
    [sym_comment] = ACTIONS(9),
  },
  [58] = {
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(185),
    [sym_comment] = ACTIONS(9),
  },
  [59] = {
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_DASH_GT] = ACTIONS(187),
    [sym_comment] = ACTIONS(9),
  },
  [60] = {
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_DASH_GT] = ACTIONS(189),
    [sym_comment] = ACTIONS(9),
  },
  [61] = {
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_DASH_GT] = ACTIONS(191),
    [sym_comment] = ACTIONS(9),
  },
  [62] = {
    [anon_sym_RBRACK] = ACTIONS(193),
    [sym_comment] = ACTIONS(9),
  },
  [63] = {
    [anon_sym_RBRACK] = ACTIONS(195),
    [sym_comment] = ACTIONS(9),
  },
  [64] = {
    [sym_identifier] = ACTIONS(197),
    [sym_comment] = ACTIONS(9),
  },
  [65] = {
    [sym_selector] = STATE(65),
    [sym_default_selector] = STATE(65),
    [aux_sym_variant_repeat1] = STATE(65),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_DASH_GT] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(202),
    [sym_comment] = ACTIONS(9),
  },
  [66] = {
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_DASH_GT] = ACTIONS(73),
    [sym_comment] = ACTIONS(9),
  },
  [67] = {
    [sym_selector] = STATE(33),
    [sym_default_selector] = STATE(33),
    [aux_sym_variant_repeat1] = STATE(33),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [sym_comment] = ACTIONS(9),
  },
  [68] = {
    [sym_placeable] = STATE(68),
    [sym_variant] = STATE(68),
    [aux_sym_value_repeat1] = STATE(68),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_STAR] = ACTIONS(212),
    [sym__text] = ACTIONS(214),
    [sym_comment] = ACTIONS(23),
  },
  [69] = {
    [anon_sym_RBRACE] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_DASH_GT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [sym_comment] = ACTIONS(9),
  },
  [70] = {
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_DASH_GT] = ACTIONS(145),
    [sym_comment] = ACTIONS(9),
  },
  [71] = {
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_DASH_GT] = ACTIONS(145),
    [sym_comment] = ACTIONS(9),
  },
  [72] = {
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [sym_comment] = ACTIONS(9),
  },
  [73] = {
    [sym_number] = ACTIONS(223),
    [sym_identifier] = ACTIONS(225),
    [sym_comment] = ACTIONS(9),
  },
  [74] = {
    [anon_sym_LBRACK] = ACTIONS(227),
    [sym_comment] = ACTIONS(9),
  },
  [75] = {
    [sym_selector] = STATE(86),
    [sym_default_selector] = STATE(86),
    [aux_sym_variant_repeat1] = STATE(86),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(181),
    [sym_comment] = ACTIONS(9),
  },
  [76] = {
    [anon_sym_RBRACE] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_DASH_GT] = ACTIONS(229),
    [sym_comment] = ACTIONS(9),
  },
  [77] = {
    [aux_sym_call_expression_repeat1] = STATE(77),
    [anon_sym_COMMA] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(221),
    [sym_comment] = ACTIONS(9),
  },
  [78] = {
    [sym_value] = STATE(49),
    [sym_placeable] = STATE(88),
    [sym_variant] = STATE(88),
    [aux_sym_value_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(234),
    [sym__text] = ACTIONS(236),
    [sym_comment] = ACTIONS(23),
  },
  [79] = {
    [sym_value] = STATE(51),
    [sym_placeable] = STATE(88),
    [sym_variant] = STATE(88),
    [aux_sym_value_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(234),
    [sym__text] = ACTIONS(236),
    [sym_comment] = ACTIONS(23),
  },
  [80] = {
    [anon_sym_RBRACK] = ACTIONS(238),
    [sym_comment] = ACTIONS(9),
  },
  [81] = {
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [sym__text] = ACTIONS(113),
    [sym_comment] = ACTIONS(23),
  },
  [82] = {
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(121),
    [sym__text] = ACTIONS(121),
    [sym_comment] = ACTIONS(23),
  },
  [83] = {
    [anon_sym_RBRACK] = ACTIONS(240),
    [sym_comment] = ACTIONS(9),
  },
  [84] = {
    [anon_sym_RBRACK] = ACTIONS(242),
    [sym_comment] = ACTIONS(9),
  },
  [85] = {
    [sym_identifier] = ACTIONS(244),
    [sym_comment] = ACTIONS(9),
  },
  [86] = {
    [sym_selector] = STATE(86),
    [sym_default_selector] = STATE(86),
    [aux_sym_variant_repeat1] = STATE(86),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_DASH_GT] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(249),
    [sym_comment] = ACTIONS(9),
  },
  [87] = {
    [sym__expression] = STATE(93),
    [sym_variable_expression] = STATE(93),
    [sym_call_expression] = STATE(93),
    [sym_select_expression] = STATE(93),
    [sym_variant_expression] = STATE(93),
    [sym_selector] = STATE(94),
    [sym_default_selector] = STATE(94),
    [aux_sym_variant_repeat1] = STATE(94),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [sym_number] = ACTIONS(252),
    [sym_identifier] = ACTIONS(41),
    [sym_term_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
  },
  [88] = {
    [sym_placeable] = STATE(95),
    [sym_variant] = STATE(95),
    [aux_sym_value_repeat1] = STATE(95),
    [anon_sym_LBRACE] = ACTIONS(234),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_DASH_GT] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [sym__text] = ACTIONS(254),
    [sym_comment] = ACTIONS(23),
  },
  [89] = {
    [sym_value] = STATE(69),
    [sym_placeable] = STATE(88),
    [sym_variant] = STATE(88),
    [aux_sym_value_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(234),
    [sym__text] = ACTIONS(236),
    [sym_comment] = ACTIONS(23),
  },
  [90] = {
    [sym_value] = STATE(49),
    [sym_placeable] = STATE(97),
    [sym_variant] = STATE(97),
    [aux_sym_value_repeat1] = STATE(97),
    [anon_sym_LBRACE] = ACTIONS(256),
    [sym__text] = ACTIONS(258),
    [sym_comment] = ACTIONS(23),
  },
  [91] = {
    [sym_value] = STATE(51),
    [sym_placeable] = STATE(97),
    [sym_variant] = STATE(97),
    [aux_sym_value_repeat1] = STATE(97),
    [anon_sym_LBRACE] = ACTIONS(256),
    [sym__text] = ACTIONS(258),
    [sym_comment] = ACTIONS(23),
  },
  [92] = {
    [anon_sym_RBRACK] = ACTIONS(260),
    [sym_comment] = ACTIONS(9),
  },
  [93] = {
    [anon_sym_RBRACE] = ACTIONS(262),
    [anon_sym_DASH_GT] = ACTIONS(73),
    [sym_comment] = ACTIONS(9),
  },
  [94] = {
    [sym_selector] = STATE(33),
    [sym_default_selector] = STATE(33),
    [aux_sym_variant_repeat1] = STATE(33),
    [anon_sym_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [sym_comment] = ACTIONS(9),
  },
  [95] = {
    [sym_placeable] = STATE(95),
    [sym_variant] = STATE(95),
    [aux_sym_value_repeat1] = STATE(95),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_RBRACE] = ACTIONS(212),
    [anon_sym_DASH_GT] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_STAR] = ACTIONS(212),
    [sym__text] = ACTIONS(269),
    [sym_comment] = ACTIONS(23),
  },
  [96] = {
    [sym__expression] = STATE(101),
    [sym_variable_expression] = STATE(101),
    [sym_call_expression] = STATE(101),
    [sym_select_expression] = STATE(101),
    [sym_variant_expression] = STATE(101),
    [sym_selector] = STATE(102),
    [sym_default_selector] = STATE(102),
    [aux_sym_variant_repeat1] = STATE(102),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [sym_number] = ACTIONS(272),
    [sym_identifier] = ACTIONS(41),
    [sym_term_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
  },
  [97] = {
    [sym_placeable] = STATE(103),
    [sym_variant] = STATE(103),
    [aux_sym_value_repeat1] = STATE(103),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_DASH_GT] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [sym__text] = ACTIONS(274),
    [sym_comment] = ACTIONS(23),
  },
  [98] = {
    [sym_value] = STATE(69),
    [sym_placeable] = STATE(97),
    [sym_variant] = STATE(97),
    [aux_sym_value_repeat1] = STATE(97),
    [anon_sym_LBRACE] = ACTIONS(256),
    [sym__text] = ACTIONS(258),
    [sym_comment] = ACTIONS(23),
  },
  [99] = {
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_DASH_GT] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [sym__text] = ACTIONS(113),
    [sym_comment] = ACTIONS(23),
  },
  [100] = {
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_DASH_GT] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(121),
    [sym__text] = ACTIONS(121),
    [sym_comment] = ACTIONS(23),
  },
  [101] = {
    [anon_sym_RBRACE] = ACTIONS(276),
    [anon_sym_DASH_GT] = ACTIONS(73),
    [sym_comment] = ACTIONS(9),
  },
  [102] = {
    [sym_selector] = STATE(33),
    [sym_default_selector] = STATE(33),
    [aux_sym_variant_repeat1] = STATE(33),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [sym_comment] = ACTIONS(9),
  },
  [103] = {
    [sym_placeable] = STATE(103),
    [sym_variant] = STATE(103),
    [aux_sym_value_repeat1] = STATE(103),
    [anon_sym_LBRACE] = ACTIONS(280),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_DASH_GT] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_STAR] = ACTIONS(212),
    [sym__text] = ACTIONS(283),
    [sym_comment] = ACTIONS(23),
  },
  [104] = {
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_DASH_GT] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [sym__text] = ACTIONS(113),
    [sym_comment] = ACTIONS(23),
  },
  [105] = {
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_DASH_GT] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(121),
    [sym__text] = ACTIONS(121),
    [sym_comment] = ACTIONS(23),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_translation_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [11] = {.count = 1, .reusable = true}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_translation_file, 1),
  [19] = {.count = 1, .reusable = false}, SHIFT(9),
  [21] = {.count = 1, .reusable = false}, SHIFT(11),
  [23] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [25] = {.count = 1, .reusable = true}, REDUCE(aux_sym_translation_file_repeat1, 2),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym_translation_file_repeat1, 2), SHIFT_REPEAT(2),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym_translation_file_repeat1, 2), SHIFT_REPEAT(3),
  [33] = {.count = 1, .reusable = true}, SHIFT(13),
  [35] = {.count = 1, .reusable = true}, SHIFT(14),
  [37] = {.count = 1, .reusable = true}, SHIFT(15),
  [39] = {.count = 1, .reusable = true}, SHIFT(18),
  [41] = {.count = 1, .reusable = true}, SHIFT(16),
  [43] = {.count = 1, .reusable = true}, SHIFT(17),
  [45] = {.count = 1, .reusable = true}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_value, 1),
  [49] = {.count = 1, .reusable = false}, SHIFT(21),
  [51] = {.count = 1, .reusable = true}, SHIFT(22),
  [53] = {.count = 1, .reusable = true}, SHIFT(23),
  [55] = {.count = 1, .reusable = true}, SHIFT(24),
  [57] = {.count = 1, .reusable = true}, SHIFT(25),
  [59] = {.count = 1, .reusable = true}, SHIFT(26),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1, .alias_sequence_id = 1),
  [63] = {.count = 1, .reusable = true}, SHIFT(27),
  [65] = {.count = 1, .reusable = true}, SHIFT(28),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(29),
  [71] = {.count = 1, .reusable = true}, SHIFT(30),
  [73] = {.count = 1, .reusable = true}, SHIFT(31),
  [75] = {.count = 1, .reusable = true}, SHIFT(32),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_message, 4, .alias_sequence_id = 1),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2),
  [81] = {.count = 2, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(9),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(21),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_term, 4),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_variable_expression, 2, .alias_sequence_id = 2),
  [91] = {.count = 1, .reusable = true}, SHIFT(34),
  [93] = {.count = 1, .reusable = true}, SHIFT(35),
  [95] = {.count = 1, .reusable = true}, SHIFT(36),
  [97] = {.count = 1, .reusable = true}, SHIFT(37),
  [99] = {.count = 1, .reusable = true}, SHIFT(39),
  [101] = {.count = 1, .reusable = true}, SHIFT(38),
  [103] = {.count = 1, .reusable = true}, SHIFT(41),
  [105] = {.count = 1, .reusable = true}, SHIFT(42),
  [107] = {.count = 1, .reusable = true}, SHIFT(43),
  [109] = {.count = 1, .reusable = true}, SHIFT(44),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_placeable, 3),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_placeable, 3),
  [115] = {.count = 1, .reusable = true}, SHIFT(45),
  [117] = {.count = 1, .reusable = true}, SHIFT(46),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_variant, 3),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_variant, 3),
  [123] = {.count = 1, .reusable = true}, REDUCE(aux_sym_variant_repeat1, 2),
  [125] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variant_repeat1, 2), SHIFT_REPEAT(14),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variant_repeat1, 2), SHIFT_REPEAT(15),
  [131] = {.count = 1, .reusable = false}, SHIFT(48),
  [133] = {.count = 1, .reusable = false}, SHIFT(50),
  [135] = {.count = 1, .reusable = true}, SHIFT(52),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 3, .alias_sequence_id = 3),
  [139] = {.count = 1, .reusable = true}, SHIFT(53),
  [141] = {.count = 1, .reusable = true}, SHIFT(54),
  [143] = {.count = 1, .reusable = true}, SHIFT(55),
  [145] = {.count = 1, .reusable = true}, SHIFT(56),
  [147] = {.count = 1, .reusable = true}, SHIFT(58),
  [149] = {.count = 1, .reusable = true}, SHIFT(59),
  [151] = {.count = 1, .reusable = true}, SHIFT(60),
  [153] = {.count = 1, .reusable = true}, SHIFT(61),
  [155] = {.count = 1, .reusable = true}, SHIFT(62),
  [157] = {.count = 1, .reusable = true}, SHIFT(63),
  [159] = {.count = 1, .reusable = true}, SHIFT(64),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_select_expression, 3),
  [163] = {.count = 1, .reusable = true}, SHIFT(66),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 4),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_value, 1),
  [169] = {.count = 1, .reusable = false}, SHIFT(68),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_selector, 4, .alias_sequence_id = 4),
  [173] = {.count = 1, .reusable = true}, SHIFT(70),
  [175] = {.count = 1, .reusable = true}, SHIFT(71),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 4, .alias_sequence_id = 3),
  [179] = {.count = 1, .reusable = true}, SHIFT(73),
  [181] = {.count = 1, .reusable = true}, SHIFT(74),
  [183] = {.count = 1, .reusable = true}, SHIFT(76),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_variant_expression, 4, .alias_sequence_id = 1),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_variant_expression, 4, .alias_sequence_id = 5),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_variant_expression, 4),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_variant_expression, 4, .alias_sequence_id = 6),
  [193] = {.count = 1, .reusable = true}, SHIFT(78),
  [195] = {.count = 1, .reusable = true}, SHIFT(79),
  [197] = {.count = 1, .reusable = true}, SHIFT(80),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variant_repeat1, 2), SHIFT_REPEAT(45),
  [202] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variant_repeat1, 2), SHIFT_REPEAT(46),
  [205] = {.count = 1, .reusable = true}, SHIFT(81),
  [207] = {.count = 1, .reusable = true}, SHIFT(82),
  [209] = {.count = 2, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(48),
  [212] = {.count = 1, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2),
  [214] = {.count = 2, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(68),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_default_selector, 5, .alias_sequence_id = 6),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_argument, 3, .alias_sequence_id = 7),
  [221] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [223] = {.count = 1, .reusable = true}, SHIFT(83),
  [225] = {.count = 1, .reusable = true}, SHIFT(84),
  [227] = {.count = 1, .reusable = true}, SHIFT(85),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 5, .alias_sequence_id = 3),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(54),
  [234] = {.count = 1, .reusable = false}, SHIFT(87),
  [236] = {.count = 1, .reusable = false}, SHIFT(88),
  [238] = {.count = 1, .reusable = true}, SHIFT(89),
  [240] = {.count = 1, .reusable = true}, SHIFT(90),
  [242] = {.count = 1, .reusable = true}, SHIFT(91),
  [244] = {.count = 1, .reusable = true}, SHIFT(92),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variant_repeat1, 2), SHIFT_REPEAT(73),
  [249] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variant_repeat1, 2), SHIFT_REPEAT(74),
  [252] = {.count = 1, .reusable = true}, SHIFT(93),
  [254] = {.count = 1, .reusable = false}, SHIFT(95),
  [256] = {.count = 1, .reusable = false}, SHIFT(96),
  [258] = {.count = 1, .reusable = false}, SHIFT(97),
  [260] = {.count = 1, .reusable = true}, SHIFT(98),
  [262] = {.count = 1, .reusable = true}, SHIFT(99),
  [264] = {.count = 1, .reusable = true}, SHIFT(100),
  [266] = {.count = 2, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(87),
  [269] = {.count = 2, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(95),
  [272] = {.count = 1, .reusable = true}, SHIFT(101),
  [274] = {.count = 1, .reusable = false}, SHIFT(103),
  [276] = {.count = 1, .reusable = true}, SHIFT(104),
  [278] = {.count = 1, .reusable = true}, SHIFT(105),
  [280] = {.count = 2, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(96),
  [283] = {.count = 2, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(103),
};

void *tree_sitter_fluent_external_scanner_create();
void tree_sitter_fluent_external_scanner_destroy(void *);
bool tree_sitter_fluent_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_fluent_external_scanner_serialize(void *, char *);
void tree_sitter_fluent_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fluent() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_fluent_external_scanner_create,
      tree_sitter_fluent_external_scanner_destroy,
      tree_sitter_fluent_external_scanner_scan,
      tree_sitter_fluent_external_scanner_serialize,
      tree_sitter_fluent_external_scanner_deserialize,
    },
  };
  return &language;
}
