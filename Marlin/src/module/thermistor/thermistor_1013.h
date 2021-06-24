/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// MXP4250AP analog Pressure sensor for PnP
// These are in kPa, not Celcius
const short temptable_1013[][2] PROGMEM = {
      { OV(146),  25},
      { OV(237),  50},
      { OV(328),  75},
      { OV(420), 100},
      { OV(511), 125},
      { OV(602), 150},
      { OV(693), 175},
      { OV(785), 200},
      { OV(876), 225},
      { OV(966), 250}
};
