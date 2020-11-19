 /* Copyright 2020 Aplyard 
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

#define _MEDIA 0
#define _DOC 1
#define _POWER 2
#define KC_COPY LCTL(KC_C)              //Mac, change it to LGUI(KC_C)
#define KC_CUT LCTL(KC_X)               //  >>      >>      LGUI(KC_X)  
#define KC_PASTE LCTL(KC_V)             //  >>      >>      LGUI(KC_V)
//#define KC_MY_COMPUTER LGUI(KC_SPC)   //Uncomment this for Mac Spotlight Search

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* Keymap __MEDIA: Default Layer  
	*  ,----------------------------------.
	*  | .-------.  /   /   /   /   /   / |
	*  | |       | |------|------|------| |  
	*  | | Pro   | | Mute | Play |Vol+/-| |
	*  | | Micro | |------|------|------| |
	*  | |       | |----------------------|
	*  | |       | |------|------|------| |
	*  | '-------' | Prev | Stop | Next | |
	*  |   APLX6   |------|------|------| |
	*  '----------------------------------'
	*/
  [_MEDIA] = LAYOUT(
    KC_MUTE,  KC_MPLY,  TO(1),
    KC_MPRV,  KC_MSTP,  KC_MNXT
  ),
  	/* Keymap __DOC  
	*  ,----------------------------------.
	*  | .-------.  /   /   /   /   /   / |
	*  | |       | |------|------|------| |  
	*  | | Pro   | | Home | PgUp | L/R  | |
	*  | | Micro | |------|------|------| |
	*  | |       | |----------------------|
	*  | |       | |------|------|------| |
	*  | '-------' | End  | PgDn | Ins  | |
	*  |   APLX6   |------|------|------| |
	*  '----------------------------------'
	*/
  [_DOC] = LAYOUT(
    KC_HOME, KC_PGUP, TO(2),
    KC_END, KC_PGDN, KC_INS
  ),
  	/* Keymap __DOC  
	*  ,----------------------------------.
	*  | .-------.  /   /   /   /   /   / |
	*  | |       | |------|------|------| |  
	*  | | Pro   | | Calc | MyPc |Bright| |
	*  | | Micro | |------|------|------| |
	*  | |       | |----------------------|
	*  | |       | |------|------|------| |
	*  | '-------' | Copy | Cut  |Paste | |
	*  |   APLX6   |------|------|------| |
	*  '----------------------------------'
	*/
  [_POWER] = LAYOUT(
    KC_CALC, KC_MY_COMPUTER, TO(0),
    KC_COPY, KC_CUT, KC_PASTE
  )
};

static void render_logo(void) {
    //Logo for _MEDIA
    static const char PROGMEM logo1[] = {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128, 64,  0, 32, 32,160,160,160,160, 32, 32,  0, 64,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128, 64,160,144,  8,252,129,  0, 60,126,255,255,255,255,255,255,255,255,126, 60,  0,129,252,  8,144,160, 64,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,254,254,  0,  0,  0,  0,  0,  0,144,144,144,144,240,  0,  0, 48,224,128,  0,  0,224, 48,  0,192,224,176,144,144,240,192,  0,  0,240,240, 16, 16,  0,128,192,  0,  0,  0,  0,  0,  0,  0,  0,  0, 24, 12,254,254,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 14, 21, 42, 17, 96,135, 88,162, 64, 68,128,137,137,137,137,137,136,128, 68, 64,162, 88,199, 32, 17, 42, 21, 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15, 15,  8,  8,  8,  8,  0,  7, 15,  8,  8, 12, 15,  0,  0, 64, 65,111, 60, 15,  1,  0,  0,  3,  7, 12,  8,  8,  8,  0,  0,  0, 15, 15,  0,  0,  0,  8, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  8,  8, 15, 15,  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  2,  1,  5,  4,  2,  2,  2,  2,  2,  2,  4,  5,  1,  2,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    };
    //Logo for _DOC
    static const char PROGMEM logo2[] = {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,224,160,224,128,224,160,224,128,224,160,224,128,224,160,224,128,224,160,224,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,254, 17, 16, 16,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  3,254,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,254,254,  0,  0,  0,  0,  0,  0,144,144,144,144,240,  0,  0, 48,224,128,  0,  0,224, 48,  0,192,224,176,144,144,240,192,  0,  0,240,240, 16, 16,  0,128,192,  0,  0,  0,  0,  0,  0,  0,  0,  4,  6,130,194,102, 60,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,145,161,225, 32,224,160,224, 32,224,160,224, 32,224,160,224, 32,224,160,224, 32,224,160, 80, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15, 15,  8,  8,  8,  8,  0,  7, 15,  8,  8, 12, 15,  0,  0, 64, 65,111, 60, 15,  1,  0,  0,  3,  7, 12,  8,  8,  8,  0,  0,  0, 15, 15,  0,  0,  0,  8, 12,  0,  0,  0,  0,  0,  0,  0,  0, 12, 14, 11,  9,  8,  8,  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,  2,  3,  0,  3,  2,  3,  0,  3,  2,  3,  0,  3,  2,  3,  0,  3,  2,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    };
    //Logo for _POWER
    static const char PROGMEM logo3[] = {
    	0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,248,120,254, 58, 30,  8,  4,  4,  4,  2,  2,  4,  4,  4,  8, 30, 58,254,120,248,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,248,145, 38, 68,136,144, 16, 32, 32, 32, 32, 16, 16,136, 68, 34,241,254,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,254,254,  0,  0,  0,  0,  0,  0,144,144,144,144,240,  0,  0, 48,224,128,  0,  0,224, 48,  0,192,224,176,144,144,240,192,  0,  0,240,240, 16, 16,  0,128,192,  0,  0,  0,  0,  0,  0,  0,  0,  2, 34, 50, 58,110,198,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 63, 35,231, 47,255, 62, 62, 61, 61, 61, 61, 61, 61, 62, 62, 63,239, 39,227, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15, 15,  8,  8,  8,  8,  0,  7, 15,  8,  8,  4, 15,  0,  0, 64, 65,111, 60, 15,  1,  0,  0,  3,  7, 12,  8,  8,  8,  0,  0,  0, 15, 15,  0,  0,  0,  8, 12,  0,  0,  0,  0,  0,  0,  0,  0,  8,  8,  8, 12,  6,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,  2,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,  2,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    };
    //Switch between logos
    switch (biton32(layer_state)) {
        case 1:
            oled_write_raw_P(logo2, sizeof(logo2));
            break;
        case 2:
            oled_write_raw_P(logo3, sizeof(logo3));
            break;
        default:
            oled_write_raw_P(logo1, sizeof(logo1));
    }  
}

void oled_task_user(void) {  
    render_logo();
}

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        switch (biton32(layer_state)) {
            case 1:
                if (clockwise) {
                    tap_code(KC_RIGHT); //edit here your _DOC layer(2) encoder keycode
                } else {
                    tap_code(KC_LEFT);  //edit here your _DOC layer(2) encoder keycode
                }
                break;
            case 2:
                if (clockwise) {
                    tap_code(KC_BRIU);  //edit here your _POWER layer(3) encoder keycode
                } else {
                    tap_code(KC_BRID);  //edit here your _POWER layer(3) encoder keycode
                }
                break;
            default:
                if (clockwise) {
                    tap_code(KC_VOLU); //edit here your _MEDIA layer(1) encoder keycode
                } else {
                    tap_code(KC_VOLD);  //edit here your _MEDIA layer(1) encoder keycode
                }
        } 
    }
}					 