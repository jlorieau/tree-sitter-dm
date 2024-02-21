// Tag identifier
const TAG_IDENT = "@";

module.exports = grammar({
  name: 'disseminate',

  rules: {
    document: $ => repeat($.p),

    p: $ => seq(repeat1($.node), $._new_block),
    
    node: $ => choice($.text, $.tag),
  
    // A tag with contents
    // tag: $ => seq(
    //     TAG_IDENT,
    //     $._start_tag,
    //     "{",
    //     repeat($.node),
    //     "}"
    // ),
    tag: $ => seq(
      $.tag_start,
      repeat($.node),
      "}"
  ),

    // A tag identifier with a tag name and (optional) tag attributes
    // _start_tag: $ => seq(
    //   TAG_IDENT,
    //   $.tag_name,
    //   // optional($.attributes),
    // ),

    // text: _ => /([^\n]+(\n)?)+/,  // Block of text
    text: _ => /([^\n{}@]+(\n)?)+/,  // Block of text
    _new_block: _ => /[\n\s*]+/,  // New block
    // tag_name: _ => /[a-zA-Z][\w_]*/,  // Allowable tag names
    tag_start: _ => /@[a-zA-Z][\w_]*\{/,


    //

    // node: $ => choice(
    //   // $.tag,
    //   field('text', $.text),
    // ),
    
    // // A tag with contents
    // tag: $ => seq(
    //     $._start_tag,
    //     "{",
    //     repeat($.node),
    //     "}"
    // ),

    // // A tag identifier with a tag name and (optional) tag attributes
    // _start_tag: $ => seq(
    //   TAG_IDENT,
    //   field('name', $.tag_name),
    //   optional($.attributes),
    // ),

    // // Allowable tag names
    // tag_name: _ => /[a-zA-Z][\w_]*/,

    // // Attributes
    // attributes: $ => seq(
    //   "[",
    //   repeat($.attribute),
    //   "]",
    // ),

    // attribute: $ => seq(
    //   $.attribute_name,
    //   optional(seq(
    //     '=',
    //     choice(
    //       $.attribute_value,
    //       $.quoted_attribute_value,
    //     ),
    //   )),
    // ),

    // attribute_name: _ => /[^{}"'/=\s\]]+/,

    // attribute_value: _ => /[^{}"'=\s\]]+/,

    // quoted_attribute_value: $ => choice(
    //   seq('\'', optional(alias(/[^']+/, $.attribute_value)), '\''),
    //   seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"'),
    // ),

    // // Regular text without tags
    // text: _ => /([^\n]+\n)+/,
    // _nl: _ => /\n/,
  }
});
