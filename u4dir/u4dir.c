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
#include <sys/stat.h>
int main(int argc, char *argv[])
{
  if (argv[1] == NULL)
  {
	 printf("Hey u can use this comand like this u4dir exemple and it create folder name example, thanks for reading :D \n");
	 return 1;
	}

    if (mkdir(argv[1], 0755) != 0)
    {
        printf("sorry but i cant make this folder .w. \n");
        return 255;
    }

	printf("Folder '%s' created! >w<\n", argv[1]);
	return 0;
}
