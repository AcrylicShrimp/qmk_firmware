#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_directional(
        KC_ESCAPE,   KC_1,     KC_2,    KC_3,           KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,     KC_0,    KC_MINUS,  KC_EQUAL,    KC_BSLASH,   KC_GRAVE,
        KC_TAB,                KC_Q,    KC_W,           KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,      KC_LBRACKET, KC_RBRACKET, KC_BSPACE,
        KC_CAPSLOCK,           KC_A,    KC_S,           KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,     KC_L,    KC_SCOLON, KC_QUOTE,    KC_ENTER,
        KC_LSHIFT,             KC_Z,    KC_X,           KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMMA, KC_DOT,  KC_SLASH,  KC_RSHIFT,   KC_UP,       TT(2),
        KC_LCTRL,    KC_LALT,           KC_LGUI,        KC_SPACE,         TT(1),            KC_SPACE,          KC_RALT, KC_RCTRL,  KC_LEFT,     KC_DOWN,     KC_RIGHT
    ),
    LAYOUT_directional(
        _______,     KC_F1,    KC_F2,   KC_F3,          KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,    KC_F12,      _______,     _______,
        _______,               _______, _______,        _______, _______, _______, _______, _______, _______,  _______, _______,   _______,     _______,     _______,
        _______,               _______, _______,        _______, _______, _______, _______, _______, _______,  _______, _______,   _______,     _______,
        _______,               _______, _______,        _______, _______, _______, _______, _______, _______,  _______, _______,   _______,     KC_PGUP,     _______,
        _______,     _______,           MAGIC_NO_GUI,   _______,          _______,          _______,           _______, _______,   KC_HOME,     KC_PGDOWN,   KC_END
    ),
    LAYOUT_directional(
        _______,     KC_KP_1,  KC_KP_2, KC_KP_3,        KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_7, KC_KP_8, KC_KP_9,  KC_KP_0, KC_KP_DOT, KC_KP_MINUS, KC_KP_PLUS,  KC_NUMLOCK,
        _______,               _______, _______,        _______, _______, _______, _______, _______, _______,  _______, _______,   _______,     _______,     _______,
        _______,               _______, _______,        _______, _______, _______, _______, _______, _______,  _______, _______,   _______,     _______,
        _______,               _______, _______,        _______, _______, _______, _______, _______, _______,  _______, _______,   _______,     KC_UP,       _______,
        _______,     _______,           MAGIC_UNNO_GUI, _______,          _______,          _______,           _______, _______,   KC_LEFT,     KC_DOWN,     KC_RIGHT
    )
};
