/* Copyright 2017 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#endif

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
              L01     ,L02     ,L03     ,L04     ,L05     ,L06     ,                          R00     ,R01     ,R02     ,R03     ,R04     ,R05     ,R06     ,R07     , \
     L10     ,L11     ,L12     ,L13     ,L14     ,L15     ,L16     ,                          R10     ,R11     ,R12     ,R13     ,R14     ,R15     ,R16     ,R17     , \
     L20     ,L21     ,L22     ,L23     ,L24     ,L25     ,L26     ,                 R20              ,R21     ,R22     ,R23     ,R24     ,R25     ,R26     ,R27     , \
     L30     ,L31     ,L32     ,L33     ,L34     ,L35     ,L36     ,         R40    ,R30     ,R46     ,R31     ,R32     ,R33     ,R34     ,R35     ,R36     ,R37     , \
     L40     ,L41     ,L42     ,L43     ,L44     ,L45     ,L46     ,L00     ,        R41     ,R47     ,         R42     ,R43     ,R44     ,R45                         \
) \
{ \
    { L00,   L01,   L02,   L03,   L04,   L05,   L06,   KC_NO }, \
    { L10,   L11,   L12,   L13,   L14,   L15,   L16,   KC_NO }, \
    { L20,   L21,   L22,   L23,   L24,   L25,   L26,   KC_NO }, \
    { L30,   L31,   L32,   L33,   L34,   L35,   L36,   KC_NO }, \
    { L40,   L41,   L42,   L43,   L44,   L45,   L46,   KC_NO }, \
    { R00,   R01,   R02,   R03,   R04,   R05,   R06,   R07   }, \
    { R10,   R11,   R12,   R13,   R14,   R15,   R16,   R17   }, \
    { R20,   R21,   R22,   R23,   R24,   R25,   R26,   R27   }, \
    { R30,   R31,   R32,   R33,   R34,   R35,   R36,   R37   }, \
    { R40,   R41,   R42,   R43,   R44,   R45,   R46,   R47   }  \
}
