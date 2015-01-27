// Special KEYMAPPING for easy readability:
#define ERGODOX_KEYMAP( \
    L01,L02,L03,L04,L05,L06,L07,    R01,R02,R03,R04,R05,R06,R07, \
    L08,L09,L10,L11,L12,L13,L14,    R08,R09,R10,R11,R12,R13,R14, \
    L15,L16,L17,L18,L19,L20,            R15,R16,R17,R18,R19,R20, \
    L21,L22,L23,L24,L25,L26,L27,    R21,R22,R23,R24,R25,R26,R27, \
    L28,L29,L30,L31,L32,                    R28,R29,R30,R31,R32, \
                         L33,L34,   R33,R34, \
                             L35,   R35, \
                     L36,L37,L38,   R36,R37,R38 \
    ) \
    KEYMAP(L01,L02,L03,L04,L05,L06,L07,L08,L09,L10,L11, \
        L12,L13,L14,L15,L16,L17,L18,L19,L20,L21,L22, \
        L23,L24,L25,L26,L27,L28,L29,L30,L31,L32,L33, \
        L34,L35,L36,L37,L38,R01,R02,R03,R04,R05,R06, \
        R07,R08,R09,R10,R11,R12,R13,R14,R15,R16,R17, \
        R18,R19,R20,R21,R22,R23,R24,R25,R26,R27,R28, \
        R29,R30,R31,R32,R33,R34,R35,R36,R37,R38 \
    )
