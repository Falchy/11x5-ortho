/* Copyright 2020 Simon
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


void matrix_init_user(void) {
    set_unicode_input_mode(UC_WINC); // REPLACE UC_XXXX with the Unicode Input Mode for your OS. See table below.
};


#define MY_AE XP(LC_AE, UC_AE)
#define MY_OE XP(LC_OE, UC_OE)
#define MY_AA XP(LC_AA, UC_AA)

// Unicode Map
enum unicode_names {
    UC_AE,
    LC_AE,
    UC_OE,
    LC_OE,
    UC_AA,
    LC_AA
};

const uint32_t PROGMEM unicode_map[] = {
    [UC_AE] = 0x00C6,
    [LC_AE] = 0x00E6,
    [UC_OE] = 0x00D8,
    [LC_OE] = 0x00F8,
    [UC_AA] = 0x00C5,
    [LC_AA] = 0x00E5
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [0] = LAYOUT(

    kc_esc , kc_1   , kc_2   , kc_3   , kc_4   , kc_5   , kc_6   , kc_7   , kc_8   , kc_9   , kc_0   ,
	kc_tab , kc_q   , kc_w   , kc_e   , kc_r   , kc_t   , kc_y   , kc_u   , kc_i   , kc_o   , kc_p   ,
	kc_caps, kc_a   , kc_s   , kc_d   , kc_f   , kc_g   , kc_h   , kc_j   , kc_k   , kc_l   , kc_bspc,
	kc_lsft, kc_z   , kc_x   , kc_c   , kc_v   , kc_b   , kc_n   , kc_m   , kc_slsh, kc_rsft, kc_ent ,
	kc_lctl, kc_lgui, kc_lalt, OSL(1) , kc_spc , kc_spc , kc_spc , OSL(2) , kc_comm, kc_dot , kc_rctl
    ),
	
	[1] = LAYOUT(
	kc_trns, kc_f1  , kc_f2  , kc_f3  , kc_f4  , kc_f5  , kc_f6  , kc_f7  , kc_f8  , kc_f9  , kc_f10 ,
	kc_trns, kc_f11 , kc_f12 , kc_f13 , kc_f14 , kc_f15 , kc_f16 , kc_f17 , kc_LBRC, kc_RBRC, kc_BSLS,
	kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_SCLN, kc_RCLN, kc_trns,
	kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns,
	kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, OSL(3) , kc_trns, kc_trns, kc_trns
	
	),
	[2] = LAYOUT(
	
	KC_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns,
	kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, MY_AA  , kc_trns,
	kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, MY_OE  , MY_AE  , kc_trns,
	kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns,
	kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns
	
	),
	
	[3] = LAYOUT(
	
	RESET  , kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns,
	kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns,
	kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns,
	kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns,
	kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns
	
	)
};


/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
