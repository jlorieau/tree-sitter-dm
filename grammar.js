// Tag identifier
const TAG_IDENT = "@";

module.exports = grammar({
  name: 'disseminate',

  rules: {
    document: $ => repeat($._node),

    _node: $ => choice(
      $._element,
      field('text', $.text)
    ),
    
    _element: $ => seq(
        $.start_tag,
        "{",
        repeat($._node),
        "}"
    ),

    start_tag: $ => seq(
      TAG_IDENT,
      field('name', $.tag_name),
      // repeat($.attribute),
    ),

    tag_name: _ => /\w+/,

    // Regular text without tags
    text: _ => /[^{}&\s@]([^{}&@]*[^{}&@\s])?/,

  }
});
