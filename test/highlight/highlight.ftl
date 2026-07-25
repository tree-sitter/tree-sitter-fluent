# a line comment
# ^ @comment.line
## a group comment
#  ^ @comment.block
### a resource comment
#   ^ @comment.block
-brand-name = Firefox
# ^ @constant
#           ^ @operator
#             ^ @string
login-title = Sign in
# ^ @property
#           ^ @operator
#             ^ @string
attr-msg =
    .aria-label = Open
#   ^ @punctuation.delimiter
#    ^ @property.definition
#               ^ @operator
#                 ^ @string
ref-msg = See { login-title }
#             ^ @punctuation.bracket
#               ^ @property
#                           ^ @punctuation.bracket
ref-term = Use { -brand-name }
#              ^ @punctuation.bracket
#                ^ @constant
#                 ^ @constant
#                            ^ @punctuation.bracket
ref-attr = { -brand-name.title }
#            ^ @constant
#             ^ @constant
#                        ^ @property
#                              ^ @punctuation.bracket
calls = { NUMBER($total) }
#         ^ @function.call
#                ^ @variable
#                 ^ @variable
#                        ^ @punctuation.bracket
lit = { "foo" }
#        ^ @string
nm = { 5 }
#      ^ @number
named = { -brand-name(width: "10") }
#         ^ @constant
#          ^ @constant
#                     ^ @variable.parameter
#                             ^ @string
