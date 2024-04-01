/* Copyright 2021 Noah Kiser
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_BSPC, KC_ESC,
        KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_ENT,
        KC_TAB,  KC_PGUP, LT(1,KC_SPC),     KC_PGDN, KC_RCTL
    )

};
