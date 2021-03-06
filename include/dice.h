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

#ifndef DICE_H
#define DICE_H

enum Dice_Types {d3=3, d6=6, d20=20};


class Dice {
public:
 /**Constructor.*/
  Dice(const unsigned short int dice_type); 
   //dice_type - defines overal number of dice's sides (defined in Dice_Types). 

 /**Destructor.*/
  ~Dice();

 /**Current dice type.*/
   //returns current dice type.
  unsigned short int DiceType();

 /**Roll dice.*/
   //returns a number from [1..quanity_of_sides].
  unsigned short int Roll();

private:
 unsigned short int quanity_of_sides;  //overal quanity of sides.

};

#endif
