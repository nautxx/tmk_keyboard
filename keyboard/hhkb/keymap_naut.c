//  Naut: My keymap
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Base Layer
    ,-----------------------------------------------------------.
    |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
    |-----------------------------------------------------------|
    |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
    |-----------------------------------------------------------|
    |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Fn5     |
    |-----------------------------------------------------------|
    |Fn4     |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn1|
    `-----------------------------------------------------------'
          |Alt|Gui  |         Space         |Gui  |Alt|
          `-------------------------------------------'
    */

    [0] = \
    KEYMAP( ESC,  1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSLS,GRV, \
            TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,BSPC, \
           LCTL,  A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT, FN5, \
            FN4,  Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,RSFT, FN1, \
               LALT,LGUI,           SPC,               RGUI,RALT),

    /* Layer 1: HHKB mode (HHKB Fn)
    ,-----------------------------------------------------------.
    |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
    |-----------------------------------------------------------|
    |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
    |-----------------------------------------------------------|
    |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
    |-----------------------------------------------------------|
    |Fn3     |   |   |   |   |   |  +|  -|End|PgD|Dow|Fn2   |   |
    `-----------------------------------------------------------'
          |   |     |                       |     |   |
          `-------------------------------------------'
    */

    [1] = \
    KEYMAP( PWR,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, INS, DEL, \
           CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,  UP,TRNS,BSPC, \
           TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT, \
            FN3,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN, FN2,TRNS, \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 2: Mac Media
    ,-----------------------------------------------------------.
    |   |Dim|Brt|MCl|ApW|Des|Dsh|Rew|Ply|Fwd|Mut|VoD|VoU|   |   |
    |-----------------------------------------------------------|
    |     |Pr1|Pr2|   |   |   |   |   |   |   |   |   |   |     |
    |-----------------------------------------------------------|
    |      |   |   |   |   |   |   |   |   |   |   |   |        |
    |-----------------------------------------------------------|
    |        |   |   |   |   |   |   |   |   |   |   |Fn10  |   |
    `-----------------------------------------------------------'
          |   |     |                       |     |   |
          `-------------------------------------------'
    */

    [2] = \
    KEYMAP(TRNS, F14, F15, FN6, FN7, F11, F12,MRWD,MPLY,MFFD,MUTE,VOLD,VOLU,TRNS,TRNS, \
           TRNS, FN8, FN9,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN10,TRNS, \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),
    
    /* Layer 3: Numpad
    ,-----------------------------------------------------------.
    |   |   |   |   |   |   |   |   |   |   |  /|  *|  -|   |   |
    |-----------------------------------------------------------|
    |     |   |   |   |   |   |   |   |   |  7|  8|  9|  +|     |
    |-----------------------------------------------------------|
    |      |   |   |   |   |   |   |   |   |  4|  5|  6|Enter   |
    |-----------------------------------------------------------|
    |        |   |   |   |   |   |   |   |  1|  2|  3|      |   |
    `-----------------------------------------------------------'
          |   |     |                       |    0|  .|
          `-------------------------------------------'
    */

    [3] = \
    KEYMAP( FN3,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSLS,PAST,PMNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  P7,  P8,  P9,PPLS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  P4,  P5,  P6,PENT, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  P1,  P2,  P3,TRNS,TRNS, \
                TRNS,TRNS,          TRNS,                 P0,PDOT),
};

//  ID for user defined functions 
enum function_id {
    LSHIFT_LPAREN,
};

enum macro_id {
    MAC_PRNT_SCRN,
    MAC_PRNT_AREA,
};
    
//  Fn action definition
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_DEFAULT_LAYER_SET(0),            // Default layer
    [1] = ACTION_LAYER_MOMENTARY(1),              // HHKB Mode (HHKB Fn) Layer
    [2] = ACTION_LAYER_MOMENTARY(2),              // Mac Media Layer
    [3] = ACTION_LAYER_TOGGLE(3),                 // Numpad Layer
    [4] = ACTION_MODS_ONESHOT(MOD_LSFT),          // Oneshot Shift
    [5] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENT),  // RControl with tap Enter
    [6] = ACTION_MODS_KEY(MOD_LCTL, KC_UP),       // Mission Control Button
    [7] = ACTION_MODS_KEY(MOD_LCTL, KC_DOWN),     // Application Windows Button
    [8] = ACTION_MACRO(MAC_PRNT_SCRN),            // Macro: Save picture of screen
    [9] = ACTION_MACRO(MAC_PRNT_AREA),            // Macro: Save picture of selected area
    [10] = ACTION_LAYER_SET(0, ON_RELEASE),       // Force default layer on release
//  [x] = ACTION_FUNCTION_TAP(LSHIFT_LPAREN),     // Function: LShift with tap '(' 
};
    
//  Macro definition
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case MAC_PRNT_SCRN:
            return (record->event.pressed ?
                    MACRO(D(LGUI), D(LSHIFT), T(3), END) :
                    MACRO(U(LSHIFT), U(LGUI), END));
        case MAC_PRNT_AREA:
            return (record->event.pressed ?
                    MACRO(D(LGUI), D(LSHIFT), T(4), END) :
                    MACRO(U(LSHIFT), U(LGUI), END));
    }
    return MACRO_NONE;
}
    
//  User defined action function
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    if (record->event.pressed) dprint("P"); else dprint("R");
    dprintf("%d", record->tap.count);
    if (record->tap.interrupted) dprint("i");
    dprint("\n");

    switch (id) {
        case LSHIFT_LPAREN:
            // Shift parentheses example: LShft + tap '('
            // http://stevelosh.com/blog/2012/10/a-modern-space-cadet/#shift-parentheses
            // http://geekhack.org/index.php?topic=41989.msg1304899#msg1304899
            if (record->event.pressed) {
                if (record->tap.count > 0 && !record->tap.interrupted) {
                    if (record->tap.interrupted) {
                        dprint("tap interrupted\n");
                        register_mods(MOD_BIT(KC_LSHIFT));
                    }
                } else {
                    register_mods(MOD_BIT(KC_LSHIFT));
                }
            } else {
                if (record->tap.count > 0 && !(record->tap.interrupted)) {
                    add_weak_mods(MOD_BIT(KC_LSHIFT));
                    send_keyboard_report();
                    register_code(KC_9);
                    unregister_code(KC_9);
                    del_weak_mods(MOD_BIT(KC_LSHIFT));
                    send_keyboard_report();
                    record->tap.count = 0;  // ad-hoc: cancel tap
                } else {
                    unregister_mods(MOD_BIT(KC_LSHIFT));
                }
            }
            break;
    }
}