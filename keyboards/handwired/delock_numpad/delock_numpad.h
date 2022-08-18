/* Copyright 2019
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

#define LAYOUT( \
            k00, k30, k20, k31, \
            k01, k11, k21, k10, \
            k02, k12, k22, k32, \
            k03, k13, k23, k33, \
    k43,    k04, k54, k34 \
) { \
    { k00,   k10,     k20,      k30, _______, _______ }, \
    { k01,   k11,     k21,      k31, _______, _______ }, \
    { k02,   k12,     k22,      k32, _______, _______ }, \
    { k03,   k13,     k23,      k33,   k43  , _______ }, \
    { k04, _______, _______,    k34, _______,   k54   } \
}
