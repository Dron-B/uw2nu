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
int main(int argc, char *argv[])
{
  char *path = argv[1];
  if (path == NULL) {
    printf("pls can u add file at argument \n like this(example): \n utoch example.txt \n :3 ");
    return 1;
  }

  
  FILE *file = fopen(path,"a");
  if (file == NULL){
    printf("\n Sorry.. but i can't create this file :< \n \a");
    return 255;
  }

  fclose(file);
  return 0;
}
