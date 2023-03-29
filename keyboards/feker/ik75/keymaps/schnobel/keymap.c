/* Copyright 2022 Feker
 * Copyright 2022 HorrorTroll <https://github.com/HorrorTroll>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN,
};

enum custom_keycodes {
    SCHN_M0 = SAFE_RANGE,
    SCHN_M1,
};
/*
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
                NK_TOGG,    KC_F1,       _______,     _______,     _______,     LCA(KC_F5),  RCS(KC_L),   _______,     _______,     _______,     _______,         KC_SCRL,     KC_NUM,      G(KC_L),                  RGB_TOG,
                _______,    LCA(KC_1),   _______,     _______,     _______,     LCA(KC_F5),  _______,     _______,     _______,     _______,     _______,         _______,     _______,     _______,                  RGB_MOD,
                _______,    _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     KC_PSCR,         _______,     _______,     _______,                  RGB_HUI,
                _______,    _______,     KC_SCRL,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,         _______,                  _______,     RGB_SAI,
                _______,                 _______,     _______,     _______,     _______,     _______,     KC_NUM,      _______,     _______,     _______,         _______,                  _______,     RGB_VAI,     RGB_SAD,
                _______,    GUI_TOG,     _______,                                            _______,                               _______,     _______,                      _______,     _______,     RGB_VAD,     _______
            ),
};
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
                KC_ESC,     RGUI(KC_V), KC_F2,        KC_F3,       KC_F4,       KC_F5,       SCHN_M1,     KC_F7,       KC_F8,       KC_F9,       KC_F10,          KC_F11,      KC_F12,     KC_DEL,                    KC_NO, 
                KC_GRV,     KC_1,       KC_2,         KC_3,        KC_4,        KC_5,        KC_6,        KC_7,        KC_8,        KC_9,        KC_0,            KC_MINS,     KC_EQL,     KC_BSPC,                   KC_HOME,
                KC_TAB,     KC_Q,       KC_W,         KC_E,        KC_R,        KC_T,        KC_Y,        KC_U,        KC_I,        KC_O,        KC_P,            KC_LBRC,     KC_RBRC,    KC_BSLS,                   KC_END,
                KC_CAPS,    KC_A,       KC_S,         KC_D,        KC_F,        KC_G,        KC_H,        KC_J,        KC_K,        KC_L,        KC_SCLN,         KC_QUOT,                 KC_ENT,                    KC_PGUP,
                KC_LSFT,                KC_Z,         KC_X,        KC_C,        KC_V,        KC_B,        KC_N,        KC_M,        KC_COMM,     KC_DOT,          KC_SLSH,                 KC_RSFT,      KC_UP,       KC_PGDN,
                KC_LCTL,    KC_LGUI,    KC_LALT,                                             KC_SPC,                                KC_RALT,     LT(1,KC_APP),    KC_RCTL,                 KC_LEFT,      KC_DOWN,     KC_RGHT
            ),
	[_FN] = LAYOUT(
                QK_BOOT,    KC_F1,      _______,      _______,     _______,     LCA(KC_F5),  RCS(KC_L),   _______,     _______,     _______,     _______,         KC_SCRL,     KC_NUM,     G(KC_L),                   RGB_TOG,
                _______,    LCA(KC_1),  _______,      _______,     _______,     LCA(KC_F5),  _______,     _______,     _______,     _______,     _______,         RGB_VAD,     RGB_VAI,    _______,                   KC_PSCR,
                _______,    _______,    _______,      C(G(KC_E)),  C(G(KC_R)),  MEH(KC_T),   _______,     _______,     _______,     _______,     _______,         _______,     _______,    _______,                   RGB_TOG,
                NK_TOGG,    C(G(KC_A)), _______,      C(G(KC_D)),  MEH(KC_F),   _______,     _______,     _______,     _______,     _______,     _______,         _______,                 _______,                   RGB_RMOD,
                _______,                C(G(KC_Z)),   _______,     _______,     SCHN_M0,     _______,     _______,     _______,     _______,     _______,         _______,                 _______,      RGB_HUI,     RGB_MOD,
                _______,    _______,    _______,                                             _______,                               KC_RGUI,     _______,         KC_APP,                  RGB_SAD,      RGB_HUD,     RGB_SAI
            ),
};

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
                SEND_STRING_DELAY(SS_TAP(X_LALT)"HMC", 75);
                return true;
            }
        case SCHN_M0:
            if (record->event.pressed) {
                SEND_STRING_DELAY(SS_TAP(X_APP)"V", 75);
                return true;
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
    [_BASE] = { ENCODER_CCW_CW(KC_WH_D, KC_WH_U) },
    [_FN]   = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD) },
};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
