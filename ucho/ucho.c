/*
 * Copyright (C) 2026 Dron-B
 *   This program is free software: you can redistribute it and/or modify it under
 *the terms of the GNU General Public License as published by the Free Software
 *Foundation, either version 3 of the License, or (at your option) any later
 *version.
 *
 *This program is distributed in the hope that it will be useful, but WITHOUT ANY
 *WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 *PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 *You should have received a copy of the GNU General Public License along with
 *this program. If not, see <https://www.gnu.org/licenses/>.
*/


#include <stdio.h>

int main(int argc, char *argv[]){
  char *text = argv[1];
  if (text == NULL){
    printf("lol you dont enter me what you need to i write \n");
    return 1;
  }
  printf("%.255s\n", text);
  return 0;

  
}
