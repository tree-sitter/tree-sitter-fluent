ref-plain = { -brand-name }
#               ^ reference.class

ref-attr = { -brand-name.title }
#              ^ reference.class

ref-call = Use { -brand-name(name: "Foo") }
#                  ^ reference.class

msg-ref = See { login-title }
#                ^ reference.variable

msg-ref-attr = See { login-title.aria-label }
#                     ^ reference.variable

