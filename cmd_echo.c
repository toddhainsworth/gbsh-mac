/*  
    --cmd_echo.c--
    Copyright (C) 2012 GeissT

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    IMPLEMENTS THE ECHO COMMAND
*/

#include "cmd_echo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 128

void do_echo() 
{
	char text[128];
	//char where[256];
	printf("Text: ");
	fgets(text, 128, stdin);
	//printf("Where [console]: ");
	//fgets(where, 50, stdin);
	
	printf("%s", text);
}
