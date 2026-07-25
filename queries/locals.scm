(message) @local.scope
(term) @local.scope
(select_expression) @local.scope

(message
  (identifier) @local.definition)

(term
  (identifier) @local.definition)

(message_reference
  name: (identifier) @local.reference)

(term_reference
  name: (identifier) @local.reference)

(variable_reference
  (identifier) @local.reference)
