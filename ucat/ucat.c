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
int main(void){
  char path[420];
  printf("can u enter the path for file \n");
  scanf("%419s", path);
  
  FILE *file = fopen(path,"r");
  if (file == NULL){
    printf("\n Sorry.. but i dont see this file :< \n \a");
    return 255;
  }
  int ch;
  while ((ch = fgetc(file)) != EOF) {
    putchar(ch);
  }

  fclose(file);
  return 0;
}
