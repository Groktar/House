/* This file is a part of Dune:House project
 * Copyright (C) 2011, Alexandr Kourbatov <trollssoap@gmail.com>
 *
 *  Dune:House is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Dune:House is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DICETEST_H
#define DICETEST_H



/**Dice generation test.*/
int  generate_dices(); 

/**Dice error control test.*/
int  error_control_in_dices(); 

/**Dice rolling test.*/
int roll_roll_dice(const unsigned short int dice_type);

#endif
