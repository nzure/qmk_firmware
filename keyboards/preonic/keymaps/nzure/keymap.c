/* Copyright 2015-2021 Jack Humbert
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
#include "muse.h"

enum preonic_layers {
	_QWERTY,
	_WORKMAN,
	_LOWER,
	_RAISE,
	_ADJUST
};

enum preonic_keycodes {
	QWERTY = SAFE_RANGE,
	WORKMAN,
	LOWER,
	RAISE,
	ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ╭───────────────────────────────────────────────────────────────────────────────────────────────────╮
 * │ Esc ~ │   1   │   2   │   3   │   4   │   5   │   6   │   7   │   8   │   9   │   0   │ Backspace │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────────┤
 * │  Tab  │   Q   │   W   │   E   │   R   │   T   │   Y   │   U   │   I   │   O   │   P   │  Delete   │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────────┤
 * │ LCtrl │   A   │   S   │   D   │   F   │   G   │   H   │   J   │   K   │   L   │   ;   │   Enter   │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────────┤
 * │ Shift │   Z   │   X   │   C   │   V   │   B   │   N   │   M   │   ,   │   .   │   /   │   Shift   │
 * ├───────┼───────┼───────┼───────┼───────┼───────┴───────┼───────┼───────┼───────┼───────┼───────────┤
 * │ RAlt  │ LCtrl │ LAlt  │ Super │ Raise │     Space     │ Lower │ Left  │ Down  │  Up   │   Right   │
 * ╰───────────────────────────────────────────────────────────────────────────────────────────────────╯
 */
[_QWERTY] = LAYOUT_preonic_grid(
	QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,  KC_5,     KC_6,     KC_7,  KC_8,     KC_9,    KC_0,         KC_BSPC,
	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,     KC_Y,     KC_U,  KC_I,     KC_O,    KC_P,         KC_DEL,
	KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,  KC_G,     KC_H,     KC_J,  KC_K,     KC_L,    KC_SEMICOLON, KC_ENTER,
	KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,     KC_N,     KC_M,  KC_COMMA, KC_DOT,  KC_SLASH,     KC_RSFT,
	KC_RALT, KC_LCTL, KC_LALT, KC_LGUI, RAISE, KC_SPACE, KC_SPACE, LOWER, KC_LEFT,  KC_DOWN, KC_UP,        KC_RIGHT
),

/* Workman
 * ╭───────────────────────────────────────────────────────────────────────────────────────────────────╮
 * │       │   1   │   2   │   3   │   4   │   5   │   6   │   7   │   8   │   9   │   0   │           │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────────┤
 * │       │   Q   │   D   │   R   │   W   │   B   │   J   │   F   │   U   │   P   │   ;   │           │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────────┤
 * │       │   A   │   S   │   H   │   T   │   G   │   Y   │   N   │   E   │   O   │   I   │           │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────────┤
 * │       │   Z   │   X   │   M   │   C   │   V   │   K   │   L   │       │       │       │           │
 * ├───────┼───────┼───────┼───────┼───────┼───────┴───────┼───────┼───────┼───────┼───────┼───────────┤
 * │       │       │       │       │       │               │       │       │       │       │           │
 * ╰───────────────────────────────────────────────────────────────────────────────────────────────────╯
 */
[_WORKMAN] = LAYOUT_preonic_grid(
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,
	_______, KC_Q,    KC_D,    KC_R,    KC_W,    KC_B,    KC_J,    KC_F,    KC_U,    KC_P,    KC_SEMICOLON, _______,
	_______, KC_A,    KC_S,    KC_H,    KC_T,    KC_G,    KC_Y,    KC_N,    KC_E,    KC_O,    KC_I,         _______,
	_______, KC_Z,    KC_X,    KC_M,    KC_C,    KC_V,    KC_K,    KC_L,    _______, _______, _______,      _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______
),


