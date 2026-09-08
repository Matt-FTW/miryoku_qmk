#pragma once

#define MIRYOKU_LAYER_BASE \
    KC_Q,          KC_W,          KC_F,                KC_P,              KC_B,                KC_J,              KC_L,               KC_U,          KC_Y,            KC_QUOT,      \
    LGUI_T(KC_A),  LALT_T(KC_R),  LCTL_T(KC_S),        LSFT_T(KC_T),      KC_G,                KC_M,              LSFT_T(KC_N),       LCTL_T(KC_E),  LALT_T(KC_I),    LGUI_T(KC_O), \
    KC_Z,          ALGR_T(KC_X),  KC_C,                KC_D,              KC_V,                KC_K,              KC_H,               KC_COMM,       ALGR_T(KC_DOT),  LT(U_BUTTON,KC_SLSH), \
    U_NP,          U_NP,          LT(U_MEDIA,KC_ESC),  LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),  LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC),  KC_LSFT,       U_NP,            U_NP


#define MIRYOKU_LAYER_NAV \
    KC_LEFT,       KC_DOWN,       KC_UP,         KC_RGHT,       KC_BTN5,       KC_HOME,       KC_MS_L,       KC_END,        KC_HOME,       KC_SCLN,      \
    KC_LGUI,       KC_LALT,       KC_LCTL,       KC_LSFT,       KC_SCLN,       KC_CAPS,       KC_LEFT,       KC_DOWN,       KC_UP,         KC_RGHT,      \
    KC_DEL,        U_CUT,         U_CPY,         U_PST,         KC_INS,        KC_END,        KC_WH_L,       KC_WH_D,       KC_WH_U,       KC_WH_R,      \
    U_NP,          U_NP,          U_NA,          U_NA,          U_NA,          KC_ACL0,       KC_ACL1,       KC_ACL2,       U_NP,          U_NP


#define MIRYOKU_LAYER_MOUSE \
    U_UND,         U_CUT,         U_CPY,         U_PST,         U_RDO,         U_NA,          KC_ACL2,       KC_END,        KC_HOME,       C(KC_ESCAPE), \
    KC_BTN4,       KC_BTN3,       KC_BTN2,       KC_BTN1,       KC_BTN5,       U_NU,          KC_MS_L,       KC_MS_D,       KC_MS_U,       KC_MS_R,      \
    U_NA,          C(A(KC_ESCAPE)), C(KC_ESCAPE), C(S(KC_ESCAPE)), U_NA,      U_NU,          KC_WH_L,       KC_WH_D,       KC_WH_U,       KC_WH_R,      \
    U_NP,          U_NP,          U_NA,          U_NA,          U_NA,          KC_ACL0,       KC_ACL1,       KC_ACL2,       U_NP,          U_NP


#define MIRYOKU_LAYER_MEDIA \
    TD(U_TD_BOOT),  TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), U_NA,      RGB_TOG,       RGB_MOD,       KC_BRID,       KC_BRIU,       U_NU,   \
    KC_LGUI,       KC_MPRV,       KC_MPLY,       KC_MNXT,       U_NA,          U_NU,          U_NA,          KC_VOLD,       KC_VOLU,       KC_MUTE,      \
    U_NA,          KC_ALGR,       TD(U_TD_U_FUN), TD(U_TD_U_MEDIA), U_NA,     OU_AUTO,       U_NU,          U_NU,          U_NU,          U_NU,         \
    U_NP,          U_NP,          U_NA,          U_NA,          U_NA,          S(KC_PSCR),    KC_PSCR,       C(S(LGUI(KC_L))),       U_NP,          U_NP

#define MIRYOKU_LAYER_NUM \
    KC_F11,        KC_7,          KC_8,          KC_9,          KC_F12,        U_NA,          U_NA,          U_NA,          U_NA,          U_NA,         \
    KC_F5,         KC_4,          KC_5,          KC_6,          KC_F4,         U_NA,          KC_LSFT,       KC_LCTL,       KC_LALT,       KC_LGUI,      \
    KC_F1,         KC_1,          KC_2,          KC_3,          KC_F2,         U_NA,          KC_PAST,       KC_COMM,       KC_DOT,        KC_SLSH,      \
    U_NP,          U_NP,          KC_MINS,       KC_0,          KC_PLUS,       U_NA,          U_NA,          U_NA,          U_NP,          U_NP


#define MIRYOKU_LAYER_SYM \
    KC_GRAVE,      KC_TILD,       KC_HASH,       KC_AMPR,       KC_PIPE,       KC_CIRC,       KC_LCBR,       KC_RCBR,       KC_LBRC,       KC_RBRC,      \
    KC_EXLM,       KC_UNDS,       KC_COLN,       KC_EQL,        KC_DLR,        KC_AT,         KC_LPRN,       KC_RPRN,       KC_UNDS,       KC_SCLN,      \
    KC_PERC,       KC_QUES,       KC_ASTR,       KC_PLUS,       KC_BSLS,       KC_SLSH,       KC_MINS,       KC_LT,         KC_GT,         KC_DQUO,      \
    U_NP,          U_NP,          KC_LSFT,       U_NA,          U_NA,          U_NA,          U_NA,          U_NA,          U_NP,          U_NP

#include "users/manna-harbour_miryoku/manna-harbour_miryoku.h"
