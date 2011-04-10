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

/**Headers.*/
 #include <stdio.h>
 #include <stdlib.h>
 #include "dice.h"



/**Constructor.*/
Dice::Dice(const unsigned short int dice_type) {
 if ( (dice_type>0)&&(dice_type<=20) )
  quanity_of_sides=dice_type;
 else { 
  fprintf(stderr, "Error in dice creating: Wrong quanity of dice sides, automaticaly switched to d6!\n");
  quanity_of_sides=d6;
 }
}


/**Destructor.*/
Dice::~Dice() {
}


/**Current dice type.*/
unsigned short int  Dice::DiceType() {
 return (quanity_of_sides);
}


/**Roll dice.*/
unsigned short int Dice::Roll() {
 int result=rand()%quanity_of_sides+1;
 return (result);
}
