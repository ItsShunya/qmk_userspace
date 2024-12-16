#pragma once

#ifdef OLED_ENABLE
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

oled_rotation_t oled_init_user(oled_rotation_t rotation);
void render_logo(void);
bool oled_task_user(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

#endif /* OLED_ENABLE */
