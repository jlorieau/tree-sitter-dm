// Tag identifier
const TAG_IDENT = "@";
const TAG_OPEN = "{";
const TAG_CLOSE = "}";

module.exports = grammar({
  name: 'disseminate',

  rules: {
    document: $ => repeat($._node),

    _node: $ => choice(
      $.element,
      $.text
    ),
    
    element: $ => seq(
        $.start_tag,
        TAG_OPEN,
        repeat($._node),
        TAG_CLOSE
    ),

    start_tag: $ => seq(
      TAG_IDENT,
      $.tag_name,
      // repeat($.attribute),
    ),

    tag_name: _ => /\w+/,

    // Regular text (from html)
    text: _ => /[^{}&\s@]([^{}&@]*[^{}&@\s])?/,

  }
});
