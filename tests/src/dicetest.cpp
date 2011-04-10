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
 #include "dicetest.h"
 #include "dice.h"



/**Dice generation test.*/
int  generate_dices() {
 Dice* TestDice[20];
 for (int sides=1; sides<=20; sides++) {
  TestDice[sides-1] = new Dice(sides);
  if ( TestDice[sides-1]->DiceType() != sides )
   return (sides);
 }
 fprintf(stdout, "Dices generated successfully!\n");
 return (0);
}


/**Dice error control test.*/
int  error_control_in_dices() {
 Dice* BadDice[3];
 BadDice[0] = new Dice(-30);
 BadDice[1] = new Dice(0);
 BadDice[2] = new Dice(50);
 if ( (BadDice[0]->DiceType() != d6)||(BadDice[1]->DiceType() != d6)||(BadDice[2]->DiceType() != d6) )
  return (1);
 else
  fprintf(stdout, "Dice generating error tested successfully!\n");
 return (0);
}


/**Dice rolling test.*/
int roll_roll_dice(const unsigned short int dice_type) {
 Dice* TestDice = new Dice(dice_type);
 int roll_result;
 for (int tries=0; tries<=dice_type; tries++) {
  roll_result=TestDice->Roll();
  if ( (roll_result<1)||(roll_result>dice_type) )
   return (1);
  else
   fprintf(stdout, "We rolling %i\n", roll_result);
 }
 return (0);
}
