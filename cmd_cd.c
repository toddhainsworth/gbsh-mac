/*  
    --cmd_cd.c--
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

    IMPLEMENTS THE CD COMMAND
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cmd_cd.h"

void strip_newline_from_dir( char *str, int size );

void strip_newline_from_dir( char *str, int size )
{
    int i;

    // remove '\0'
    for (  i = 0; i < size; ++i )
    {
        if ( str[i] == '\n' )
        {
            str[i] = '\0';

            // all done
            return;
        }
    }
    // we are here? then no new line was found
}

void do_cd()
{
	char dirName[512];
	printf("To what directory?");
	fgets(dirName, 512, stdin);
	strip_newline_of_help(dirName, 512);
	chdir(dirName);
}
