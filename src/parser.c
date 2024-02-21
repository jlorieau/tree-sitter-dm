#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ = 1,
  anon_sym_AT = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  sym_text = 5,
  sym__new_block = 6,
  sym_tag_name = 7,
  sym_document = 8,
  sym_p = 9,
  sym__node = 10,
  sym_tag = 11,
  aux_sym_document_repeat1 = 12,
  aux_sym_p_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_text] = "text",
  [sym__new_block] = "_new_block",
  [sym_tag_name] = "tag_name",
  [sym_document] = "document",
  [sym_p] = "p",
  [sym__node] = "_node",
  [sym_tag] = "tag",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_p_repeat1] = "p_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_text] = sym_text,
  [sym__new_block] = sym__new_block,
  [sym_tag_name] = sym_tag_name,
  [sym_document] = sym_document,
  [sym_p] = sym_p,
  [sym__node] = sym__node,
  [sym_tag] = sym_tag,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_p_repeat1] = aux_sym_p_repeat1,
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
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_p_repeat1] = {
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
  [8] = 4,
  [9] = 6,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 11,
  [15] = 12,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 16,
  [20] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == 0) ADVANCE(4);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(5);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(12);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(5);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(5);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_tag_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(18),
    [sym_p] = STATE(3),
    [sym__node] = STATE(5),
    [sym_tag] = STATE(5),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_p_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
  },
  [2] = {
    [sym_p] = STATE(2),
    [sym__node] = STATE(5),
    [sym_tag] = STATE(5),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_p_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [sym_text] = ACTIONS(14),
  },
  [3] = {
    [sym_p] = STATE(2),
    [sym__node] = STATE(5),
    [sym_tag] = STATE(5),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_p_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(24), 1,
      sym_text,
    ACTIONS(19), 2,
      anon_sym_,
      sym__new_block,
    STATE(4), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [16] = 4,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(27), 2,
      anon_sym_,
      sym__new_block,
    STATE(4), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [32] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      sym_text,
    STATE(7), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [47] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_text,
    STATE(8), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [62] = 4,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(44), 1,
      sym_text,
    STATE(8), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [77] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      sym_text,
    STATE(10), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [92] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      sym_text,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(8), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [107] = 1,
    ACTIONS(53), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [114] = 1,
    ACTIONS(55), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [121] = 2,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_text,
  [129] = 2,
    ACTIONS(61), 1,
      sym_text,
    ACTIONS(53), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [137] = 2,
    ACTIONS(63), 1,
      sym_text,
    ACTIONS(55), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [145] = 1,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
  [149] = 1,
    ACTIONS(67), 1,
      sym_tag_name,
  [153] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [157] = 1,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
  [161] = 1,
    ACTIONS(73), 1,
      sym_tag_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 16,
  [SMALL_STATE(6)] = 32,
  [SMALL_STATE(7)] = 47,
  [SMALL_STATE(8)] = 62,
  [SMALL_STATE(9)] = 77,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 107,
  [SMALL_STATE(12)] = 114,
  [SMALL_STATE(13)] = 121,
  [SMALL_STATE(14)] = 129,
  [SMALL_STATE(15)] = 137,
  [SMALL_STATE(16)] = 145,
  [SMALL_STATE(17)] = 149,
  [SMALL_STATE(18)] = 153,
  [SMALL_STATE(19)] = 157,
  [SMALL_STATE(20)] = 161,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(17),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(20),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(8),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
