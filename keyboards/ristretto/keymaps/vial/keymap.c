/* Copyright 2021 Brandon Lewis
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
#include <stdio.h>

enum layers {
	_BASE,
	_RAISE,
	_LOWER,
	_ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
		KC_ESC  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T              , KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_BSPC ,
		KC_TAB  , KC_A    , KC_S    , KC_D    , KC_F    , KC_G              , KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT ,
		KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B              , KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_ENT  ,
		KC_LCTL , KC_LGUI , KC_LALT ,MO(_LOWER),KC_ENT  , KC_SPC  , KC_MUTE , KC_SPC  , KC_RSFT ,MO(_RAISE),KC_RALT , KC_RGUI , KC_RCTRL
	),
	[_RAISE] = LAYOUT(
		KC_GRV	, KC_1	  , KC_2    , KC_3    , KC_4	, KC_5              , KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_DEL  ,
		KC_CAPS	, KC_MINS , KC_EQL  , KC_LBRC , KC_RBRC , KC_BSLS           , KC_NO   , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , KC_BSLS ,
		KC_TRNS	, KC_NO	  , KC_NO   , KC_NO   , KC_NO   , KC_NO             , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,
		KC_TRNS , KC_TRNS , KC_TRNS ,_______ ,KC_ENT , KC_NO   , KC_MPLY , KC_NO   , KC_RSFT , _______ , KC_TRNS , KC_TRNS , KC_TRNS
	),
	[_LOWER] = LAYOUT(
		KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6	            , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  ,
		KC_NO	, KC_NO   , KC_NO	, KC_NO   , KC_NO   , KC_NO             , KC_NO   , KC_NO   , KC_NO   , KC_LBRC , KC_RBRC , KC_NO   ,
		KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO             , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,
		KC_TRNS , KC_TRNS , KC_TRNS ,_______, KC_ENT  , KC_NO   , KC_MUTE , KC_NO   , KC_RSFT ,_______,KC_TRNS, KC_TRNS , KC_TRNS
	),
	[_ADJUST] = LAYOUT(
		XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX           , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
		XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , KC_CAPS           , KC_NLCK , KC_SLCK , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , 
		XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX           , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , 
		KC_TRNS , KC_TRNS , KC_TRNS , XXXXXXX , XXXXXXX , XXXXXXX , KC_MUTE , XXXXXXX , XXXXXXX , XXXXXXX , KC_TRNS , KC_TRNS , KC_TRNS
	),
};

layer_state_t layer_state_set_user(layer_state_t state) {
    state = update_tri_layer_state(state, _RAISE, _LOWER, _ADJUST);
    return state;
}
// OLED and Encoder function is located in the ristretto.c File
