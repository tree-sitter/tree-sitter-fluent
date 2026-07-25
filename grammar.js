/**
 * @file Fluent grammar for tree-sitter
 * @author Saeid Ghafari <saeid.sran@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

export default grammar({
  name: "fluent",

  extras: $ => [],
  word: $ => $.identifier,
  externals: $ => [
    $.text,
    $._block_prefix,
    $._eof_blank,
  ],
  conflicts: $ => [
    [$.message],
    [$.term],
    [$.term_reference],
    [$.named_argument, $.message_reference],
    [$.argument_list],
    [$._inline_expression, $._selector],
    [$.term_reference, $._selector],
    [$.pattern],
  ],

  rules: {
    resource: $ => repeat(choice($.message, $.term, $.resource_comment, $.group_comment, $.comment, $._line_end, $._eof_blank)),

    message: $ => seq(
      $.identifier,
      optional($._blank_inline),
      '=',
      optional($._blank_inline),
      choice(
        seq($.pattern, repeat($.attribute)),
        repeat1($.attribute),
      ),
    ),

    term: $ => seq(
      '-',
      $.identifier,
      optional($._blank_inline),
      '=',
      optional($._blank_inline),
      $.pattern,
      repeat($.attribute),
    ),

    attribute: $ => seq(
      $._line_end,
      optional($._blank),
      '.',
      $.identifier,
      optional($._blank_inline),
      '=',
      optional($._blank_inline),
      $.pattern,
    ),

    resource_comment: $ => token(seq('###', optional(seq(' ', /[^\n]*/)))),
    group_comment: $ => token(seq('##', optional(seq(' ', /[^\n]*/)))),
    comment: $ => token(seq('#', optional(seq(' ', /[^\n]*/)))),

    pattern: $ => repeat1(choice(
      $.placeable,
      seq(optional($._blank_inline), $.text),
    )),

    placeable: $ => choice(
      seq(
        '{',
        optional($._blank),
        choice($.select_expression, $._inline_expression),
        optional($._blank),
        '}',
      ),
      seq(
        $._block_prefix,
        '{',
        optional($._blank),
        choice($.select_expression, $._inline_expression),
        optional($._blank),
        '}',
      ),
    ),

    _inline_expression: $ => choice(
      $.string_literal,
      $.number_literal,
      $.function_reference,
      $.message_reference,
      $.term_reference,
      $.variable_reference,
      $.placeable,
    ),

    string_literal: $ => token(seq(
      '"',
      repeat(choice(
        /[^"\\\n\r]/,
        /\\["\\]/,
        /\\u[0-9a-fA-F]{4}/,
        /\\U[0-9a-fA-F]{6}/,
      )),
      '"',
    )),

    number_literal: $ => /-?[0-9]+(\.[0-9]+)?/,

    function_reference: $ => seq($.function_identifier, $.call_arguments),
    function_identifier: $ => /[A-Z][A-Z0-9_-]*/,

    message_reference: $ => seq(
      field('name', $.identifier),
      optional(seq('.', field('attribute', $.identifier))),
    ),

    term_reference: $ => seq(
      '-',
      field('name', $.identifier),
      optional(seq('.', field('attribute', $.identifier))),
      optional($.call_arguments),
    ),

    variable_reference: $ => seq('$', $.identifier),

    call_arguments: $ => seq(
      optional($._blank),
      '(',
      optional($._blank),
      optional($.argument_list),
      optional($._blank),
      ')',
    ),
    argument_list: $ => seq($.argument, repeat(seq(',', optional($._blank), $.argument)), optional(',')),
    argument: $ => choice($.named_argument, $._inline_expression),
    named_argument: $ => seq(
      $.identifier,
      optional($._blank),
      ':',
      optional($._blank),
      choice($.string_literal, $.number_literal),
    ),

    select_expression: $ => seq(
      $._selector,
      optional($._blank),
      '->',
      optional($._blank_inline),
      $.variant_list,
    ),
    _selector: $ => choice(
      $.string_literal,
      $.number_literal,
      $.variable_reference,
      $.function_reference,
      seq('-', $.identifier, '.', $.identifier),
    ),

    variant_list: $ => seq(
      repeat($.variant),
      $.default_variant,
      repeat($.variant),
      repeat($._line_end),
    ),
    variant: $ => seq(
      repeat1($._line_end),
      optional($._blank_inline),
      $.variant_key,
      $.pattern,
    ),
    default_variant: $ => seq(
      repeat1($._line_end),
      optional($._blank_inline),
      '*',
      $.variant_key,
      $.pattern,
    ),
    variant_key: $ => seq('[', optional($._blank_inline), choice($.number_literal, $.identifier), optional($._blank_inline), ']'),

    identifier: $ => /[a-zA-Z][a-zA-Z0-9_-]*/,

    _blank_inline: $ => token(prec(1, / +/)),
    _line_end: $ => / *\r?\n/,
    _blank: $ => token(/[ \r\n]+/),
  }
});
