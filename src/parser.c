#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ = 1,
  anon_sym_AT = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_v = 5,
  anon_sym_eq = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_EQ = 9,
  sym_text = 10,
  sym__new_block = 11,
  sym_tag_name = 12,
  sym_attribute_name = 13,
  sym_attribute_value = 14,
  anon_sym_SQUOTE = 15,
  aux_sym__quoted_attribute_value_token1 = 16,
  anon_sym_DQUOTE = 17,
  aux_sym__quoted_attribute_value_token2 = 18,
  sym__verb_no_paren = 19,
  sym_document = 20,
  sym_p = 21,
  sym__node = 22,
  sym_tag = 23,
  sym__verb_node = 24,
  sym_tag_verb = 25,
  sym_macro = 26,
  sym_attributes = 27,
  sym_attribute = 28,
  sym__quoted_attribute_value = 29,
  aux_sym_document_repeat1 = 30,
  aux_sym_p_repeat1 = 31,
  aux_sym_tag_verb_repeat1 = 32,
  aux_sym_attributes_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_v] = "v",
  [anon_sym_eq] = "eq",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_text] = "text",
  [sym__new_block] = "_new_block",
  [sym_tag_name] = "tag_name",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_attribute_value_token2] = "attribute_value",
  [sym__verb_no_paren] = "_verb_no_paren",
  [sym_document] = "document",
  [sym_p] = "p",
  [sym__node] = "_node",
  [sym_tag] = "tag",
  [sym__verb_node] = "_verb_node",
  [sym_tag_verb] = "tag_verb",
  [sym_macro] = "macro",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym__quoted_attribute_value] = "_quoted_attribute_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_p_repeat1] = "p_repeat1",
  [aux_sym_tag_verb_repeat1] = "tag_verb_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_v] = anon_sym_v,
  [anon_sym_eq] = anon_sym_eq,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_text] = sym_text,
  [sym__new_block] = sym__new_block,
  [sym_tag_name] = sym_tag_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_attribute_value_token2] = sym_attribute_value,
  [sym__verb_no_paren] = sym__verb_no_paren,
  [sym_document] = sym_document,
  [sym_p] = sym_p,
  [sym__node] = sym__node,
  [sym_tag] = sym_tag,
  [sym__verb_node] = sym__verb_node,
  [sym_tag_verb] = sym_tag_verb,
  [sym_macro] = sym_macro,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym__quoted_attribute_value] = sym__quoted_attribute_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_p_repeat1] = aux_sym_p_repeat1,
  [aux_sym_tag_verb_repeat1] = aux_sym_tag_verb_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__new_block] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym__verb_no_paren] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_p] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__verb_node] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_verb] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_attribute_value] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_p_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_verb_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 10,
  [11] = 10,
  [12] = 8,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 18,
  [25] = 25,
  [26] = 22,
  [27] = 19,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 34,
  [37] = 37,
  [38] = 38,
  [39] = 35,
  [40] = 34,
  [41] = 25,
  [42] = 42,
  [43] = 35,
  [44] = 23,
  [45] = 21,
  [46] = 46,
  [47] = 47,
  [48] = 32,
  [49] = 49,
  [50] = 42,
  [51] = 30,
  [52] = 47,
  [53] = 33,
  [54] = 37,
  [55] = 38,
  [56] = 56,
  [57] = 56,
  [58] = 58,
  [59] = 49,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 58,
  [67] = 21,
  [68] = 68,
  [69] = 69,
  [70] = 68,
  [71] = 23,
  [72] = 72,
  [73] = 73,
  [74] = 69,
  [75] = 75,
};

