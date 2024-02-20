// Tag identifier
const TAG_IDENT = "@";

module.exports = grammar({
  name: 'disseminate',

  rules: {
    document: $ => repeat($._node),

    _node: $ => choice(
      $.tag,
      field('text', $.text)
    ),
    
    // A tag with contents
    tag: $ => seq(
        $._start_tag,
        "{",
        repeat($._node),
        "}"
    ),

    // A tag identifier with a tag name and (optional) tag attributes
    _start_tag: $ => seq(
      TAG_IDENT,
      field('name', $.tag_name),
      optional($.attributes),
    ),

    // Allowable tag names
    tag_name: _ => /[a-zA-Z][\w_]*/,

    // Attributes
    attributes: $ => seq(
      "[",
      repeat($.attribute),
      "]",
    ),

    attribute: $ => seq(
      $.attribute_name,
      optional(seq(
        '=',
        choice(
          $.attribute_value,
          $.quoted_attribute_value,
        ),
      )),
    ),

    attribute_name: _ => /[^{}"'/=\s\]]+/,

    attribute_value: _ => /[^{}"'=\s\]]+/,

    quoted_attribute_value: $ => choice(
      seq('\'', optional(alias(/[^']+/, $.attribute_value)), '\''),
      seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"'),
    ),

    // Regular text without tags
    text: _ => /[^{}&\s@]([^{}&@]*[^{}&@\s])?/,

  }
});
