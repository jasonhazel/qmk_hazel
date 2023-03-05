#pragma once

#include "config_common.h"

#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { B1, B3, B2, B6 }
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6, D4 }

// #define MATRIX_ROW_PINS_RIGHT { D7, E6, B4, B5 }
// #define MATRIX_COL_PINS_RIGHT { B2, B3, B1, F7, F6 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define USE_SERIAL
#define SOFT_SERIAL_PIN D3

#define EE_HANDS

#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 0
#define BOOTMAGIC_LITE_ROW_RIGHT    4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 4
