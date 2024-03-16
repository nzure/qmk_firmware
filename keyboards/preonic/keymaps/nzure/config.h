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

#pragma once

// Enable both shifts for capsword
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
// Debounce time (ms) - default 5
#define DEBOUNCE 5
// Set polling rate to 1000hz
#define USB_POLLING_INTERVAL_MS 1
// Set amount of keys sent per scan
//#define QMK_KEYS_PER_SCAN 8

/**
 * Starup and Layer sounds
*/
#ifdef AUDIO_ENABLE
	#define STARTUP_SONG SONG(PREONIC_SOUND)

	#define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), SONG(WORKMAN_SOUND) }
#endif

#define MUSIC_MASK (keycode != KC_NO)

/**
 * MIDI Settings
*/
#define MIDI_BASIC