/* Lower
 * ╭───────────────────────────────────────────────────────────────────────────────────────────────────╮
 * │       │  F1   │  F2   │  F3   │  F4   │  F5   │  F6   │  F7   │  F8   │  F9   │  F10  │           │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────────┤
 * │ Print │ Home  │  Up   │  End  │   {   │   }   │       │       │  F7   │  F8   │  F9   │     \     │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────────┤
 * │       │ Left  │ Down  │ Right │   (   │   )   │       │       │  F4   │  F5   │  F6   │           │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────────┤
 * │       │ Prev  │ Play  │ Next  │   [   │   ]   │       │       │  F1   │  F2   │  F3   │           │
 * ├───────┼───────┼───────┼───────┼───────┼───────┴───────┼───────┼───────┼───────┼───────┼───────────┤
 * │       │       │       │       │       │               │       │  F10  │       │       │           │
 * ╰───────────────────────────────────────────────────────────────────────────────────────────────────╯
 */
[_LOWER] = LAYOUT_preonic_grid(
	_______, KC_F1,   KC_F2,   KC_F3,    KC_F4,      KC_F5,      KC_F6,   KC_F7,   KC_F8,  KC_F9,   KC_F10,  _______,
	KC_PSCR, KC_HOME, KC_UP,   KC_END,   S(KC_LBRC), S(KC_RBRC), _______, _______, KC_F7,  KC_F8,   KC_F9,   KC_BACKSLASH,
	_______, KC_LEFT, KC_DOWN, KC_RIGHT, S(KC_9),    S(KC_0),    _______, _______, KC_F4,  KC_F5,   KC_F6,   _______,
	_______, KC_MPRV, KC_MPLY, KC_MNXT,  KC_LBRC,    KC_RBRC,    _______, _______, KC_F1,  KC_F2,   KC_F3,   _______,
	_______, _______, _______, _______,  _______,    _______,    _______, _______, KC_F10, _______, _______, _______
),

/* Raise
 * ╭───────────────────────────────────────────────────────────────────────────────────────────────────╮
 * │       │  F1   │  F2   │  F3   │  F4   │  F5   │  F6   │  F7   │  F8   │  F9   │  F10  │           │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────────┤
 * │       │ PgUp  │  MUp  │ PgDwn │   {   │   }   │       │   =   │   7   │   8   │   9   │     \     │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────────┤
 * │       │ MLeft │ MDown │ MRght │   (   │   )   │       │   -   │   4   │   5   │   6   │           │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────────┤
 * │       │       │       │       │   [   │   ]   │   ~   │   '   │   1   │   2   │   3   │           │
 * ├───────┼───────┼───────┼───────┼───────┼───────┴───────┼───────┼───────┼───────┼───────┼───────────┤
 * │       │       │       │       │       │               │       │   0   │       │       │    F24    │
 * ╰───────────────────────────────────────────────────────────────────────────────────────────────────╯
 */
[_RAISE] = LAYOUT_preonic_grid(
	_______, KC_F1,   KC_F2,   KC_F3,   KC_F4,      KC_F5,      KC_F6,   KC_F7,    KC_F8, KC_F9,   KC_F10,  _______,
	_______, KC_PGUP, KC_MS_U, KC_PGDN, S(KC_LBRC), S(KC_RBRC), _______, KC_EQUAL, KC_7,  KC_8,    KC_9,    KC_BACKSLASH,
	_______, KC_MS_L, KC_MS_D, KC_MS_R, S(KC_9),    S(KC_0),    _______, KC_MINUS, KC_4,  KC_5,    KC_6,    _______,
	_______, _______, _______, _______, KC_LBRC,    KC_RBRC,    KC_GRV,  KC_QUOTE, KC_1,  KC_2,    KC_3,    _______,
	_______, _______, _______, _______, _______,    _______,    _______, _______,  KC_P0, _______, _______, KC_F24
),