static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    ERGODOX_KEYMAP( // Layer 0
                   
    /* ,--------------------------------------------------.           ,--------------------------------------------------. */
    /* |  ~L2   |  ! 1 |  " 2 |  # 3 |  $ 4 |  % 5 |      |           |      |  & 6 |  / 7 |  ( 8 |  ) 9 |  = 0 |        | */
          FN2   ,   1  ,   2  ,   3  ,   4  ,   5  ,  NO ,               NO  ,   6  ,   7  ,   8  ,   9  ,   0  ,   NO   ,
    /* |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------| */
    /* |        |  a A |  w W |  e E |  r R |  t T |      |           |      |  y Y |  u U |  i I |  o O |  p P |        | */
           NO   ,   Q  ,   W  ,   E  ,   R  ,   T  ,  NO  ,              NO  ,   Y  ,   U  ,   I  ,   O  ,   P  ,   NO   ,
    /* |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------| */
    /* |        |  a A |  s S |  d D |  f F |  g G |------|           |------|  h H |  j J |  k K |  l L |  å Å |        | */
           NO   ,   A  ,   S  ,   D  ,   F  ,   G  ,                             H  ,   J  ,   K  ,   L  , LBRC ,  NO    ,
    /* |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------| */
    /* |        | z Z  |  x X |  c C |  v V |  b B |      |           |      |  n N |  m M |  ö Ö |  ä Ä |  ↑   |        | */
            NO  ,   Z  ,   X  ,   C  ,   V  ,   B  ,  NO  ,              NO  ,   N  ,   M  , SCLN , QUOT ,  UP  ,  NO    ,
    /* `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------' */
    /*   |      |      |      | LGui | ~L1  |                                       | ~L1  | RGui |   ←  |   ↓  |   →  |   */
            NO  ,  NO  ,  NO  , LGUI ,  FN1 ,                                          FN1 , RGUI , LEFT , DOWN , RIGHT,
    /*   `----------------------------------'                                       `----------------------------------'   */
    /*                                        ,-------------.       ,-------------.                                        */
    /*                                        |      |      |       |      |      |                                        */
                                                NO   , NO   ,         NO   , NO    ,
    /*                                 ,------|------|------|       |------+------+------.                                 */
    /*                                 | Spc  | Bspc |      |       |      | Del  | Ent  |                                 */
                                                        NO  ,          NO  , 
    /*                                 | LCtrl| LAlt |------|       |------| LAlt |LCtrl |                                 */
    /*                                 |      |      |Tab Sft|      |Esc Sft|      |      |                                 */
                                         FN26 , FN27 , FN30 ,         FN31  , FN28 , FN29
    /*                                 `--------------------'       `--------------------'                                 */
    ),

    ERGODOX_KEYMAP( // Layer 1 

    /* ,--------------------------------------------------.           ,--------------------------------------------------. */
    /* |        |   F1 |   F2 |   F3 |   F4 |   F5 |   F6 |           |   F7 |   F8 |   F9 |  F10 |  F11 |  F12 |        | */
           NO   ,   F1 ,   F2 ,   F3 ,   F4 ,   F5 ,   F6 ,               F7 ,   F8 ,   F9 ,  F10 ,  F11 ,  F12 ,  TRNS  ,
    /* |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------| */
    /* |        |   !  |   @  |   #  |   $  |  %   |      |           |      |   ^  |  &   |   *  |  (   |   )  |        | */
          TRNS  ,  FN3 ,  FN4 , FN5  ,  FN6 ,  FN7 , TRNS ,             TRNS ,  FN8 ,  FN9 , PAST , FN10 , FN11 ,  TRNS  ,
    /* |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------| */
    /* |        |   {  |   }  |   [  |   ]  |   |  |------|           |------|   ,  |  .   |   ;  |   :  |  _   |        | */
           TRNS , FN12 , FN13 , FN14 , FN15 , FN16 ,                           COMM , DOT  , FN17 , FN18 , FN19 ,  TRNS  ,
    /* |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------| */
    /* |        |   -  |   +  |   =  |   \  |   /  |      |           |      |  <   |   >  |  ?   |   "  |  '   |        | */
          TRNS  , SLSH , MINS , FN24 , FN20 , FN25 , TRNS ,             TRNS , GRV  , FN21 , FN22 , FN23 , BSLS ,  TRNS  ,
    /* `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------' */
    /*   |      |      |      |      |      |                                       |      |      |      |      |      |   */
           TRNS , TRNS , TRNS , TRNS , TRNS ,                                         TRNS , TRNS , TRNS , TRNS , TRNS ,
    /*   `----------------------------------'                                       `----------------------------------'   */
    /*                                        ,-------------.       ,-------------.                                        */
    /*                                        |   -  |   -  |       |   -  |    - |                                        */
                                                TRNS , TRNS ,         TRNS , TRNS ,
    /*                                 ,------|------|------|       |------+------+------.                                 */
    /*                                 |      |      |   -  |       |   -  |      |      |                                 */
                                                       TRNS ,         TRNS ,
    /*                                 |   -  |   -  |------|       |------|   -  |   -  |                                 */
    /*                                 |      |      |   -  |       |   -  |      |      |                                 */
                                         TRNS , TRNS , TRNS ,         TRNS , TRNS , TRNS
    /*                                 `--------------------'       `--------------------'                                 */

    ),

    ERGODOX_KEYMAP( // Layer 2

    /* ,--------------------------------------------------.           ,--------------------------------------------------. */
    /* |        |   -  |   -  |   -  |   -  |   -  |  -   |           |   -  |   -  |   -  |   -  |   -  |   -  | TEENSY | */
          TRNS  ,   NO ,   NO ,   NO ,   NO ,   NO ,  NO  ,              NO  ,   NO ,   NO ,   NO ,   NO ,   NO ,   FN0  ,
    /* |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------| */
    /* |    -   |   -  |   -  |  -   |   -  |   -  |   -  |           |   -  |   -  |   -  |  -   |  -   |   -  |    -   | */
            NO  ,   NO ,  NO  ,  NO  ,   NO ,   NO ,   NO ,               NO ,   NO ,  NO  ,  NO  ,  NO  ,  NO  ,    NO  ,
    /* |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------| */
    /* |    -   |   -  |   -  |   -  |   -  |   -  |------|           |------|   -  |   -  |  -   |  -   |   -  |    -   | */
            NO  ,  NO  ,  NO  ,  NO  ,   NO ,   NO ,                             NO ,   NO ,  NO  ,  NO  ,   NO ,   NO   ,
    /* |--------+------+------+------+------+------|   -  |           |   -  |------+------+------+------+------+--------| */
    /* |    -   |   -  |   -  |   -  |   -  |   -  |      |           |      |   -  |   -  |   -  |   -  |   -  |    -   | */
            NO  ,   NO ,   NO ,   NO ,   NO ,   NO ,   NO ,               NO ,   NO ,   NO ,   NO ,   NO ,   NO ,    NO  ,
    /* `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------' */
    /*   |   -  |   -  |   -  |  -   |  -   |                                       |   -  |    - |   -  |   -  |   -  |   */
             NO ,   NO , _MUTE ,_VOLDOWN,_VOLUP,                                           NO ,    NO,   NO ,   NO ,   NO ,
    /*   `----------------------------------'                                       `----------------------------------'   */
    /*                                        ,-------------.       ,-------------.                                        */
    /*                                        |   -  |   -  |       |   -  |   -  |                                        */
                                                  NO ,   NO ,           NO ,   NO ,
    /*                                 ,------|------|------|       |------+------+------.                                 */
    /*                                 |      |      |   -  |       |   -  |      |      |                                 */
                                                         NO ,           NO ,
    /*                                 |   -  |   -  |------|       |------|   -  |   -  |                                 */
    /*                                 |      |      |   -  |       |   -  |      |      |                                 */
                                           NO ,   NO ,   NO ,           NO ,   NO ,   NO
    /*                                 `--------------------'       `--------------------'                                 */
    ),

};

