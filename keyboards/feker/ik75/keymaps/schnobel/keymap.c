#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN,
};

enum custom_keycodes {
    SCHN_M0 = SAFE_RANGE,
    SCHN_M1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     [_BASE] = LAYOUT(
                KC_ESC,     G(KC_V),     KC_F2,       KC_F3,       KC_F4,       KC_F5,       SCHN_M1,     KC_F7,       KC_F8,       KC_F9,       KC_F10,          KC_F11,      KC_F12,      KC_DEL,                   KC_MUTE,
                KC_GRV,     KC_1,        KC_2,        KC_3,        KC_4,        KC_5,        KC_6,        KC_7,        KC_8,        KC_9,        KC_0,            KC_MINS,     KC_EQL,      KC_BSPC,                  KC_HOME,
                KC_TAB,     KC_Q,        KC_W,        KC_E,        KC_R,        KC_T,        KC_Y,        KC_U,        KC_I,        KC_O,        KC_P,            KC_LBRC,     KC_RBRC,     KC_BSLS,                  KC_END,
                KC_CAPS,    KC_A,        KC_S,        KC_D,        KC_F,        KC_G,        KC_H,        KC_J,        KC_K,        KC_L,        KC_SCLN,         KC_QUOT,                  KC_ENT,      KC_PGUP,
                KC_LSFT,                 KC_Z,        KC_X,        KC_C,        KC_V,        KC_B,        KC_N,        KC_M,        KC_COMM,     KC_DOT,          KC_SLSH,                  KC_RSFT,     KC_UP,       KC_PGDN,
                KC_LCTL,    KC_LGUI,     KC_LALT,                                            KC_SPC,                                KC_RALT,     LT(_FN,KC_APP),               KC_RCTL,     KC_LEFT,     KC_DOWN,     KC_RIGHT
            ),
   
    [_FN] = LAYOUT(
                NK_TOGG,    KC_F1,       KC_WHOM,     KC_CALC,     KC_SLCT,     KC_MPRV,     KC_MNXT,     KC_MPLY,     KC_MSTP,     KC_MUTE,     KC_VOLD,         KC_VOLU,     KC_MAIL,     _______,                  RGB_TOG,
                NK_TOGG,    _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,         RGB_SPD,     RGB_SPI,     _______,                  RGB_MOD,
                _______,    _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     KC_PSCR,         _______,     _______,     _______,                  RGB_HUI,
                _______,    _______,     KC_SCRL,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,         _______,                  _______,     RGB_SAI,
                _______,                 _______,     _______,     _______,     _______,     _______,     KC_NUM,      _______,     _______,     _______,         _______,                  _______,     RGB_VAI,     RGB_SAD,
                _______,    GUI_TOG,     _______,                                            _______,                               _______,     _______,                      _______,     _______,     RGB_VAD,     _______
            ),
};
/*
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(KC_ESC, RGUI(KC_V), KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_MUTE, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_HOME, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_END, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_PGUP, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_PGDN, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, LT(1,KC_APP), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),
	[_FN] = LAYOUT(NK_TOGG, KC_F1, KC_TRNS, KC_TRNS, KC_TRNS, LCA(KC_F5), RCS(KC_L), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SCRL, KC_NUM, G(KC_L), RGB_TOG, KC_TRNS, LCA(KC_1), KC_TRNS, KC_TRNS, KC_TRNS, LCA(KC_F5), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_VAD, RGB_VAI, KC_TRNS, KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS, C(G(KC_E)), C(G(KC_R)), MEH(KC_T), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_RMOD, QK_BOOT, C(G(KC_A)), KC_TRNS, C(G(KC_D)), MEH(KC_F), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_MOD, KC_TRNS, C(G(KC_Z)), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUI, RGB_TOG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RGUI, KC_TRNS, KC_APP, RGB_SAD, RGB_HUD, RGB_SAI)
};
*/

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RGB_TOG:
            if (record->event.pressed) {
                switch (rgb_matrix_get_flags()) {
                    case LED_FLAG_ALL: {
                        rgb_matrix_set_flags(LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER | LED_FLAG_INDICATOR);
                        rgb_matrix_set_color_all(0, 0, 0);
                    }
                    break;
                    case (LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER | LED_FLAG_INDICATOR): {
                        rgb_matrix_set_flags(LED_FLAG_UNDERGLOW);
                        rgb_matrix_set_color_all(0, 0, 0);
                    }
                    break;
                    case (LED_FLAG_UNDERGLOW): {
                        rgb_matrix_set_flags(LED_FLAG_NONE);
                        rgb_matrix_set_color_all(0, 0, 0);
                    }
                    break;
                    default: {
                        rgb_matrix_set_flags(LED_FLAG_ALL);
                        rgb_matrix_enable_noeeprom();
                    }
                    break;
                }
            }
            return false;
        case SCHN_M1:
            if (record->event.pressed) {
                // SEND_STRING(SS_DOWN(X_LALT) "H" SS_UP(X_LALT) "MC");
                return false;
            }
	}

    return true;
}

bool rgb_matrix_indicators_user(void) {
    rgb_matrix_set_color(46, 0, 0, 0);
    rgb_matrix_set_color(104, 0, 0, 0);

    uint8_t red = host_keyboard_led_state().caps_lock ? 255 : 0;
    uint8_t green = host_keyboard_led_state().scroll_lock ? 255 : 0;
    uint8_t blue = keymap_config.no_gui ? 255 : 0;


    if ((rgb_matrix_get_flags() & LED_FLAG_KEYLIGHT)) {
        if (host_keyboard_led_state().num_lock) {
            rgb_matrix_set_color(46, 255, 0, 0);
        }
        rgb_matrix_set_color(104, red, green, blue);
    } else {
        if (host_keyboard_led_state().num_lock) {
            rgb_matrix_set_color(46, 255, 0, 0);
        } else {
            rgb_matrix_set_color(46, 0, 0, 0);
        }
        rgb_matrix_set_color(104, red, green, blue);
    }
    return false;
}

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_FN]   = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
