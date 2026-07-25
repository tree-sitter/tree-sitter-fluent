(comment) @comment.line
(group_comment) @comment.block
(resource_comment) @comment.block

(message
  (identifier) @property)

(term
  (identifier) @constant)

; Every standalone "-" is a term sigil: definition (-name =), reference ({ -name }),
; or term-attribute selector ({ -name.attr -> ... }). Internal "-" live inside
; identifier/number_literal tokens, so this should never over-matches.
"-" @constant

(attribute
  (identifier) @property.definition)

(function_identifier) @function.call

(named_argument
  (identifier) @variable.parameter)

(message_reference
  name: (identifier) @property)

(message_reference
  attribute: (identifier) @property)

(term_reference
  name: (identifier) @constant)

(term_reference
  attribute: (identifier) @property)

(variable_reference
  "$" @variable
  (identifier) @variable)

(variant_key
  (identifier) @label)

(variant_key
  (number_literal) @number)

(string_literal) @string
(number_literal) @number

(text) @string

[
  "="
  "->"
] @operator

[
  "{"
  "}"
] @punctuation.bracket

[
  "."
  ":"
  ","
] @punctuation.delimiter

[
  "["
  "]"
  "("
  ")"
] @punctuation.bracket

"*" @punctuation.special