/* id for user defined functions & macros */

enum function_id {
  TEENSY_KEY,
};

//enum macro_id {};

/*
 * Fn action definition
 */


static const uint16_t PROGMEM fn_actions[] = {
  [ 0] = ACTION_FUNCTION(TEENSY_KEY),// FN0: Teensy key
  [ 1] = ACTION_LAYER_MOMENTARY(1),// FN1: Layer 1
  [ 2] = ACTION_LAYER_MOMENTARY(2),// FN2: Layer 2
  [ 3] = ACTION_MODS_KEY(MOD_RSFT, KC_1),// FN3: !
  [ 4] = ACTION_MODS_KEY(MOD_RALT, KC_2),// FN4: @
  [ 5] = ACTION_MODS_KEY(MOD_RSFT, KC_3),// FN5: #
  [ 6] = ACTION_MODS_KEY(MOD_RALT, KC_4),// FN6: $
  [ 7] = ACTION_MODS_KEY(MOD_RSFT ,KC_5),// FN7: %
  [ 8] = ACTION_MODS_KEY(MOD_RSFT, KC_RBRC),// FN8: ^
  [ 9] = ACTION_MODS_KEY(MOD_RSFT, KC_6),// FN9: &
  [10] = ACTION_MODS_KEY(MOD_RSFT, KC_8),// FN10: (
  [11] = ACTION_MODS_KEY(MOD_RSFT, KC_9),// FN11: )
  [12] = ACTION_MODS_KEY(MOD_RALT | MOD_RSFT, KC_8),// FN12: {
  [13] = ACTION_MODS_KEY(MOD_RALT | MOD_RSFT, KC_9),// FN13: {
  [14] = ACTION_MODS_KEY(MOD_RALT, KC_8),// FN14: [
  [15] = ACTION_MODS_KEY(MOD_RALT, KC_9),// FN15: ]
  [16] = ACTION_MODS_KEY(MOD_RALT, KC_7),// FN16: |
  [17] = ACTION_MODS_KEY(MOD_RSFT, KC_COMM),// FN17: ;
  [18] = ACTION_MODS_KEY(MOD_RSFT, KC_DOT),// FN18: :
  [19] = ACTION_MODS_KEY(MOD_RSFT, KC_SLSH),// FN19: _
  [20] = ACTION_MODS_KEY(MOD_RSFT | MOD_RALT, KC_7),// FN20:
  [21] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),// FN21: >
  [22] = ACTION_MODS_KEY(MOD_RSFT, KC_MINS),// FN22: ?
  [23] = ACTION_MODS_KEY(MOD_RSFT, KC_2),// FN23: "
  [24] = ACTION_MODS_KEY(MOD_RSFT, KC_0),// FN24: =
  [25] = ACTION_MODS_KEY(MOD_RSFT, KC_7),// FN25: /

  [26] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_SPC),// FN26
  [27] = ACTION_MODS_TAP_KEY(MOD_LALT, KC_BSPC),// FN27
  [28] = ACTION_MODS_TAP_KEY(MOD_LALT, KC_DELETE),// FN28
  [29] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ENT),// FN29
  [30] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_TAB),// FN30
  [31] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_ESC),// FN31
  
  
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(50);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (record->event.pressed) {
        switch (id) {}
    }
    return MACRO_NONE;
}

#define FN_ACTIONS_SIZE         (sizeof(fn_actions)   / sizeof(fn_actions[0]))

/* translates Fn keycode to action */
action_t keymap_fn_to_action(uint8_t keycode)
{
    action_t action;
    action.code = ACTION_NO;
    if ((action.code == ACTION_NO) && (FN_INDEX(keycode) < FN_ACTIONS_SIZE)) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }
    return action;
}
