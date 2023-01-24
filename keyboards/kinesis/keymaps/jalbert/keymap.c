#include QMK_KEYBOARD_H


#define _LAYER0 0
//#define _LAYER1 1
#define _LAYER2 2
#define _LAYER1 1

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
};

enum unicode_names {
    Amin,
    Amay,
    Omin,
    Omay,
    Emin,
    Emay,
    Umin,
    Umay,
    Imin,
    Imay,
    Ene_min,
    Ene_may,
    UminDierisis,
    UmayDierisis,
    InterrogacionAbierto,
    ExclamacionAbierto,
    Euro,
};

const uint32_t PROGMEM unicode_map[] = {
[Amin]  = 0x00E1,
[Amay]  = 0x00C1,
[Emin]  = 0x00E9,
[Emay]  = 0x00C9,
[Omin]  = 0x00F3,
[Omay]  = 0x00D3,
[Umin]  = 0x00FA,
[Umay]  = 0x00DA,
[Imin]  = 0x00ED,
[Imay]  = 0x00CD,
[Ene_min]  = 0x00F1,
[Ene_may]  = 0x00D1,
[UminDierisis]  = 0x00FC,
[UmayDierisis]  = 0x00DC,

[InterrogacionAbierto]  = 0x00BF,
[ExclamacionAbierto]  = 0x00A1,

[Euro]  = 0x20AC,

};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT(

KC_CAPS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, // 0 row, left
KC_EQL, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, // 1 row, left
KC_TAB, KC_DQUO, KC_COMM, KC_DOT, KC_P, KC_Y, // 2 row, left
KC_ESC, KC_A, KC_O, KC_E, KC_U, KC_I, // 3 row, left
KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, // 4 row, left
KC_GRV, KC_QUOT, KC_LEFT, KC_RGHT, // 5 row, left

KC_LCTL, KC_LALT, KC_HOME, KC_BSPC, KC_DEL, KC_END, // pulgar izquierdo


 KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUS, KC_TRNS, TG(1), // 0 row, rigth
//  MO(1),
//  TG(2),

 KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_MINS, KC_F, KC_G, KC_C, KC_H, KC_L, KC_SLSH, KC_D, KC_R, KC_T, KC_N, KC_S, KC_BSLS, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSFT, KC_UP, KC_DOWN, KC_LBRC, KC_RBRC,

//  KC_AMPR,
 OSL(2),

 KC_RCTL, KC_PGUP, KC_PGDN, KC_ENT, KC_SPC),


[_LAYER1] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

// TG(0),
KC_TRNS,

KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),


[_LAYER2] = LAYOUT(
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,// 0 row, left
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, // 1 row, left
KC_TRNS, X(ExclamacionAbierto), X(InterrogacionAbierto), X(Euro), XP(UminDierisis, UmayDierisis), XP(Ene_min, Ene_may),  // 2 row, left
KC_TRNS, XP(Amin, Amay), XP(Omin, Omay), XP(Emin, Emay), XP(Umin, Umay), XP(Imin, Imay),  // 3 row, left
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  // 4 row, left
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  // 5 row, left

KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  // pulgar izquierdo

KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)


};
