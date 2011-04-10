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
 #include "sandbox.h"
 #include "dicetest.h"
 


/**Start tests.*/
int  lets_play_with_sand() {
 int error;
 error=generate_dices();
 if (!error)
  error=error_control_in_dices();
 if (!error)
  error=roll_roll_dice(6);
 if (!error)
  error=roll_roll_dice(20);
   
 fprintf(stderr, "Error code: %i\n", error);
 return (error);
}
