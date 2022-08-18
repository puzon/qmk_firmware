#include QMK_KEYBOARD_H
#include "keymap.h"

enum delock_layers {
  _NUMPAD,
  _LAYER1,
  _LAYER2,
  _FN
};

#define FN MO(_FN)
#define NUMPAD TG(_NUMPAD)
#define LAYER1 TG(_LAYER1)
#define LAYER2 TG(_LAYER2)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_NUMPAD] = 
        LAYOUT(
                KC_NLCK, KC_PSLS, KC_PAST, KC_BSPC, 
                KC_P7,   KC_P8,   KC_P9,   KC_PMNS, 
                KC_P4,   KC_P5,   KC_P6,   KC_PPLS, 
                KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        FN,     KC_P0,   KC_INS,  KC_PDOT
        ),
    [_FN] =
        LAYOUT(
                _______, _______, _______, _______, 
                _______, _______, _______, _______, 
                _______, _______, _______, _______, 
                NUMPAD,  LAYER1,  LAYER2, _______,
        FN,     _______, _______, _______
        )
};

void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom(); // enables Rgb, without saving settings
    rgblight_sethsv_noeeprom(HSV_BLACK);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch(biton32(state)) {
        case _FN: 
            rgblight_sethsv_noeeprom(HSV_WHITE);
            break;
        case _LAYER1: 
            rgblight_sethsv_noeeprom(HSV_ORANGE);
            break;
        case _LAYER2: 
            rgblight_sethsv_noeeprom(HSV_CYAN);
            break;
        case _NUMPAD: 
        default: 
            if (host_keyboard_led_state().caps_lock) {
                rgblight_sethsv_noeeprom(HSV_GREEN);
            } else {
                rgblight_sethsv_noeeprom(HSV_BLACK);
            }
            break;

    }

    return state;
}

bool led_update_user(led_t led_state) {
    if(biton32(layer_state) == _NUMPAD) {
        if (led_state.num_lock) {
            rgblight_sethsv_noeeprom(HSV_GREEN);
        } else {
            rgblight_sethsv_noeeprom(HSV_BLACK);
        }
    }

    return true;
}