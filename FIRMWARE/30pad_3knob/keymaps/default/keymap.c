#include QMK_KEYBOARD_H
#include "midi.h"


extern MidiDevice midi_device;


enum midi_cc_keycodes_LTRM { MIDI_CC1 = SAFE_RANGE, MIDI_CC2, MIDI_CC3, MIDI_CC4, MIDI_CC5, MIDI_CC6, MIDI_CC7, MIDI_CC8, MIDI_CC9, MIDI_CC10, MIDI_CC11, MIDI_CC12, MIDI_CC13, MIDI_CC14, MIDI_CC15, MIDI_ENCH1_1, MIDI_ENCH1_2, MIDI_ENCH2_1, MIDI_ENCH2_2, MIDI_ENCH3_1, MIDI_ENCH3_2};
static uint8_t current_MIDI_ccNumber         = 1;
static uint8_t current_MIDI_ccNumber1        = 16;
static uint8_t current_MIDI_ccNumber2        = 31;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
    	KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,         KC_U,         KC_I,    KC_O,    KC_P,
	KC_A,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,         KC_J,         KC_K,    KC_L,    TO(1),
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,          KC_N,         KC_M,         KC_COMM, KC_DOT,  KC_SLSH
),

[1] = LAYOUT(
    	KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,         KC_U,         KC_I,    KC_O,    KC_P,
	KC_A,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,         KC_J,         KC_K,    KC_L,    TO(2),
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,          KC_N,         KC_M,         KC_COMM, KC_DOT,  KC_SLSH
),

[2] = LAYOUT(
    	KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,         KC_U,         KC_I,    KC_O,    KC_P,
	KC_A,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,         KC_J,         KC_K,    KC_L,    TO(3),
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,          KC_N,         KC_M,         KC_COMM, KC_DOT,  KC_SLSH
),

[3] = LAYOUT(
    	MIDI_CC1,    MIDI_CC2,    MIDI_CC3,    MIDI_CC12,    MI_C,          MI_D,         MI_E,         KC_I,    KC_O,    KC_P,
	MIDI_CC4,    MIDI_CC5,    MIDI_CC6,    MIDI_CC7,    MI_F,          MI_G,         MI_A,         KC_K,    KC_L,    TO(0),
        MIDI_CC8,    MIDI_CC9,    MIDI_CC10,    MIDI_CC11,    MI_B,          MI_C1,         MI_D1,         KC_COMM, KC_DOT,  KC_SLSH
)

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MIDI_CC1:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 1;
                current_MIDI_ccNumber1        = 16;
                current_MIDI_ccNumber2        = 31;
            } else {
            }
            return false;
            break;
        case MIDI_CC2:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 2;
                current_MIDI_ccNumber1        = 17;
                current_MIDI_ccNumber2        = 32;
            } else {
            }
            return false;
            break;
        case MIDI_CC3:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 3;
                current_MIDI_ccNumber1        = 18;
                current_MIDI_ccNumber2        = 33;
            } else {
            }
            return false;
            break;
        case MIDI_CC4:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 4;
                current_MIDI_ccNumber1        = 19;
                current_MIDI_ccNumber2        = 34;
            } else {
            }
            return false;
            break;
        case MIDI_CC5:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 5;
                current_MIDI_ccNumber1        = 20;
                current_MIDI_ccNumber2        = 35;
            } else {
            }
            return false;
            break;
        case MIDI_CC6:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 6;
                current_MIDI_ccNumber1        = 21;
                current_MIDI_ccNumber2        = 36;
            } else {
            }
            return false;
            break;
        case MIDI_CC7:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 7;
                current_MIDI_ccNumber1        = 22;
                current_MIDI_ccNumber2        = 37;
            } else {
            }
            return false;
            break;
        case MIDI_CC8:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 8;
                current_MIDI_ccNumber1        = 23;
                current_MIDI_ccNumber2        = 38;
            } else {
            }
            return false;
            break;
        case MIDI_CC9:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 9;
                current_MIDI_ccNumber1        = 24;
                current_MIDI_ccNumber2        = 39;
            } else {
            }
            return false;
            break;
        case MIDI_CC10:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 10;
                current_MIDI_ccNumber1        = 25;
                current_MIDI_ccNumber2        = 40;
            } else {
            }
            return false;
            break;
        case MIDI_CC11:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 11;
                current_MIDI_ccNumber1        = 26;
                current_MIDI_ccNumber2        = 41;
            } else {
            }
            return false;
            break;
        case MIDI_CC12:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 12;
                current_MIDI_ccNumber1        = 27;
                current_MIDI_ccNumber2        = 42;
            } else {
            }
            return false;
            break;
        case MIDI_CC13:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 13;
                current_MIDI_ccNumber1        = 28;
                current_MIDI_ccNumber2        = 43;
            } else {
            }
            return false;
            break;
        case MIDI_CC14:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 14;
                current_MIDI_ccNumber1        = 29;
                current_MIDI_ccNumber2        = 44;
            } else {
            }
            return false;
            break;
        case MIDI_CC15:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 15;
                current_MIDI_ccNumber1        = 30;
                current_MIDI_ccNumber2        = 45;
            } else {
            }
            return false;
            break;
        case MIDI_ENCH1_1:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, 0, current_MIDI_ccNumber, 65);
            } else {
            }
            return true;
        case MIDI_ENCH1_2:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, 0, current_MIDI_ccNumber, 63);
            } else {
            }
            return true;
        case MIDI_ENCH2_1:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, 0, current_MIDI_ccNumber1, 65);
            } else {
            }
            return true;
        case MIDI_ENCH2_2:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, 0, current_MIDI_ccNumber1, 63);
            } else {
            }
            return true;
        case MIDI_ENCH3_1:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, 0, current_MIDI_ccNumber2, 65);
            } else {
            }
            return true;
        case MIDI_ENCH3_2:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, 0, current_MIDI_ccNumber2, 63);
            } else {
            }
            return true;
        default:
            break;
    }
    return true;
}

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_A, KC_Y), ENCODER_CCW_CW(KC_PGDN, KC_PGUP), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1]   = { ENCODER_CCW_CW(KC_A, KC_Y), ENCODER_CCW_CW(KC_PGDN, KC_PGUP), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [2]  = { ENCODER_CCW_CW(KC_A, KC_Y), ENCODER_CCW_CW(KC_PGDN, KC_PGUP), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [3]  = { ENCODER_CCW_CW(MIDI_ENCH2_2, MIDI_ENCH2_1), ENCODER_CCW_CW(MIDI_ENCH1_2, MIDI_ENCH1_1), ENCODER_CCW_CW(MIDI_ENCH3_2, MIDI_ENCH3_1) }
	
};
#endif

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case 0:
            rgblight_sethsv(255,255,20);
            break;
        case 1:
            
            rgblight_sethsv_noeeprom(35,255,20);
            break;
        case 2:
            
            rgblight_sethsv_noeeprom(100,255,20);
            break;
        case 3:
            rgblight_sethsv_noeeprom(180,255,20);
            break;
        default: // for any other layers, or the default layer
            
            rgblight_sethsv(255,255,20);
            break;
    }
  return state;
}