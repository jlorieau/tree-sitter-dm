#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_EQ = 6,
  anon_sym_AT = 7,
  anon_sym_v = 8,
  anon_sym_eq = 9,
  sym_text = 10,
  sym__new_block = 11,
  sym_name = 12,
  sym_attribute_name = 13,
  sym_attribute_value = 14,
  anon_sym_SQUOTE = 15,
  aux_sym__quoted_attribute_value_token1 = 16,
  anon_sym_DQUOTE = 17,
  aux_sym__quoted_attribute_value_token2 = 18,
  sym__verb_no_paren = 19,
  sym_document = 20,
  sym_block = 21,
  sym__node = 22,
  sym_tag = 23,
  sym__verb_node = 24,
  sym_tag_verb = 25,
  sym_macro = 26,
  sym_attributes = 27,
  sym_attribute = 28,
  sym__id = 29,
  sym__id_verb = 30,
  sym__quoted_attribute_value = 31,
  aux_sym_document_repeat1 = 32,
  aux_sym_block_repeat1 = 33,
  aux_sym_tag_verb_repeat1 = 34,
  aux_sym_attributes_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_AT] = "@",
  [anon_sym_v] = "v",
  [anon_sym_eq] = "eq",
  [sym_text] = "text",
  [sym__new_block] = "_new_block",
  [sym_name] = "name",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_attribute_value_token2] = "attribute_value",
  [sym__verb_no_paren] = "_verb_no_paren",
  [sym_document] = "document",
  [sym_block] = "block",
  [sym__node] = "_node",
  [sym_tag] = "tag",
  [sym__verb_node] = "_verb_node",
  [sym_tag_verb] = "tag_verb",
  [sym_macro] = "macro",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym__id] = "_id",
  [sym__id_verb] = "_id_verb",
  [sym__quoted_attribute_value] = "_quoted_attribute_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_tag_verb_repeat1] = "tag_verb_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_v] = anon_sym_v,
  [anon_sym_eq] = anon_sym_eq,
  [sym_text] = sym_text,
  [sym__new_block] = sym__new_block,
  [sym_name] = sym_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_attribute_value_token2] = sym_attribute_value,
  [sym__verb_no_paren] = sym__verb_no_paren,
  [sym_document] = sym_document,
  [sym_block] = sym_block,
  [sym__node] = sym__node,
  [sym_tag] = sym_tag,
  [sym__verb_node] = sym__verb_node,
  [sym_tag_verb] = sym_tag_verb,
  [sym_macro] = sym_macro,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym__id] = sym__id,
  [sym__id_verb] = sym__id_verb,
  [sym__quoted_attribute_value] = sym__quoted_attribute_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_AT] = {
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
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__new_block] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
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
  [sym_block] = {
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
  [sym__id] = {
    .visible = false,
    .named = true,
  },
  [sym__id_verb] = {
    .visible = false,
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
  [aux_sym_block_repeat1] = {
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
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 7,
  [12] = 9,
  [13] = 4,
  [14] = 10,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 17,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 23,
  [27] = 25,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 38,
  [43] = 43,
  [44] = 39,
  [45] = 40,
  [46] = 33,
  [47] = 28,
  [48] = 48,
  [49] = 34,
  [50] = 31,
  [51] = 35,
  [52] = 36,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 41,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 65,
  [69] = 64,
  [70] = 66,
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
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
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
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
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
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == ']') ADVANCE(17);
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
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(27);
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
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_v);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_eq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
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
      if (lookahead == '[') ADVANCE(16);
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
      if (lookahead == '[') ADVANCE(16);
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
      if (lookahead == '[') ADVANCE(16);
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
      if (lookahead == '[') ADVANCE(16);
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
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'q') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_name);
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
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(67),
    [sym_block] = STATE(2),
    [sym__node] = STATE(5),
    [sym_tag] = STATE(5),
    [sym_tag_verb] = STATE(5),
    [sym_macro] = STATE(5),
    [sym__id] = STATE(15),
    [sym__id_verb] = STATE(38),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_block_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      sym_text,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym__id,
    STATE(38), 1,
      sym__id_verb,
    STATE(3), 2,
      sym_block,
      aux_sym_document_repeat1,
    STATE(5), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [27] = 7,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(16), 1,
      sym_text,
    STATE(15), 1,
      sym__id,
    STATE(38), 1,
      sym__id_verb,
    STATE(3), 2,
      sym_block,
      aux_sym_document_repeat1,
    STATE(5), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [54] = 6,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(24), 1,
      sym_text,
    STATE(15), 1,
      sym__id,
    STATE(38), 1,
      sym__id_verb,
    ACTIONS(19), 2,
      anon_sym_,
      sym__new_block,
    STATE(4), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [78] = 6,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      sym_text,
    STATE(15), 1,
      sym__id,
    STATE(38), 1,
      sym__id_verb,
    ACTIONS(27), 2,
      anon_sym_,
      sym__new_block,
    STATE(4), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [102] = 6,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_text,
    STATE(16), 1,
      sym__id,
    STATE(42), 1,
      sym__id_verb,
    STATE(13), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [125] = 6,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_text,
    STATE(16), 1,
      sym__id,
    STATE(42), 1,
      sym__id_verb,
    STATE(8), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [148] = 6,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_text,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__id,
    STATE(42), 1,
      sym__id_verb,
    STATE(13), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [171] = 6,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_text,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__id,
    STATE(42), 1,
      sym__id_verb,
    STATE(13), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [194] = 6,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      sym_text,
    STATE(16), 1,
      sym__id,
    STATE(42), 1,
      sym__id_verb,
    STATE(9), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [217] = 6,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      sym_text,
    STATE(16), 1,
      sym__id,
    STATE(42), 1,
      sym__id_verb,
    STATE(6), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [240] = 6,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_text,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__id,
    STATE(42), 1,
      sym__id_verb,
    STATE(13), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [263] = 6,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(54), 1,
      sym_text,
    STATE(16), 1,
      sym__id,
    STATE(42), 1,
      sym__id_verb,
    STATE(13), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [286] = 6,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym_text,
    STATE(16), 1,
      sym__id,
    STATE(42), 1,
      sym__id_verb,
    STATE(12), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [309] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    STATE(65), 1,
      sym_attributes,
    ACTIONS(61), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [325] = 4,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_attributes,
    ACTIONS(61), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_text,
  [340] = 1,
    ACTIONS(69), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [349] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      sym__verb_no_paren,
    STATE(23), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [363] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      sym__verb_no_paren,
    STATE(24), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [377] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 1,
      sym__verb_no_paren,
    STATE(26), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [391] = 1,
    ACTIONS(69), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_text,
  [399] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      sym__verb_no_paren,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(24), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [413] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      sym__verb_no_paren,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(24), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [427] = 4,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 1,
      sym__verb_no_paren,
    STATE(24), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [441] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      sym__verb_no_paren,
    STATE(19), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [455] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      sym__verb_no_paren,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(24), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [469] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      sym__verb_no_paren,
    STATE(22), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [483] = 1,
    ACTIONS(103), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [490] = 3,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    ACTIONS(107), 1,
      sym_attribute_name,
    STATE(32), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [501] = 4,
    ACTIONS(109), 1,
      sym_attribute_value,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      sym__quoted_attribute_value,
  [514] = 1,
    ACTIONS(115), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [521] = 3,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    ACTIONS(119), 1,
      sym_attribute_name,
    STATE(32), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [532] = 1,
    ACTIONS(122), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [539] = 1,
    ACTIONS(124), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [546] = 1,
    ACTIONS(126), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [553] = 1,
    ACTIONS(128), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [560] = 3,
    ACTIONS(107), 1,
      sym_attribute_name,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(29), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [571] = 3,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_attributes,
  [581] = 3,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym__verb_no_paren,
    STATE(70), 1,
      sym__verb_node,
  [591] = 2,
    ACTIONS(142), 1,
      sym_name,
    ACTIONS(140), 2,
      anon_sym_v,
      anon_sym_eq,
  [599] = 2,
    ACTIONS(146), 1,
      sym__verb_no_paren,
    ACTIONS(144), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [607] = 3,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_attributes,
  [617] = 2,
    ACTIONS(152), 1,
      anon_sym_AT,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      sym_text,
  [625] = 3,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      sym__verb_no_paren,
    STATE(66), 1,
      sym__verb_node,
  [635] = 2,
    ACTIONS(156), 1,
      sym_name,
    ACTIONS(140), 2,
      anon_sym_v,
      anon_sym_eq,
  [643] = 2,
    ACTIONS(158), 1,
      sym_text,
    ACTIONS(122), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [651] = 2,
    ACTIONS(160), 1,
      sym_text,
    ACTIONS(103), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [659] = 2,
    ACTIONS(164), 1,
      anon_sym_EQ,
    ACTIONS(162), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [667] = 2,
    ACTIONS(166), 1,
      sym_text,
    ACTIONS(124), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [675] = 2,
    ACTIONS(168), 1,
      sym_text,
    ACTIONS(115), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [683] = 2,
    ACTIONS(170), 1,
      sym_text,
    ACTIONS(126), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [691] = 2,
    ACTIONS(172), 1,
      sym_text,
    ACTIONS(128), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [699] = 2,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      aux_sym__quoted_attribute_value_token2,
  [706] = 1,
    ACTIONS(178), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [711] = 1,
    ACTIONS(180), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [716] = 1,
    ACTIONS(182), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [721] = 2,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      aux_sym__quoted_attribute_value_token1,
  [728] = 1,
    ACTIONS(186), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [733] = 1,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
  [737] = 1,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
  [741] = 1,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
  [745] = 1,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
  [749] = 1,
    ACTIONS(192), 1,
      anon_sym_SQUOTE,
  [753] = 1,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
  [757] = 1,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
  [761] = 1,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
  [765] = 1,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
  [769] = 1,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
  [773] = 1,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
  [777] = 1,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 148,
  [SMALL_STATE(9)] = 171,
  [SMALL_STATE(10)] = 194,
  [SMALL_STATE(11)] = 217,
  [SMALL_STATE(12)] = 240,
  [SMALL_STATE(13)] = 263,
  [SMALL_STATE(14)] = 286,
  [SMALL_STATE(15)] = 309,
  [SMALL_STATE(16)] = 325,
  [SMALL_STATE(17)] = 340,
  [SMALL_STATE(18)] = 349,
  [SMALL_STATE(19)] = 363,
  [SMALL_STATE(20)] = 377,
  [SMALL_STATE(21)] = 391,
  [SMALL_STATE(22)] = 399,
  [SMALL_STATE(23)] = 413,
  [SMALL_STATE(24)] = 427,
  [SMALL_STATE(25)] = 441,
  [SMALL_STATE(26)] = 455,
  [SMALL_STATE(27)] = 469,
  [SMALL_STATE(28)] = 483,
  [SMALL_STATE(29)] = 490,
  [SMALL_STATE(30)] = 501,
  [SMALL_STATE(31)] = 514,
  [SMALL_STATE(32)] = 521,
  [SMALL_STATE(33)] = 532,
  [SMALL_STATE(34)] = 539,
  [SMALL_STATE(35)] = 546,
  [SMALL_STATE(36)] = 553,
  [SMALL_STATE(37)] = 560,
  [SMALL_STATE(38)] = 571,
  [SMALL_STATE(39)] = 581,
  [SMALL_STATE(40)] = 591,
  [SMALL_STATE(41)] = 599,
  [SMALL_STATE(42)] = 607,
  [SMALL_STATE(43)] = 617,
  [SMALL_STATE(44)] = 625,
  [SMALL_STATE(45)] = 635,
  [SMALL_STATE(46)] = 643,
  [SMALL_STATE(47)] = 651,
  [SMALL_STATE(48)] = 659,
  [SMALL_STATE(49)] = 667,
  [SMALL_STATE(50)] = 675,
  [SMALL_STATE(51)] = 683,
  [SMALL_STATE(52)] = 691,
  [SMALL_STATE(53)] = 699,
  [SMALL_STATE(54)] = 706,
  [SMALL_STATE(55)] = 711,
  [SMALL_STATE(56)] = 716,
  [SMALL_STATE(57)] = 721,
  [SMALL_STATE(58)] = 728,
  [SMALL_STATE(59)] = 733,
  [SMALL_STATE(60)] = 737,
  [SMALL_STATE(61)] = 741,
  [SMALL_STATE(62)] = 745,
  [SMALL_STATE(63)] = 749,
  [SMALL_STATE(64)] = 753,
  [SMALL_STATE(65)] = 757,
  [SMALL_STATE(66)] = 761,
  [SMALL_STATE(67)] = 765,
  [SMALL_STATE(68)] = 769,
  [SMALL_STATE(69)] = 773,
  [SMALL_STATE(70)] = 777,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(40),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(45),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__id, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_verb_repeat1, 2), SHIFT_REPEAT(39),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_verb_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_verb_repeat1, 2), SHIFT_REPEAT(24),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(48),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 5),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__verb_node, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verb_node, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_attribute_value, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_attribute_value, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_verb, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [200] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
