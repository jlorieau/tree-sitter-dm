#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_RBRACE = 1,
  sym_text = 2,
  sym__new_block = 3,
  sym_tag_start = 4,
  sym_document = 5,
  sym_p = 6,
  sym_node = 7,
  sym_tag = 8,
  aux_sym_document_repeat1 = 9,
  aux_sym_p_repeat1 = 10,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_RBRACE] = "}",
  [sym_text] = "text",
  [sym__new_block] = "_new_block",
  [sym_tag_start] = "tag_start",
  [sym_document] = "document",
  [sym_p] = "p",
  [sym_node] = "node",
  [sym_tag] = "tag",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_p_repeat1] = "p_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_text] = sym_text,
  [sym__new_block] = sym__new_block,
  [sym_tag_start] = sym_tag_start,
  [sym_document] = sym_document,
  [sym_p] = sym_p,
  [sym_node] = sym_node,
  [sym_tag] = sym_tag,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_p_repeat1] = aux_sym_p_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_tag_start] = {
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
  [sym_node] = {
    .visible = true,
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
  [8] = 7,
  [9] = 4,
  [10] = 6,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 11,
  [16] = 12,
  [17] = 14,
  [18] = 18,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '@') ADVANCE(3);
      if (lookahead == '}') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '@') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == '{') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(7);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(7);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(7);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(7);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(7);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(7);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_tag_start);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [sym_tag_start] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(18),
    [sym_p] = STATE(2),
    [sym_node] = STATE(5),
    [sym_tag] = STATE(11),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_p_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [sym_tag_start] = ACTIONS(7),
  },
  [2] = {
    [sym_p] = STATE(3),
    [sym_node] = STATE(5),
    [sym_tag] = STATE(11),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_p_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_text] = ACTIONS(5),
    [sym_tag_start] = ACTIONS(7),
  },
  [3] = {
    [sym_p] = STATE(3),
    [sym_node] = STATE(5),
    [sym_tag] = STATE(11),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_p_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_text] = ACTIONS(13),
    [sym_tag_start] = ACTIONS(16),
  },
  [4] = {
    [sym_node] = STATE(6),
    [sym_tag] = STATE(15),
    [aux_sym_p_repeat1] = STATE(6),
    [anon_sym_RBRACE] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
    [sym_tag_start] = ACTIONS(23),
  },
  [5] = {
    [sym_node] = STATE(7),
    [sym_tag] = STATE(11),
    [aux_sym_p_repeat1] = STATE(7),
    [sym_text] = ACTIONS(25),
    [sym__new_block] = ACTIONS(27),
    [sym_tag_start] = ACTIONS(7),
  },
  [6] = {
    [sym_node] = STATE(8),
    [sym_tag] = STATE(15),
    [aux_sym_p_repeat1] = STATE(8),
    [anon_sym_RBRACE] = ACTIONS(29),
    [sym_text] = ACTIONS(21),
    [sym_tag_start] = ACTIONS(23),
  },
  [7] = {
    [sym_node] = STATE(7),
    [sym_tag] = STATE(11),
    [aux_sym_p_repeat1] = STATE(7),
    [sym_text] = ACTIONS(31),
    [sym__new_block] = ACTIONS(34),
    [sym_tag_start] = ACTIONS(36),
  },
  [8] = {
    [sym_node] = STATE(8),
    [sym_tag] = STATE(15),
    [aux_sym_p_repeat1] = STATE(8),
    [anon_sym_RBRACE] = ACTIONS(34),
    [sym_text] = ACTIONS(39),
    [sym_tag_start] = ACTIONS(42),
  },
  [9] = {
    [sym_node] = STATE(10),
    [sym_tag] = STATE(15),
    [aux_sym_p_repeat1] = STATE(10),
    [anon_sym_RBRACE] = ACTIONS(45),
    [sym_text] = ACTIONS(21),
    [sym_tag_start] = ACTIONS(23),
  },
  [10] = {
    [sym_node] = STATE(8),
    [sym_tag] = STATE(15),
    [aux_sym_p_repeat1] = STATE(8),
    [anon_sym_RBRACE] = ACTIONS(47),
    [sym_text] = ACTIONS(21),
    [sym_tag_start] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(49), 3,
      sym_text,
      sym__new_block,
      sym_tag_start,
  [6] = 1,
    ACTIONS(51), 3,
      sym_text,
      sym__new_block,
      sym_tag_start,
  [12] = 2,
    ACTIONS(55), 1,
      sym_tag_start,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_text,
  [20] = 1,
    ACTIONS(57), 3,
      sym_text,
      sym__new_block,
      sym_tag_start,
  [26] = 2,
    ACTIONS(59), 1,
      sym_text,
    ACTIONS(49), 2,
      anon_sym_RBRACE,
      sym_tag_start,
  [34] = 2,
    ACTIONS(61), 1,
      sym_text,
    ACTIONS(51), 2,
      anon_sym_RBRACE,
      sym_tag_start,
  [42] = 2,
    ACTIONS(63), 1,
      sym_text,
    ACTIONS(57), 2,
      anon_sym_RBRACE,
      sym_tag_start,
  [50] = 1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 6,
  [SMALL_STATE(13)] = 12,
  [SMALL_STATE(14)] = 20,
  [SMALL_STATE(15)] = 26,
  [SMALL_STATE(16)] = 34,
  [SMALL_STATE(17)] = 42,
  [SMALL_STATE(18)] = 50,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(11),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(4),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(15),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(9),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [65] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
