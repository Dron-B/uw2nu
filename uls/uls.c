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
#include <dirent.h>
int main(void){
  char path[256];
  printf("How about enter the path? :3 \n");
  scanf("%255s", path);
  
  DIR *dir = opendir(path);
  if (dir == NULL){
    printf("\n Sorry.. but i dont see this dir D:\n \a");
    return 255;
  }
  struct dirent *file;
    while ((file = readdir(dir)) != NULL){
    printf("%s\n", file->d_name);
  }

  closedir(dir);
  return 0;
}
