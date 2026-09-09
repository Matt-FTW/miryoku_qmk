#pragma once

#define MIRYOKU_MAPPING LAYOUT_miryoku

#define LAYOUT_miryoku( \
  K00, K01, K02, K03, K04,          K05, K06, K07, K08, K09, \
  K10, K11, K12, K13, K14,          K15, K16, K17, K18, K19, \
  K20, K21, K22, K23, K24,          K25, K26, K27, K28, K29, \
  N30, N31, K32, K33, K34,          K35, K36, K37, N38, N39 \
) \
LAYOUT_split_3x5_3( \
  K00, K01, K02, K03, K04,          K05, K06, K07, K08, K09, \
  K10, K11, K12, K13, K14,          K15, K16, K17, K18, K19, \
  K20, K21, K22, K23, K24,          K25, K26, K27, K28, K29, \
                K32, K33, K34,          K35, K36, K37 \
)

// default but used in macros
// #undef TAPPING_TERM
// #define TAPPING_TERM 250

// better when fast typing
// #define PERMISSIVE_HOLD

#define TAPPING_TERM 250
#define PERMISSIVE_HOLD
#define FLOW_TAP_TERM 150
#define CHORDAL_HOLD
#define SPECULATIVE_HOLD

#undef SPLIT_USB_DETECT

// better home-row mods by https://sunaku.github.io/home-row-mods.html
// #define IGNORE_MOD_TAP_INTERRUPT
// #define BILATERAL_COMBINATIONS
// #define BILATERAL_COMBINATIONS_LIMIT_CHORD_TO_N_KEYS 4 /* GUI, Alt, Ctrl, Shift */
// #define BILATERAL_COMBINATIONS_DELAY_MODS_THAT_MATCH MOD_MASK_GUI
// #define BILATERAL_COMBINATIONS_DELAY_MATCHED_MODS_BY 120  /* ms */
// #define BILATERAL_COMBINATIONS_ALLOW_CROSSOVER_AFTER 80   /* ms */
// #define BILATERAL_COMBINATIONS_ALLOW_SAMESIDED_AFTER 3000 /* ms */
// #define BILATERAL_COMBINATIONS_TYPING_STREAK_TIMEOUT 160  /* ms */
// #define BILATERAL_COMBINATIONS_TYPING_STREAK_MODMASK (~MOD_MASK_SHIFT)

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       14
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      4
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    50

// custom speeds
#define MK_3_SPEED
#define MK_C_OFFSET_0           8
#define MK_C_OFFSET_1           13
#define MK_C_OFFSET_2           22
#define MOUSEKEY_INERTIA

#include "users/manna-harbour_miryoku/config.h"
