#include QMK_KEYBOARD_H

#include "oled.h"

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) return rotation; // flips the display 180 degrees if offhand

    return OLED_ROTATION_270;
}

void render_shunya_logo(void) {
    static const uint8_t PROGMEM shunya_logo[] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,   0,   0,   128, 128, 192, 192, 0, 0, 192, 192, 128, 128, 0,   0,   0,   0,  0, 48, 48, 0, 0, 0, 0, 0, 0, 0, 0,  0,  0,  0,  0,  0,  0,  0, 0, 0, 0, 0, 0, 0, 0,  0,  0, 0, 0, 0, 0, 0,  0,  0, 0, 0, 0, 0, 0, 0, 0,  0,  0,  0,  0,  0,  0,  0, 0, 0, 0, 0, 0, 0, 0, 0,  0,  0, 0, 0, 0, 0,  0,  0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,  0, 0, 0, 0, 0, 0, 0, 0, 0,  0,  0,  0, 0, 0, 0, 0, 0,  0,  0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,  224, 248, 30, 199, 243, 25, 12, 6, 134, 192, 192, 134, 6, 12, 25, 243, 199, 28, 240, 224, 0, 0, 0, 0, 0, 0, 0, 0, 96, 240, 248, 152, 152, 152, 152, 24, 0, 0, 0, 0, 0, 0, 0, 248, 248, 128, 128, 128, 128, 128, 248, 248, 0, 0, 0, 0, 0, 0, 248, 248, 0, 0, 0, 0, 0, 248, 248, 0, 0, 0, 0, 0, 0, 0, 248, 248, 224, 192, 128, 0, 0, 248, 248, 0, 0, 0, 0, 0, 24, 120, 224, 192, 128, 128, 192, 224, 120, 24, 0, 0, 0, 0, 0, 0, 128, 224, 112, 56, 112, 224, 128, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 31, 112, 227, 207, 152, 48,  96,  97,  3, 3, 97,  96,  48,  152, 207, 243, 120, 31, 7, 0,  0,  0, 0, 0, 0, 0, 0, 0, 24, 25, 25, 25, 25, 31, 15, 6, 0, 0, 0, 0, 0, 0, 31, 31, 1, 1, 1, 1, 1, 31, 31, 0, 0, 0, 0, 0, 0, 7, 15, 28, 24, 24, 24, 28, 15, 7, 0, 0, 0, 0, 0, 0, 0, 31, 31, 0, 1, 3, 7, 14, 31, 31, 0, 0, 0, 0, 0, 0, 0, 0, 1, 31, 31, 1, 0, 0, 0, 0, 0, 0, 0, 24, 30, 15, 7, 6, 6, 6, 7, 15, 30, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0,   0,   0,  0,   0,   1,  1,  3, 3,   0,   0,   3,   3, 1,  1,  0,   0,   0,  0,   0,   0, 0, 0, 0, 0, 0, 0, 0, 0,  0,   0,   0,   0,   0,   0,   0,  0, 0, 0, 0, 0, 0, 0, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 0, 0, 0, 0, 0, 0,   0,   0, 0, 0, 0, 0, 0,   0,   0, 0, 0, 0, 0, 0, 0, 0,   0,   0,   0,   0,   0, 0, 0,   0,   0, 0, 0, 0, 0, 0,  0,   0,   0,   0,   0,   0,   0,   0,   0,  0, 0, 0, 0, 0, 0, 0,   0,   0,   0,  0,   0,   0,   0, 0, 0, 0, 0, 0, 0,
    };
    oled_write_raw_P(shunya_logo, sizeof(shunya_logo));
}

void render_status_master(void) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    // oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    // oled_write_ln(read_host_led_state(), false);
    // oled_write_ln(read_timelog(), false);
}

void render_status_secondary(void) {}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status_master();
    } else {
        render_logo();
    }
    return false;
}

#endif /* OLED_ENABLE */
