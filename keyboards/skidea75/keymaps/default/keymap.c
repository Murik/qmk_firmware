#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _SYMB 1
#define _NAV 2
#define _ADJUST 3

enum custom_keycodes {
  QWERTY = SAFE_RANGE, // You can use SAFE_RANGE when enumerating your custom keycodes to guarantee that you get a unique number.
  SYMB, //numpad and Punctuation
//  NAV, //mouse and arroys
//  ADJUST, // rgb and audio
};

// Shortcut to make keymap more readable

#define SYM_L MO(_SYMB) //numpad layer
#define NAV_L MO(_NAV) //nav layer
#define ADJ_L MO(_ADJUST) //audio layer

//#define KC_ALAS LALT_T(KC_PAST) // Left Alt when held, `*` when tapped
//#define KC_CTPL LCTL_T(KC_BSLS) //Left Control when held, `\` when tapped

//#define KC_NAGR LT(_NAV, KC_GRV) //momentarily activates layer when held, and sends `~` when tapped.
//#define KC_NAMI LT(_NAV, KC_MINS) //momentarily activates layer when held, and sends `-` when tapped.

//#define KC_ADEN LT(_ADJUST, KC_END) //momentarily activates layer when held, and sends `End` when tapped.
//#define KC_ADPU LT(_ADJUST, KC_PGUP) //momentarily activates layer when held, and sends `Page Up` when tapped.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
     *        ┌───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬───┬───┐
     *        │ 1 │ 2 │ 3 │ 4 │ 5 │F6 │                     │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ \ │
     * ┌──────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼───┼───┤
     * │Esc   │ Q │ W │ E │ R │ T │F7 │                     │   │ Y │ U │ I │ O │ P │ [ │ ] │
     * ├──────┼───┼───┼───┼───┼───┼───┤                     │Bsp├───┼───┼───┼───┼───┼───┼───┤
     * │Tab   │ A │ S │ D │ F │ G │F8 │                     │   │ H │ J │ K │ L │ ; │ " │F11│
     * ├──────┼───┼───┼───┼───┼───┼───┤                     └───┼───┼───┼───┼───┼───┼───┼───┤
     * │Shift │ Z │ X │ C │ V │ B │F9 │                         │ N │ M │ , │ . │ / │Ins│F12│
     * ├──────┼───┼───┼───┼───┼───┴───┘               ┌───┐     └───┼───┼───┼───┼───┼───┼───┘
     * │Ctl   │GUI│   │MO2│MO1│                       │ ↑ │         │Sft│hom│end│ ~ │MO2│
     * └──────┴───┴───┴───┴───┘     ┌───┬───┐     ┌───┼───┼───┐     └───┴───┴───┴───┴───┘
     *                              │   │   ├───┐ │←  │ ↓ │ → │
     *                              │Ctl│Alt│Del│ └─┬─┴─┬─┴─┬─┘
     *                              └───┴───┴───┘   │Ent│Sps│
     *                                              └───┴───┘
     */

  [_QWERTY] = LAYOUT(
  //         ┌────────┬────────┬────────┬────────┬────────┬────────┐                         ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
              KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,KC_F6   ,                          KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,KC_EQL  ,KC_BSLS ,
  //┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,KC_F7   ,                          KC_BSPC ,KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_LBRC ,KC_RBRC ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                ┌────────┤        ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB  ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,KC_F8   ,                 KC_UP            ,KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOT ,KC_F11  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤        ┌───────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,KC_F9   ,         KC_LEFT,KC_DOWN ,KC_RGHT ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_INS  ,KC_F12  ,
  //├────────┼────────┼────────┼────────┼──── ───┼────────┼────────┼────────┼───────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┘
     KC_LCTL ,KC_LGUI ,_______ ,NAV_L   ,SYM_L   ,KC_LCTL ,KC_LALT ,KC_DEL  ,        KC_ENT  ,KC_SPC  ,         KC_RSFT ,KC_HOME , KC_END ,KC_GRV
  //└────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘       └────────┴────────┘        └────────┴────────┴────────┴────────┘
  ),
//SYM_L KC_PGDN pgdown
//KC_PPLS +
//KC_PMNS -

  [_SYMB] = LAYOUT(
  //         ┌────────┬────────┬────────┬────────┬────────┬────────┐                         ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
              KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,KC_F6   ,                          KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
  //┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_EXLM ,KC_AT   ,KC_LCBR ,KC_RCBR ,KC_PIPE ,_______ ,                          KC_BSPC ,KC_PSLS ,KC_P7   ,KC_P8   ,KC_P9   ,KC_PMNS ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                ┌────────┤        ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_HASH ,KC_DLR  ,KC_LBRC ,KC_RBRC ,KC_GRV  ,_______ ,                 XXXXXXX          ,KC_PAST ,KC_P4   ,KC_P5   ,KC_P6   ,KC_PPLS ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤        ┌───────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_PERC ,KC_CIRC ,KC_LPRN ,KC_RPRN ,KC_TILD ,_______ ,         XXXXXXX,XXXXXXX ,XXXXXXX ,XXXXXXX ,KC_P1   ,KC_P2   ,KC_P3   ,KC_PENT ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼──── ───┼────────┼────────┼────────┼───────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┘
     _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,        KC_PENT ,_______ ,         _______ ,KC_P0   ,KC_PDOT, KC_PENT
  //└────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘       └────────┴────────┘        └────────┴────────┴────────┴────────┘

  ),

//  [_NAV] = LAYOUT(
//  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
//     _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                                            _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
//  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
//     XXXXXXX ,XXXXXXX ,KC_MS_U ,XXXXXXX ,KC_WH_U ,XXXXXXX ,_______ ,                          _______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
//  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
//     XXXXXXX ,KC_MS_L ,KC_MS_D ,KC_MS_R ,KC_WH_D ,XXXXXXX ,_______ ,                          _______ ,KC_LEFT ,KC_DOWN ,KC_UP   ,KC_RIGHT,XXXXXXX ,XXXXXXX ,
//  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
//     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,_______ ,        _______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
//  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
//     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,     KC_BTN1 ,    KC_BTN2 ,_______ ,        _______ ,_______ ,    XXXXXXX ,     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX
//  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
//  ),

//  [_ADJUST] = LAYOUT(
//  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
//     XXXXXXX ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,                                            KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,XXXXXXX ,
//  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
//     XXXXXXX ,QK_BOOT   ,RGB_M_P ,RGB_TOG ,RGB_MOD ,RGB_HUD ,RGB_HUI ,                          RGB_SAD ,RGB_SAI ,RGB_VAD ,RGB_VAI ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
//  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
//     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,                          XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
//  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
//     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,XXXXXXX ,        XXXXXXX ,_______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
//  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
//     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,     XXXXXXX ,    XXXXXXX ,XXXXXXX ,        XXXXXXX ,XXXXXXX ,    XXXXXXX ,     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX
//  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
//  )
};
