#pragma once

#include "config_common.h"

#define MATRIX_ROWS 7
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { B3, B2, B6, D3, D2, D4, E6 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, D7 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define ENCODERS_PAD_A {B4}
#define ENCODERS_PAD_B {B5}

#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 0