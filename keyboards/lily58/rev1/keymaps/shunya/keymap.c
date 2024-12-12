#include QMK_KEYBOARD_H

/* Import QMK libraries. */
#include "keymap_spanish.h"
#include "sendstring_spanish.h"

/* Import C libraries. */
//#include <stdlib>

enum layer_number {
  _QWERTY = 0,
  _FUNC,
  _SYMB,
  _ADJUST,
};

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

/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
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

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);
static void render_logo(void) {
    static const char PROGMEM raw_logo[] = {
        161,  4,254,254, 12,224,165,180, 65,152,210,195,236,229,241,240,253,250,248,245,250,242,245,244,242,232,225,220,162,109,252,226, 33,172,254,254, 12, 37, 60,  5,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,140, 33,255,127,224, 60,241,252,254,255,255,255,255,191,111,143,215,167,195,219,175,167, 79, 15,223, 63,255,247,255,255,252,250,192, 19,255,127,150, 49,132, 51,252,253,254,255,222,190,191,254, 63, 28,162,128,157,254,254,254,255,196,215,144,144,196,255,254,254,244,193, 20,255,254,254,245, 44,165, 48, 16,213,252,255,252,252, 42,211,254,254,253,248,244,218,208, 23, 36,253,254,252, 49, 85, 29,126,254,252,245,233,196,252,249,252,126, 94, 54,209, 86, 73, 50,222,241,254,252,254,225,210,144, 18,  2,230, 12,  8, 
        1,164,115,175,255,199,153,127,255,255,255,255,255,255,233,198,211,183, 79, 95,159, 95,135,170,212,230,241,255,255,255,255,255,255, 15, 70,239,255,199, 18,109, 90, 57,121,255,247,247,247,255,255,255,127, 62,  9,194,255,255,255,255, 47,167,175,191, 71,255,255,255,127, 34,140, 79,191,127,255,252,253,241,253,252,127,255, 63, 95, 78,255,255,255,255,115,151,143, 95,255,127,255,255,255, 36,169,133,  0,250, 11,255,255,255,255, 27, 65,156,  2,230,217,230,248,255,127,127,185,124,191,127,127,255,252,224,199, 24,193,
        38, 80,170,197, 45,210,  5, 21,170,171, 47, 95,175,159, 95,127,127,191,127,191, 61,127,127,191, 63,127, 95,143,191,143, 55, 81, 40,128, 19,191,127,144, 27,130,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,
    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    //oled_write(read_logo(), false);
    render_logo();
  }
    return false;
}


#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}



