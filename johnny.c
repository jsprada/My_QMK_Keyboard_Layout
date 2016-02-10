// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include "planck.h"

/*
#ifdef BACKLIGHT_ENABLE
  #include "backlight.h"
#endif
*/

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _CM 0
#define _QW 1
#define _WM 2
#define _LW 3
#define _RS 4
#define _FN 5

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 
  /* MIT Layout (QWERTY layer)
 *
 * ,-----------------------------------------------------------------------.
 * | esc |  q  |  w  |  e  |  r  |  t  |  y  |  u  |  i  |  o  |  p  | bspc|
 * |-----------------------------------------------------------------------|
 * | tab |  a  |  s  |  d  |  f  |  g  |  h  |  j  |  k  |  l  |  ;  |enter|
 * |-----------------------------------------------------------------------|
 * |shift|  z  |  x  |  c  |  v  |  b  |  n  |  m  |  ,  |  .  |  /  |shift|
 * |-----------------------------------------------------------------------|
 * | ctl | fn  | cmd | alt |lower|    spc    |raise|left |down | up  |right|
 * `-----------------------------------------------------------------------'
 */
[_QW] = { /* Qwerty */
  {KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
  {KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT},
  {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT },
  {KC_LCTL, MO(_FN),  KC_LGUI, KC_LALT, MO(_LW), KC_SPC,  KC_SPC,  MO(_RS), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT}
},

 
 /* MIT Layout (Colemak layer)
 *
 * ,-----------------------------------------------------------------------.
 * | esc |  q  |  w  |  f  |  p  |  g  |  j  |  l  |  u  |  y  |  ;  | bspc|
 * |-----------------------------------------------------------------------|
 * | tab |  a  |  r  |  s  |  t  |  d  |  h  |  n  |  e  |  i  |  o  |enter|
 * |-----------------------------------------------------------------------|
 * |shift|  z  |  x  |  c  |  v  |  b  |  k  |  m  |  ,  |  .  |  /  |shift|
 * |-----------------------------------------------------------------------|
 * | ctl | fn  | cmd | alt |lower|    spc    |raise|left |down | up  |right|
 * `-----------------------------------------------------------------------'
 */
[_CM] = { /* Colemak */
  {KC_ESC,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC},
  {KC_TAB,  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT},
  {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT },
  {KC_LCTL, MO(_FN),  KC_LGUI, KC_LALT, MO(_LW), KC_SPC,  KC_SPC,  MO(_RS), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT}
},

/* MIT Layout (Workman layer)
 *
 * ,-----------------------------------------------------------------------.
 * | esc |  q  |  d  |  r  |  w  |  b  |  j  |  f  |  u  |  p  |  ;  | bspc|
 * |-----------------------------------------------------------------------|
 * | tab |  a  |  s  |  h  |  t  |  g  |  y  |  n  |  e  |  o  |  i  |enter|
 * |-----------------------------------------------------------------------|
 * |shift|  z  |  x  |  m  |  c  |  v  |  k  |  l  |  ,  |  .  |  /  |shift|
 * |-----------------------------------------------------------------------|
 * | ctl | fn  | cmd | alt |lower|    spc    |raise|left |down | up  |right|
 * `-----------------------------------------------------------------------'
 */
[_WM] = { /* Colemak */
  {KC_ESC,  KC_Q,    KC_D,    KC_R,    KC_W,    KC_B,    KC_J,    KC_F,    KC_U,    KC_P,    KC_SCLN, KC_BSPC},
  {KC_TAB,  KC_A,    KC_S,    KC_H,    KC_T,    KC_G,    KC_Y,    KC_N,    KC_E,    KC_O,    KC_I,    KC_ENT},
  {KC_LSFT, KC_Z,    KC_X,    KC_M,    KC_C,    KC_V,    KC_K,    KC_L,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT },
  {KC_LCTL, MO(_FN),  KC_LGUI, KC_LALT, MO(_LW), KC_SPC,  KC_SPC,  MO(_RS), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT}
},



/* MIT Layout (Raised layer)
 *
 * ,-----------------------------------------------------------------------.
 * |  `  |  !  |  @  |  #  |  $  |  %  |  ^  |  &  |  *  |     |     |BkSp | 
 * |-----------------------------------------------------------------------|
 * |     |  ?  |     |     |  (  |  -  |  +  |  )  |   | |  \  |  '   |    |
 * |-----------------------------------------------------------------------|
 * |     |     |     |     |  [  |  _  |  =  |  ]  |     |     |  "   |    |
 * |-----------------------------------------------------------------------|
 * |     |     |     |     |     |           |     | play|volD |volU | next|
 * `-----------------------------------------------------------------------'
 */
[_RS] = { /* RAISE */
  {KC_GRV,  KC_EXLM,    KC_AT,  KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_NO,   KC_NO,      KC_BSPC},
  {KC_NO,   S(KC_SLSH), KC_NO,  KC_NO,    KC_LPRN,  KC_MINS,  KC_PLUS,  KC_RPRN,  KC_PIPE,  KC_BSLS, KC_QUOT,    KC_NO},
  {KC_NO,   KC_NO,      KC_NO,  KC_NO,    KC_LBRC,  KC_UNDS,  KC_EQL,   KC_RBRC,  KC_NO,    KC_NO,   S(KC_QUOT), KC_NO,},
  {KC_NO,   KC_TRNS,    KC_NO,  KC_NO,    KC_TRNS,  KC_NO,    KC_NO,    KC_TRNS,  KC_MPLY,  KC_VOLD, KC_VOLU,    KC_MNXT}
},


/* MIT Layout (Lowered layer)
 *
 * ,-----------------------------------------------------------------------.
 * |  ~  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |BkSp |
 * |-----------------------------------------------------------------------|
 * |     |     |     |     |   { |     |     |  }  |     |     |     |     |
 * |-----------------------------------------------------------------------|
 * |     |     |     |     |   < |     |     |  >  |     |     |     |     |
 * |-----------------------------------------------------------------------|
 * |     |     |     |     |     |           |     |home |pgdn |pgup |     |
 * `-----------------------------------------------------------------------'
 */
[_LW] = { /* LOWER */
  {KC_TILD, KC_1,   KC_2,   KC_3,   KC_4,       KC_5,   KC_6,   KC_7,     KC_8,     KC_9,     KC_0,     KC_BSPC},
  {KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_LCBR,    KC_NO,  KC_NO,  KC_RCBR,  KC_NO,    KC_NO,    KC_NO,    KC_NO},
  {KC_NO,   KC_NO,  KC_NO,  KC_NO,  S(KC_COMM), KC_NO,  KC_NO,  S(KC_DOT),KC_NO,    KC_NO,    KC_NO,    KC_NO},
  {KC_NO,   KC_TRNS,KC_NO,  KC_NO,  KC_TRNS,    KC_NO,  KC_NO,  KC_TRNS,  KC_HOME,  KC_PGDN,  KC_PGUP, KC_NO}
},

/* MIT Layout (FN layer)
 *
 * ,-----------------------------------------------------------------------.
 * | PWR | SLP | WAKE|     |     |     |     |     |     |     |     | del |
 * |-----------------------------------------------------------------------|
 * |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |
 * |-----------------------------------------------------------------------|
 * |     |reset|     |     |     |     |     |     |lclck|     |rclck|     |
 * |-----------------------------------------------------------------------|
 * |     |     |colmk|qwrty|wrkmn|           |     |ms l |ms dn|ms up|ms r |
 * `-----------------------------------------------------------------------'
 */
[_FN] = { /* FUNCTION */
  {KC_PWR, KC_SLEP, KC_WAKE,KC_NO,  KC_NO,   KC_NO, KC_NO, KC_NO,  KC_NO,   KC_NO,    KC_NO,    KC_DELT},
  {KC_F1,  KC_F2,  KC_F3,   KC_F4,  KC_F5,   KC_F6, KC_F7, KC_F8,  KC_F9,   KC_F10,   KC_F11,   KC_F12},
  {KC_NO,  RESET,  KC_NO,   KC_NO,  KC_NO,   KC_NO, KC_NO, KC_NO,  KC_BTN1, KC_NO,    KC_BTN2,  KC_NO},
  {KC_NO,  KC_TRNS,DF(_CM), DF(_QW),DF(_WM), KC_NO, KC_NO, KC_TRNS,KC_MS_L, KC_MS_D,  KC_MS_U,  KC_MS_R}
}
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
