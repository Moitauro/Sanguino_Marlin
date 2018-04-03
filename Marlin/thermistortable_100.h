/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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

// 100k thermistor  (10k pullup)
const short temptable_100[][2] PROGMEM = {
	{ OV( 12 ), 300 },
	{ OV( 13 ), 295 },
	{ OV( 14 ), 290 },
	{ OV( 15 ), 285 },
	{ OV( 16 ), 280 },
	{ OV( 17 ), 275 },
	{ OV( 18 ), 270 },
	{ OV( 19 ), 265 },
	{ OV( 21 ), 260 },
	{ OV( 22 ), 255 },
	{ OV( 24 ), 250 },
	{ OV( 26 ), 245 },
	{ OV( 28 ), 240 },
	{ OV( 30 ), 235 },
	{ OV( 33 ), 230 },
	{ OV( 36 ), 225 },
	{ OV( 39 ), 220 },
	{ OV( 42 ), 215 },
	{ OV( 46 ), 210 },
	{ OV( 51 ), 205 },
	{ OV( 55 ), 200 },
	{ OV( 61 ), 195 },
	{ OV( 67 ), 190 },
	{ OV( 73 ), 185 },
	{ OV( 80 ), 180 },
	{ OV( 89 ), 175 },
	{ OV( 98 ), 170 },
	{ OV(108 ), 165 },
	{ OV(119 ), 160 },
	{ OV(132 ), 155 },
	{ OV(146 ), 150 },
	{ OV(162 ), 145 },
	{ OV(180 ), 140 },
	{ OV(200 ), 135 },
	{ OV(221 ), 130 },
	{ OV(245 ), 125 },
	{ OV(272 ), 120 },
	{ OV(300 ), 115 },
	{ OV(332 ), 110 },
	{ OV(365 ), 105 },
	{ OV(401 ), 100 },
	{ OV(439 ), 95 },
	{ OV(479 ), 90 },
	{ OV(520 ), 85 },
	{ OV(562 ), 80 },
	{ OV(604 ), 75 },
	{ OV(646 ), 70 },
	{ OV(687 ), 65 },
	{ OV(727 ), 60 },
	{ OV(765 ), 55 },
	{ OV(800 ), 50 },
	{ OV(832 ), 45 },
	{ OV(861 ), 40 },
	{ OV(887 ), 35 },
	{ OV(910 ), 30 },
	{ OV(930 ), 25 },
	{ OV(947 ), 20 },
	{ OV(962 ), 15 },
	{ OV(974 ), 10 },
	{ OV(984 ),  5 },
	{ OV(992 ),  0 }
};
