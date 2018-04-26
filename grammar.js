module.exports = grammar({
  name: 'fluent',

  extras: $ => [
    /\s/,
    $.comment
  ],

  externals: $ => [
    $._terminator
  ],

  rules: {
    translation_file: $ => repeat(choice(
      $.message,
      $.term
    )),

    message: $ => seq(
      alias($.identifier, $.message_identifier),
      '=',
      $.value,
      $._terminator
    ),

    term: $ => seq(
      $.term_identifier,
      '=',
      $.value,
      $._terminator
    ),

    value: $ => repeat1(choice(
      $._text,
      $.placeable,
      $.variant
    )),

    placeable: $ => seq(
      '{',
      $._expression,
      '}'
    ),

    variant: $ => seq(
      '{',
      repeat1(choice($.selector, $.default_selector)),
      '}'
    ),

    _expression: $ => choice(
      $.number,
      $.term_identifier,
      alias($.identifier, $.message_identifier),
      $.call_expression,
      $.variable_expression,
      $.select_expression,
      $.variant_expression
    ),

    attribute: $ => seq(
      '.',
      $.identifier,
      '=',
      $.value
    ),

    variable_expression: $ => seq(
      '$',
      alias($.identifier, $.variable_identifier)
    ),

    call_expression: $ => seq(
      alias($.identifier, $.function_identifier),
      '(',
      sep(',', choice($._expression, $.keyword_argument)),
      ')'
    ),

    keyword_argument: $ => seq(
      alias($.identifier, $.keyword_identifier),
      ':',
      $._expression
    ),

    select_expression: $ => seq(
      $._expression,
      '->',
      repeat1(choice($.selector, $.default_selector)),
    ),

    variant_expression: $ => seq(
      choice(
        alias($.identifier, $.message_identifier),
        $.term_identifier
      ),
      '[',
      choice(
        alias($.identifier, $.facet_identifier),
        $.number
      ),
      ']'
    ),

    selector: $ => seq(
      '[',
      choice(
        alias($.identifier, $.facet_identifier),
        $.number
      ),
      ']',
      $.value
    ),

    default_selector: $ => seq(
      '*', '[', alias($.identifier, $.facet_identifier), ']',
      $.value
    ),

    number: $ => /\d+(\.\d*)?/,

    identifier: $ => /[a-zA-Z][\w-]*/,

    term_identifier: $ => /-[a-zA-Z][\w-]*/,

    _text: $ => /[^{\[*\n]+/,

    comment: $ => /#.*/,
  }
});

function sep(separator, rule) {
  return optional(sep1(separator, rule))
}

function sep1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}
