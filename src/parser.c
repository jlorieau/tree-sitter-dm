#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 68
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
  sym__quoted_attribute_value = 29,
  aux_sym_document_repeat1 = 30,
  aux_sym_block_repeat1 = 31,
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
  [sym__quoted_attribute_value] = "_quoted_attribute_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
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
  [8] = 7,
  [9] = 9,
  [10] = 9,
  [11] = 6,
  [12] = 12,
  [13] = 12,
  [14] = 5,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 18,
  [22] = 17,
  [23] = 20,
  [24] = 24,
  [25] = 19,
  [26] = 26,
  [27] = 27,
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
  [41] = 35,
  [42] = 39,
  [43] = 37,
  [44] = 36,
  [45] = 45,
  [46] = 33,
  [47] = 28,
  [48] = 27,
  [49] = 29,
  [50] = 26,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 40,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 57,
  [64] = 64,
  [65] = 61,
  [66] = 60,
  [67] = 67,
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
      if (lookahead == '}') ADVANCE(15);
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
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'q') ADVANCE(17);
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
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
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
    [sym_name] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(64),
    [sym_block] = STATE(2),
    [sym__node] = STATE(4),
    [sym_tag] = STATE(4),
    [sym_tag_verb] = STATE(4),
    [sym_macro] = STATE(4),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_block_repeat1] = STATE(4),
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
      sym_block,
      aux_sym_document_repeat1,
    STATE(4), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [21] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(16), 1,
      sym_text,
    STATE(3), 2,
      sym_block,
      aux_sym_document_repeat1,
    STATE(4), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
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
      aux_sym_block_repeat1,
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
      aux_sym_block_repeat1,
  [78] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      sym_text,
    STATE(14), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [95] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_text,
    STATE(11), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [112] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      sym_text,
    STATE(6), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [129] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_text,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(14), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [146] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_text,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(14), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [163] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_text,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(14), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [180] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      sym_text,
    STATE(10), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [197] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      sym_text,
    STATE(9), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [214] = 4,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(58), 1,
      sym_text,
    STATE(14), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [231] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    STATE(60), 1,
      sym_attributes,
    ACTIONS(61), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [247] = 4,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_attributes,
    ACTIONS(61), 3,
      anon_sym_AT,
      anon_sym_RBRACE,
      sym_text,
  [262] = 4,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      sym__verb_no_paren,
    STATE(20), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [276] = 4,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      sym__verb_no_paren,
    STATE(24), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [290] = 4,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 1,
      sym__verb_no_paren,
    STATE(21), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [304] = 4,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      sym__verb_no_paren,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(24), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [318] = 4,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      sym__verb_no_paren,
    STATE(24), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [332] = 4,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      sym__verb_no_paren,
    STATE(23), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [346] = 4,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      sym__verb_no_paren,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(24), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [360] = 4,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 1,
      sym__verb_no_paren,
    STATE(24), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [374] = 4,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      sym__verb_no_paren,
    STATE(18), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [388] = 1,
    ACTIONS(101), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [395] = 1,
    ACTIONS(103), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [402] = 1,
    ACTIONS(105), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [409] = 1,
    ACTIONS(107), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [416] = 4,
    ACTIONS(109), 1,
      sym_attribute_value,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym__quoted_attribute_value,
  [429] = 3,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    ACTIONS(117), 1,
      sym_attribute_name,
    STATE(34), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [440] = 3,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    ACTIONS(121), 1,
      sym_attribute_name,
    STATE(32), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [451] = 1,
    ACTIONS(124), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [458] = 3,
    ACTIONS(117), 1,
      sym_attribute_name,
    ACTIONS(126), 1,
      anon_sym_RBRACK,
    STATE(32), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [469] = 1,
    ACTIONS(128), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [476] = 2,
    ACTIONS(132), 1,
      sym_name,
    ACTIONS(130), 2,
      anon_sym_v,
      anon_sym_eq,
  [484] = 3,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_attributes,
  [494] = 2,
    ACTIONS(140), 1,
      anon_sym_AT,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym_text,
  [502] = 3,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      sym__verb_no_paren,
    STATE(63), 1,
      sym__verb_node,
  [512] = 2,
    ACTIONS(148), 1,
      sym__verb_no_paren,
    ACTIONS(146), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [520] = 2,
    ACTIONS(150), 1,
      sym_text,
    ACTIONS(128), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [528] = 3,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      sym__verb_no_paren,
    STATE(57), 1,
      sym__verb_node,
  [538] = 3,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_attributes,
  [548] = 2,
    ACTIONS(158), 1,
      sym_name,
    ACTIONS(156), 2,
      anon_sym_v,
      anon_sym_eq,
  [556] = 2,
    ACTIONS(162), 1,
      anon_sym_EQ,
    ACTIONS(160), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [564] = 2,
    ACTIONS(164), 1,
      sym_text,
    ACTIONS(124), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [572] = 2,
    ACTIONS(166), 1,
      sym_text,
    ACTIONS(105), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [580] = 2,
    ACTIONS(168), 1,
      sym_text,
    ACTIONS(103), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [588] = 2,
    ACTIONS(170), 1,
      sym_text,
    ACTIONS(107), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [596] = 2,
    ACTIONS(172), 1,
      sym_text,
    ACTIONS(101), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [604] = 2,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      aux_sym__quoted_attribute_value_token1,
  [611] = 1,
    ACTIONS(178), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [616] = 1,
    ACTIONS(180), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [621] = 2,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      aux_sym__quoted_attribute_value_token2,
  [628] = 1,
    ACTIONS(184), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [633] = 1,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
  [637] = 1,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
  [641] = 1,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
  [645] = 1,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
  [649] = 1,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
  [653] = 1,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
  [657] = 1,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
  [661] = 1,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
  [665] = 1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
  [669] = 1,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
  [673] = 1,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
  [677] = 1,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
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
  [SMALL_STATE(22)] = 332,
  [SMALL_STATE(23)] = 346,
  [SMALL_STATE(24)] = 360,
  [SMALL_STATE(25)] = 374,
  [SMALL_STATE(26)] = 388,
  [SMALL_STATE(27)] = 395,
  [SMALL_STATE(28)] = 402,
  [SMALL_STATE(29)] = 409,
  [SMALL_STATE(30)] = 416,
  [SMALL_STATE(31)] = 429,
  [SMALL_STATE(32)] = 440,
  [SMALL_STATE(33)] = 451,
  [SMALL_STATE(34)] = 458,
  [SMALL_STATE(35)] = 469,
  [SMALL_STATE(36)] = 476,
  [SMALL_STATE(37)] = 484,
  [SMALL_STATE(38)] = 494,
  [SMALL_STATE(39)] = 502,
  [SMALL_STATE(40)] = 512,
  [SMALL_STATE(41)] = 520,
  [SMALL_STATE(42)] = 528,
  [SMALL_STATE(43)] = 538,
  [SMALL_STATE(44)] = 548,
  [SMALL_STATE(45)] = 556,
  [SMALL_STATE(46)] = 564,
  [SMALL_STATE(47)] = 572,
  [SMALL_STATE(48)] = 580,
  [SMALL_STATE(49)] = 588,
  [SMALL_STATE(50)] = 596,
  [SMALL_STATE(51)] = 604,
  [SMALL_STATE(52)] = 611,
  [SMALL_STATE(53)] = 616,
  [SMALL_STATE(54)] = 621,
  [SMALL_STATE(55)] = 628,
  [SMALL_STATE(56)] = 633,
  [SMALL_STATE(57)] = 637,
  [SMALL_STATE(58)] = 641,
  [SMALL_STATE(59)] = 645,
  [SMALL_STATE(60)] = 649,
  [SMALL_STATE(61)] = 653,
  [SMALL_STATE(62)] = 657,
  [SMALL_STATE(63)] = 661,
  [SMALL_STATE(64)] = 665,
  [SMALL_STATE(65)] = 669,
  [SMALL_STATE(66)] = 673,
  [SMALL_STATE(67)] = 677,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(36),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(44),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_verb_repeat1, 2), SHIFT_REPEAT(42),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_verb_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_verb_repeat1, 2), SHIFT_REPEAT(24),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(45),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 6),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__verb_node, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verb_node, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 5),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_attribute_value, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_attribute_value, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [198] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
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
