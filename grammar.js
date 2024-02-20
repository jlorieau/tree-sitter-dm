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
      // repeat($.attribute),
    ),

    // Allowable tag names
    tag_name: _ => /[a-zA-Z][\w_]*/,

    // Regular text without tags
    text: _ => /[^{}&\s@]([^{}&@]*[^{}&@\s])?/,

  }
});
