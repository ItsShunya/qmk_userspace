#include QMK_KEYBOARD_H

/* Import QMK libraries. */
#include "keymap_spanish.h"
#include "sendstring_spanish.h"

/* Import modules. */
#include "layer/layer.h"
#include "oled/oled.h"

/* Import C libraries. */
//#include <stdlib>

/* You can use _______ in place for KC_TRNS (transparent).   */
/* Or you can use XXXXXXX for KC_NO (NOOP).                  */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    [_QWERTY] = LAYOUT( \
      /* ╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮                        ╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮  */
            KC_ESC,    ES_1,     ES_2,     ES_3,     ES_4,     ES_5,                               ES_6,     ES_7,     ES_8,     ES_9,     ES_0,    ES_QUOT,   \
      /* ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                        ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫  */
            KC_TAB,    ES_Q,     ES_W,     ES_E,     ES_R,     ES_T,                               ES_Y,     ES_U,     ES_I,     ES_O,     ES_P,    ES_PLUS,   \
      /* ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                        ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫  */
            KC_LSFT,   ES_A,     ES_S,     ES_D,     ES_F,     ES_G,                               ES_H,     ES_J,     ES_K,     ES_L,    ES_NTIL,   ES_GRV,   \
      /* ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━╮      ╭━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫  */
            KC_LCTL,   ES_Z,     ES_X,     ES_C,     ES_V,     ES_B,   ES_LBRC,        ES_RBRC,    ES_N,     ES_M,    ES_COMM,   ES_DOT,  ES_MINS,  ES_LABK,   \
      /* ╰━━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━┫      ┣━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╯  */
                                     KC_LALT,   KC_LGUI,   MO(_FUNC),   KC_SPC,         KC_ENT,    MO(_SYMB),  KC_BSPC,   KC_RALT                              \
      /*                           ╰━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━╯      ╰━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━╯                           */
    ),


    [_FUNC] = LAYOUT( \
      /* ╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮                        ╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮  */
            KC_F1,     KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,                              KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,  KC_F12,    \
      /* ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                        ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫  */
           ES_MORD,   _______,  _______,  _______,  _______,  _______,                            _______,  _______,  _______,  _______,  _______,  _______,   \
      /* ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                        ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫  */
            _______,  _______,  _______,  _______,  _______,  _______,                            _______,  _______,   KC_UP,   _______,  _______,  _______,   \
      /* ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━╮      ╭━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫  */
            _______,  _______,  _______,  _______,  _______,  _______, ES_LCBR,        ES_RCBR,   _______,  KC_LEFT,  KC_DOWN,  KC_RIGHT, _______,  _______,   \
      /* ╰━━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━┫      ┣━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╯  */
                                     KC_LALT,   KC_LGUI,   MO(_FUNC),   KC_SPC,         KC_ENT,    MO(_SYMB),  KC_BSPC,   KC_RALT                              \
      /*                           ╰━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━╯      ╰━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━╯                           */
    ),

    [_SYMB] = LAYOUT( \
      /* ╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮                        ╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮  */
           ES_IEXL,   ES_EXLM,  ES_DQUO,  ES_BULT,   ES_DLR,  ES_PERC,                            ES_AMPR,  ES_SLSH,  ES_LPRN,  ES_RPRN,   ES_EQL,  ES_IQUE,    \
      /* ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                        ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫  */
           ES_FORD,   ES_PIPE,    ES_AT,  ES_HASH,  ES_TILD,  ES_EURO,                             ES_NOT,  _______,  _______,  _______,  _______,  _______,   \
      /* ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                        ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫  */
            _______,  _______,  _______,  _______,  _______,  _______,                            _______,  _______,  _______,  _______,  _______,  _______,   \
      /* ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━╮      ╭━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫  */
            _______,  _______,  _______,  _______,  _______,  _______, ES_LCBR,        ES_RCBR,   _______,  _______,  _______,  _______,  _______,  _______,   \
      /* ╰━━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━┫      ┣━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╯  */
                                     KC_LALT,   KC_LGUI,   MO(_FUNC),   KC_SPC,         KC_ENT,    MO(_SYMB),  KC_BSPC,   KC_RALT                              \
      /*                           ╰━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━╯      ╰━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━╯                            */
    ),

  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _FUNC, _SYMB, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}



