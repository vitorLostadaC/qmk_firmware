#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,    KC_Q,     KC_W,    KC_E,     KC_R,     KC_T,                       KC_Y,    KC_U,     KC_I,    KC_O,     KC_P,     KC_BSPC,
        KC_LCTL,   KC_A,     KC_S,    KC_D,     KC_F,     KC_G,                       KC_H,    KC_J,     KC_K,    KC_L,     KC_SCLN,  KC_QUOT,
        KC_LSFT,    KC_Z,     KC_X,    KC_C,     KC_V,     KC_B,                       KC_N,    KC_M,     KC_COMM, KC_DOT,   KC_SLSH,  KC_LSFT,
        LALT_T(KC_NO), OSL(2), KC_SPC,                                         KC_ENT, LT(1,KC_ESC), LGUI_T(KC_LGUI)
    ),

    [1] = LAYOUT_split_3x6_3(
        KC_TAB,    KC_1,     KC_2,    KC_3,     KC_4,     KC_5,                       KC_6,    KC_7,     KC_8,    KC_9,     KC_0,     KC_BSPC,
        ALL_T(KC_NO), KC_NO, KC_BTN1, KC_MS_U,  KC_BTN2,  KC_WH_U,                    KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT,  KC_NO,    KC_NO,
        KC_LCTL,   KC_LSFT,    KC_MS_L, KC_MS_D,  KC_MS_R,  KC_WH_D,                    KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,
        KC_LALT,   MO(3),    KC_SPC,    LSFT_T(KC_ENT),  KC_TRNS,   KC_LGUI
    ),

    [2] = LAYOUT_split_3x6_3(
        LCTL(KC_GRV),    KC_EXLM,  KC_AT,   KC_HASH,  KC_DLR,   KC_PERC,                    KC_CIRC, KC_AMPR,  KC_LPRN, KC_RPRN,  KC_GRV,  KC_BSPC,
        LGUI(KC_V),   KC_QUOT,  KC_MINS, KC_PLUS,  KC_EQL,   KC_HASH,                    KC_UNDS, KC_COLN,  KC_LCBR, KC_RCBR,  KC_QUES,  LSFT(KC_DOT),
        LGUI(KC_C),   KC_CIRC,  KC_SLSH, KC_ASTR,  KC_BSLS,  KC_PIPE,                    KC_TILD, KC_DQUO,  KC_LBRC, KC_RBRC,  KC_AT,    KC_NO,
        KC_LALT,   KC_ESC,   KC_SPC,     LSFT(KC_ENT),  KC_UNDS,   KC_LGUI
    ),

    [3] = LAYOUT_split_3x6_3(
        QK_BOOT,   KC_F1,    KC_F2,   KC_F3,    KC_F4,    KC_F5,                      KC_NO,   KC_MPRV,  KC_MNXT, KC_F11,   KC_F12,   KC_PSCR,
        RGB_TOG,   RGB_HUI,  RGB_SAI, RGB_VAI,  KC_NO,    KC_NO,                      KC_MUTE, KC_VOLD,  KC_VOLU, KC_MPLY,  KC_NO,    KC_NO,
        RGB_MOD,   RGB_HUD,  RGB_SAD, RGB_VAD,  KC_NO,    KC_NO,                      KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,
        KC_NO,     KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_NO
    )
};