/* Adjust (Lower + Raise)
 * ╭───────────────────────────────────────────────────────────────────────────────────────────────────╮
 * │       │  F11  │  F12  │  F13  │  F14  │  F15  │  F16  │  F17  │  F18  │  F19  │  F20  │           │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────────┤
 * │       │ Qwert │ Workm │       │       │       │       │       │       │       │ Boot  │           │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────────┤
 * │       │       │       │       │       │       │       │       │       │       │       │           │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────────┤
 * │       │       │       │       │       │       │       │       │       │       │       │           │
 * ├───────┼───────┼───────┼───────┼───────┼───────┴───────┼───────┼───────┼───────┼───────┼───────────┤
 * │       │       │       │       │       │               │       │       │       │       │           │
 * ╰───────────────────────────────────────────────────────────────────────────────────────────────────╯
 */
[_ADJUST] = LAYOUT_preonic_grid(
	_______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  _______,
	_______, QWERTY,  WORKMAN, _______, _______, _______, _______, _______, _______, _______, QK_BOOT, _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, NK_ON,   NK_OFF,  _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
				case QWERTY:
					if (record->event.pressed) {
						set_single_persistent_default_layer(_QWERTY);
					}
					return false;
					break;
				case WORKMAN:
					if (record->event.pressed) {
						set_single_persistent_default_layer(_WORKMAN);
					}
					return false;
					break;
				case LOWER:
					if (record->event.pressed) {
						layer_on(_LOWER);
						update_tri_layer(_LOWER, _RAISE, _ADJUST);
					} else {
						layer_off(_LOWER);
						update_tri_layer(_LOWER, _RAISE, _ADJUST);
					}
					return false;
					break;
				case RAISE:
					if (record->event.pressed) {
						layer_on(_RAISE);
						update_tri_layer(_LOWER, _RAISE, _ADJUST);
					} else {
						layer_off(_RAISE);
						update_tri_layer(_LOWER, _RAISE, _ADJUST);
					}
					return false;
					break;
			}
		return true;
};

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

bool encoder_update_user(uint8_t index, bool clockwise) {
	if (muse_mode) {
		if (IS_LAYER_ON(_RAISE)) {
			if (clockwise) {
				muse_offset++;
			} else {
				muse_offset--;
			}
		} else {
			if (clockwise) {
				muse_tempo+=1;
			} else {
				muse_tempo-=1;
			}
		}
	} else {
		if (clockwise) {
			register_code(KC_PGDN);
			unregister_code(KC_PGDN);
		} else {
			register_code(KC_PGUP);
			unregister_code(KC_PGUP);
		}
	}
		return true;
}

bool dip_switch_update_user(uint8_t index, bool active) {
		switch (index) {
				case 0:
						if (active) {
								layer_on(_ADJUST);
						} else {
								layer_off(_ADJUST);
						}
						break;
				case 1:
						if (active) {
								muse_mode = true;
						} else {
								muse_mode = false;
						}
		}
		return true;
}


void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
		if (muse_mode) {
				if (muse_counter == 0) {
						uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
						if (muse_note != last_muse_note) {
								stop_note(compute_freq_for_midi_note(last_muse_note));
								play_note(compute_freq_for_midi_note(muse_note), 0xF);
								last_muse_note = muse_note;
						}
				}
				muse_counter = (muse_counter + 1) % muse_tempo;
		} else {
				if (muse_counter) {
						stop_all_notes();
						muse_counter = 0;
				}
		}
#endif
}

bool music_mask_user(uint16_t keycode) {
	switch (keycode) {
		case RAISE:
		case LOWER:
			return false;
		default:
			return true;
	}
}

// Custom caps words
bool caps_word_press_user(uint16_t keycode) {
	switch (keycode) {
		// Keycodes that continue Caps Word, with shift applied.
		case KC_A ... KC_Z:
		case KC_MINS:
		case KC_SEMICOLON:
			add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
			return true;

		// Keycodes that continue Caps Word, without shifting.
		case KC_1 ... KC_0:
		case KC_BSPC:
		case KC_DEL:
		case KC_UNDS:
			return true;

		default:
			return false;  // Deactivate Caps Word.
	}
}
