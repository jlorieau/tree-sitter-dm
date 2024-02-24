const TAG_IDENT = "@";  // Tag identifier
const EOF = "\0";  // end of file or end of string 

module.exports = grammar({
  name: 'disseminate',

  /* TODO:
   *   - Add YAML header
   *   - Add macros
   *   - verbatim blocks vs inline
   */

  rules: {
    document: $ => seq(
      repeat($.p),
    ),

    // A paragraph containing one or more nodes and a new block 
    // (an extra newline or end-of-file)
    p: $ => choice(
      seq(repeat1($._node), $._new_block),
      seq(repeat1($._node), EOF),
    ),
    
    // A (hidden) node containing either text or a tag.
    _node: $ => choice($.text, $.tag_verb, $.tag, $.macro),

    // A tag with contents comprising a node
    tag: $ => prec.left(1, seq(
      TAG_IDENT,
      $.name,
      optional($.attributes),  // optional attributes
      "{",
      repeat($._node),
      "}"
    )),

    // A (hidden) node for verbose 
    _verb_node: $ => choice(
      $._verb_no_paren,
      seq('{', $._verb_node, '}'),
    ),

    // A verbatim tag with unparsed contents
    tag_verb: $ => seq(
      TAG_IDENT,
      choice('v', 'eq'),  // verbatim tag names
      optional($.attributes),  // optional attributes
      "{",
      repeat($._verb_node),  // Capture the content text verbatim
      "}"
    ),

    // A macro substitition
    macro: $ => prec.left(
      seq(
        TAG_IDENT,
        $.name,
    )),

    // Tag attributes
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
          $._quoted_attribute_value,
        ),
      )),
    ),

    // Text regexes
    text: _ => /([^\n{}@]+(\n)?)+/,  // Block of text (including newlines)
    line: $ => alias(/[^\n{}@]+/, $.text),  // Line of text
    _hspace: _ => /[ \t\f]*/,  // Horitonal space
    _new_block: _ => /[\n\s*]+/,  // New block (paragraph)

    // Tag regexes
    name: _ => /[a-zA-Z][\w_]*/,  // Allowable tag names
    attribute_name: _ => /[^{}"'/=\s\]]+/,  // Name of attribute
    attribute_value: _ => /[^{}"'=\s\]]+/,  // Value of attribute
    _quoted_attribute_value: $ => choice(
        seq('\'', optional(alias(/[^']+/, $.attribute_value)), '\''),
        seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"'),
      ),  // Quoted value of attribute with single (') or double ("") quotes
    
    // Verb tag regexes
    _verb_no_paren: _ => /[^\{\}]+/,  // block of text for verbatim nodes
  },
    
});