static inline bool sym_attribute_name_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '\'' || (c < ']'
      ? (c < '='
        ? c == '/'
        : c <= '=')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_attribute_value_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '\'' || (c < '{'
      ? (c < ']'
        ? c == '='
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == 0) ADVANCE(11);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_v);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_eq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'q') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_tag_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__verb_no_paren);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__verb_no_paren);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(48);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(72),
    [sym_p] = STATE(2),
    [sym__node] = STATE(4),
    [sym_tag] = STATE(4),
    [sym_tag_verb] = STATE(4),
    [sym_macro] = STATE(4),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_p_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      sym_text,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_p,
      aux_sym_document_repeat1,
    STATE(4), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_p_repeat1,
  [21] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(16), 1,
      sym_text,
    STATE(3), 2,
      sym_p,
      aux_sym_document_repeat1,
    STATE(4), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_p_repeat1,
  [42] = 4,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(19), 2,
      anon_sym_,
      sym__new_block,
    STATE(5), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_p_repeat1,
  [60] = 4,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(28), 1,
      sym_text,
    ACTIONS(23), 2,
      anon_sym_,
      sym__new_block,
    STATE(5), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_p_repeat1,
  [78] = 4,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(34), 1,
      sym_text,
    STATE(6), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_p_repeat1,
  [95] = 4,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      sym_text,
    STATE(6), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_p_repeat1,
  [112] = 4,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      sym_text,
    STATE(14), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_p_repeat1,
  [129] = 4,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(6), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_p_repeat1,
  [146] = 4,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      sym_text,
    STATE(9), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_p_repeat1,
  [163] = 4,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      sym_text,
    STATE(7), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_p_repeat1,
  [180] = 4,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym_text,
    STATE(13), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_p_repeat1,
  [197] = 4,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(6), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_p_repeat1,
  [214] = 4,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(6), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_p_repeat1,
  [231] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_attributes,
    ACTIONS(61), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [247] = 4,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_attributes,
    ACTIONS(61), 3,
      anon_sym_AT,
      anon_sym_RBRACE,
      sym_text,
  [262] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      sym__verb_no_paren,
    STATE(18), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [276] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      sym__verb_no_paren,
    STATE(28), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [290] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      sym__verb_no_paren,
    STATE(28), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [304] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 1,
      sym__verb_no_paren,
    STATE(24), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [318] = 1,
    ACTIONS(85), 5,
      anon_sym_,
      anon_sym_AT,
      anon_sym_LBRACE,
      sym_text,
      sym__new_block,
  [326] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 1,
      sym__verb_no_paren,
    STATE(27), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [340] = 1,
    ACTIONS(91), 5,
      anon_sym_,
      anon_sym_AT,
      anon_sym_LBRACE,
      sym_text,
      sym__new_block,
  [348] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      sym__verb_no_paren,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [362] = 2,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [372] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      sym__verb_no_paren,
    STATE(19), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [386] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      sym__verb_no_paren,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [400] = 4,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 1,
      sym__verb_no_paren,
    STATE(28), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [414] = 4,
    ACTIONS(111), 1,
      sym_attribute_value,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym__quoted_attribute_value,
  [427] = 1,
    ACTIONS(117), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [434] = 3,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    ACTIONS(121), 1,
      sym_attribute_name,
    STATE(31), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [445] = 1,
    ACTIONS(124), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [452] = 1,
    ACTIONS(126), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [459] = 3,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    ACTIONS(130), 1,
      sym_attribute_name,
    STATE(43), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [470] = 3,
    ACTIONS(130), 1,
      sym_attribute_name,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(31), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [481] = 3,
    ACTIONS(130), 1,
      sym_attribute_name,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(35), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [492] = 1,
    ACTIONS(136), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [499] = 1,
    ACTIONS(138), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [506] = 3,
    ACTIONS(130), 1,
      sym_attribute_name,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    STATE(31), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [517] = 3,
    ACTIONS(130), 1,
      sym_attribute_name,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(39), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [528] = 3,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      sym_text,
    ACTIONS(95), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [539] = 1,
    ACTIONS(148), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [546] = 3,
    ACTIONS(130), 1,
      sym_attribute_name,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(31), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [557] = 2,
    ACTIONS(152), 1,
      sym_text,
    ACTIONS(91), 3,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [566] = 2,
    ACTIONS(154), 1,
      sym_text,
    ACTIONS(85), 3,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [575] = 2,
    ACTIONS(158), 1,
      anon_sym_EQ,
    ACTIONS(156), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [583] = 3,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      sym_attributes,
  [593] = 2,
    ACTIONS(164), 1,
      sym_text,
    ACTIONS(124), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [601] = 3,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      sym__verb_no_paren,
    STATE(68), 1,
      sym__verb_node,
  [611] = 2,
    ACTIONS(170), 1,
      sym_text,
    ACTIONS(148), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [619] = 2,
    ACTIONS(172), 1,
      sym_text,
    ACTIONS(117), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [627] = 3,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_attributes,
  [637] = 2,
    ACTIONS(176), 1,
      sym_text,
    ACTIONS(126), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [645] = 2,
    ACTIONS(178), 1,
      sym_text,
    ACTIONS(136), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [653] = 2,
    ACTIONS(180), 1,
      sym_text,
    ACTIONS(138), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [661] = 2,
    ACTIONS(184), 1,
      sym_tag_name,
    ACTIONS(182), 2,
      anon_sym_v,
      anon_sym_eq,
  [669] = 2,
    ACTIONS(188), 1,
      sym_tag_name,
    ACTIONS(186), 2,
      anon_sym_v,
      anon_sym_eq,
  [677] = 2,
    ACTIONS(192), 1,
      sym__verb_no_paren,
    ACTIONS(190), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [685] = 3,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      sym__verb_no_paren,
    STATE(70), 1,
      sym__verb_node,
  [695] = 2,
    ACTIONS(198), 1,
      anon_sym_AT,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      sym_text,
  [703] = 1,
    ACTIONS(200), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [708] = 1,
    ACTIONS(202), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [713] = 2,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      aux_sym__quoted_attribute_value_token1,
  [720] = 2,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      aux_sym__quoted_attribute_value_token2,
  [727] = 1,
    ACTIONS(210), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [732] = 1,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
  [736] = 1,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
  [740] = 1,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
  [744] = 1,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
  [748] = 1,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
  [752] = 1,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
  [756] = 1,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
  [760] = 1,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
  [764] = 1,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
  [768] = 1,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 112,
  [SMALL_STATE(9)] = 129,
  [SMALL_STATE(10)] = 146,
  [SMALL_STATE(11)] = 163,
  [SMALL_STATE(12)] = 180,
  [SMALL_STATE(13)] = 197,
  [SMALL_STATE(14)] = 214,
  [SMALL_STATE(15)] = 231,
  [SMALL_STATE(16)] = 247,
  [SMALL_STATE(17)] = 262,
  [SMALL_STATE(18)] = 276,
  [SMALL_STATE(19)] = 290,
  [SMALL_STATE(20)] = 304,
  [SMALL_STATE(21)] = 318,
  [SMALL_STATE(22)] = 326,
  [SMALL_STATE(23)] = 340,
  [SMALL_STATE(24)] = 348,
  [SMALL_STATE(25)] = 362,
  [SMALL_STATE(26)] = 372,
  [SMALL_STATE(27)] = 386,
  [SMALL_STATE(28)] = 400,
  [SMALL_STATE(29)] = 414,
  [SMALL_STATE(30)] = 427,
  [SMALL_STATE(31)] = 434,
  [SMALL_STATE(32)] = 445,
  [SMALL_STATE(33)] = 452,
  [SMALL_STATE(34)] = 459,
  [SMALL_STATE(35)] = 470,
  [SMALL_STATE(36)] = 481,
  [SMALL_STATE(37)] = 492,
  [SMALL_STATE(38)] = 499,
  [SMALL_STATE(39)] = 506,
  [SMALL_STATE(40)] = 517,
  [SMALL_STATE(41)] = 528,
  [SMALL_STATE(42)] = 539,
  [SMALL_STATE(43)] = 546,
  [SMALL_STATE(44)] = 557,
  [SMALL_STATE(45)] = 566,
  [SMALL_STATE(46)] = 575,
  [SMALL_STATE(47)] = 583,
  [SMALL_STATE(48)] = 593,
  [SMALL_STATE(49)] = 601,
  [SMALL_STATE(50)] = 611,
  [SMALL_STATE(51)] = 619,
  [SMALL_STATE(52)] = 627,
  [SMALL_STATE(53)] = 637,
  [SMALL_STATE(54)] = 645,
  [SMALL_STATE(55)] = 653,
  [SMALL_STATE(56)] = 661,
  [SMALL_STATE(57)] = 669,
  [SMALL_STATE(58)] = 677,
  [SMALL_STATE(59)] = 685,
  [SMALL_STATE(60)] = 695,
  [SMALL_STATE(61)] = 703,
  [SMALL_STATE(62)] = 708,
  [SMALL_STATE(63)] = 713,
  [SMALL_STATE(64)] = 720,
  [SMALL_STATE(65)] = 727,
  [SMALL_STATE(66)] = 732,
  [SMALL_STATE(67)] = 736,
  [SMALL_STATE(68)] = 740,
  [SMALL_STATE(69)] = 744,
  [SMALL_STATE(70)] = 748,
  [SMALL_STATE(71)] = 752,
  [SMALL_STATE(72)] = 756,
  [SMALL_STATE(73)] = 760,
  [SMALL_STATE(74)] = 764,
  [SMALL_STATE(75)] = 768,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(57),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(57),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(5),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(56),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(6),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_verb_repeat1, 2), SHIFT_REPEAT(59),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_verb_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_verb_repeat1, 2), SHIFT_REPEAT(28),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(46),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 6),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 6),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__verb_node, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verb_node, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_attribute_value, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_attribute_value, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [218] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_disseminate(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
