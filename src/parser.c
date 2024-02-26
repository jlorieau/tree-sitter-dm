#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_EQ = 6,
  sym_text = 7,
  sym__new_block = 8,
  anon_sym_AT = 9,
  anon_sym_v = 10,
  anon_sym_eq = 11,
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
  [sym_text] = "text",
  [sym__new_block] = "_new_block",
  [anon_sym_AT] = "@",
  [anon_sym_v] = "v",
  [anon_sym_eq] = "eq",
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
  [sym_text] = sym_text,
  [sym__new_block] = sym__new_block,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_v] = anon_sym_v,
  [anon_sym_eq] = anon_sym_eq,
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
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__new_block] = {
    .visible = false,
    .named = true,
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
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 9,
  [12] = 4,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 18,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 25,
  [26] = 25,
  [27] = 16,
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
  [38] = 36,
  [39] = 37,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 42,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 46,
  [50] = 40,
  [51] = 35,
  [52] = 29,
  [53] = 33,
  [54] = 32,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 41,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 65,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 66,
  [72] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'v') ADVANCE(36);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'v') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(25);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_v);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_v);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_eq);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_eq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'q') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'q') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_attribute_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_attribute_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__verb_no_paren);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__verb_no_paren);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
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
    [sym_attribute_name] = ACTIONS(1),
    [sym_attribute_value] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(69),
    [sym_block] = STATE(2),
    [sym__node] = STATE(5),
    [sym_tag] = STATE(5),
    [sym_tag_verb] = STATE(5),
    [sym_macro] = STATE(5),
    [sym__id] = STATE(15),
    [sym__id_verb] = STATE(44),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_block_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym__id,
    STATE(44), 1,
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
      sym_text,
    ACTIONS(16), 1,
      anon_sym_AT,
    STATE(15), 1,
      sym__id,
    STATE(44), 1,
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
      sym_text,
    ACTIONS(24), 1,
      anon_sym_AT,
    STATE(15), 1,
      sym__id,
    STATE(44), 1,
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
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      sym_text,
    STATE(15), 1,
      sym__id,
    STATE(44), 1,
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
      sym_text,
    ACTIONS(35), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym__id,
    STATE(43), 1,
      sym__id_verb,
    STATE(12), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [125] = 6,
    ACTIONS(33), 1,
      sym_text,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym__id,
    STATE(43), 1,
      sym__id_verb,
    STATE(12), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [148] = 6,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      sym_text,
    STATE(17), 1,
      sym__id,
    STATE(43), 1,
      sym__id_verb,
    STATE(6), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [171] = 6,
    ACTIONS(33), 1,
      sym_text,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym__id,
    STATE(43), 1,
      sym__id_verb,
    STATE(12), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [194] = 6,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      sym_text,
    STATE(17), 1,
      sym__id,
    STATE(43), 1,
      sym__id_verb,
    STATE(7), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [217] = 6,
    ACTIONS(33), 1,
      sym_text,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym__id,
    STATE(43), 1,
      sym__id_verb,
    STATE(12), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [240] = 6,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      sym_text,
    ACTIONS(50), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym__id,
    STATE(43), 1,
      sym__id_verb,
    STATE(12), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [263] = 6,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      sym_text,
    STATE(17), 1,
      sym__id,
    STATE(43), 1,
      sym__id_verb,
    STATE(11), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [286] = 6,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym_text,
    STATE(17), 1,
      sym__id,
    STATE(43), 1,
      sym__id_verb,
    STATE(9), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [309] = 3,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_attributes,
    ACTIONS(61), 4,
      anon_sym_,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [322] = 1,
    ACTIONS(65), 5,
      anon_sym_,
      anon_sym_LBRACK,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [330] = 3,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_attributes,
    ACTIONS(61), 3,
      anon_sym_RBRACE,
      sym_text,
      anon_sym_AT,
  [342] = 4,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      sym__verb_no_paren,
    STATE(22), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [356] = 4,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      sym__verb_no_paren,
    STATE(23), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [370] = 4,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym__verb_no_paren,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(23), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [384] = 4,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 1,
      sym__verb_no_paren,
    STATE(24), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [398] = 4,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym__verb_no_paren,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(23), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [412] = 4,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 1,
      sym__verb_no_paren,
    STATE(23), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [426] = 4,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym__verb_no_paren,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(23), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [440] = 4,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 1,
      sym__verb_no_paren,
    STATE(19), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [454] = 4,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      sym__verb_no_paren,
    STATE(20), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [468] = 1,
    ACTIONS(65), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_AT,
  [475] = 3,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(101), 1,
      sym_attribute_name,
    STATE(28), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [486] = 1,
    ACTIONS(104), 4,
      anon_sym_,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [493] = 3,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    ACTIONS(108), 1,
      sym_attribute_name,
    STATE(28), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [504] = 3,
    ACTIONS(108), 1,
      sym_attribute_name,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    STATE(30), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [515] = 1,
    ACTIONS(112), 4,
      anon_sym_,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [522] = 1,
    ACTIONS(114), 4,
      anon_sym_,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [529] = 4,
    ACTIONS(116), 1,
      sym_attribute_value,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym__quoted_attribute_value,
  [542] = 1,
    ACTIONS(122), 4,
      anon_sym_,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [549] = 1,
    ACTIONS(124), 4,
      anon_sym_,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [556] = 1,
    ACTIONS(126), 4,
      anon_sym_,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [563] = 2,
    ACTIONS(128), 1,
      sym_text,
    ACTIONS(124), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [571] = 2,
    ACTIONS(130), 1,
      sym_text,
    ACTIONS(126), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [579] = 3,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(134), 1,
      sym__verb_no_paren,
    STATE(67), 1,
      sym__verb_node,
  [589] = 2,
    ACTIONS(138), 1,
      sym__verb_no_paren,
    ACTIONS(136), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [597] = 3,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      sym_attributes,
  [607] = 3,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_attributes,
  [617] = 3,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_attributes,
  [627] = 3,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_attributes,
  [637] = 2,
    ACTIONS(152), 1,
      sym_name,
    ACTIONS(150), 2,
      anon_sym_v,
      anon_sym_eq,
  [645] = 2,
    ACTIONS(156), 1,
      anon_sym_AT,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      sym_text,
  [653] = 2,
    ACTIONS(160), 1,
      anon_sym_EQ,
    ACTIONS(158), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [661] = 2,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(150), 2,
      anon_sym_v,
      anon_sym_eq,
  [669] = 3,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      sym__verb_no_paren,
    STATE(65), 1,
      sym__verb_node,
  [679] = 2,
    ACTIONS(166), 1,
      sym_text,
    ACTIONS(122), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [687] = 2,
    ACTIONS(168), 1,
      sym_text,
    ACTIONS(104), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [695] = 2,
    ACTIONS(170), 1,
      sym_text,
    ACTIONS(114), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [703] = 2,
    ACTIONS(172), 1,
      sym_text,
    ACTIONS(112), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [711] = 1,
    ACTIONS(174), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [716] = 2,
    ACTIONS(176), 1,
      anon_sym_SQUOTE,
    ACTIONS(178), 1,
      aux_sym__quoted_attribute_value_token1,
  [723] = 1,
    ACTIONS(180), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [728] = 1,
    ACTIONS(182), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [733] = 1,
    ACTIONS(184), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [738] = 1,
    ACTIONS(186), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [743] = 1,
    ACTIONS(188), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [748] = 2,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      aux_sym__quoted_attribute_value_token2,
  [755] = 1,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
  [759] = 1,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
  [763] = 1,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
  [767] = 1,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
  [771] = 1,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
  [775] = 1,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
  [779] = 1,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
  [783] = 1,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
  [787] = 1,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
  [791] = 1,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
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
  [SMALL_STATE(16)] = 322,
  [SMALL_STATE(17)] = 330,
  [SMALL_STATE(18)] = 342,
  [SMALL_STATE(19)] = 356,
  [SMALL_STATE(20)] = 370,
  [SMALL_STATE(21)] = 384,
  [SMALL_STATE(22)] = 398,
  [SMALL_STATE(23)] = 412,
  [SMALL_STATE(24)] = 426,
  [SMALL_STATE(25)] = 440,
  [SMALL_STATE(26)] = 454,
  [SMALL_STATE(27)] = 468,
  [SMALL_STATE(28)] = 475,
  [SMALL_STATE(29)] = 486,
  [SMALL_STATE(30)] = 493,
  [SMALL_STATE(31)] = 504,
  [SMALL_STATE(32)] = 515,
  [SMALL_STATE(33)] = 522,
  [SMALL_STATE(34)] = 529,
  [SMALL_STATE(35)] = 542,
  [SMALL_STATE(36)] = 549,
  [SMALL_STATE(37)] = 556,
  [SMALL_STATE(38)] = 563,
  [SMALL_STATE(39)] = 571,
  [SMALL_STATE(40)] = 579,
  [SMALL_STATE(41)] = 589,
  [SMALL_STATE(42)] = 597,
  [SMALL_STATE(43)] = 607,
  [SMALL_STATE(44)] = 617,
  [SMALL_STATE(45)] = 627,
  [SMALL_STATE(46)] = 637,
  [SMALL_STATE(47)] = 645,
  [SMALL_STATE(48)] = 653,
  [SMALL_STATE(49)] = 661,
  [SMALL_STATE(50)] = 669,
  [SMALL_STATE(51)] = 679,
  [SMALL_STATE(52)] = 687,
  [SMALL_STATE(53)] = 695,
  [SMALL_STATE(54)] = 703,
  [SMALL_STATE(55)] = 711,
  [SMALL_STATE(56)] = 716,
  [SMALL_STATE(57)] = 723,
  [SMALL_STATE(58)] = 728,
  [SMALL_STATE(59)] = 733,
  [SMALL_STATE(60)] = 738,
  [SMALL_STATE(61)] = 743,
  [SMALL_STATE(62)] = 748,
  [SMALL_STATE(63)] = 755,
  [SMALL_STATE(64)] = 759,
  [SMALL_STATE(65)] = 763,
  [SMALL_STATE(66)] = 767,
  [SMALL_STATE(67)] = 771,
  [SMALL_STATE(68)] = 775,
  [SMALL_STATE(69)] = 779,
  [SMALL_STATE(70)] = 783,
  [SMALL_STATE(71)] = 787,
  [SMALL_STATE(72)] = 791,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(46),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(49),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__id, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_verb_repeat1, 2), SHIFT_REPEAT(50),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_verb_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_verb_repeat1, 2), SHIFT_REPEAT(23),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(48),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 5),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__verb_node, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verb_node, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_attribute_value, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_verb, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_attribute_value, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [202] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
