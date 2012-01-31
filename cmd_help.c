/*  
    --cmd_help.c--
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

    IMPLEMENTS THE HELP COMMAND
*/

#include "cmd_help.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_help_commands();
void strip_newline_of_help( char *str, int size );

void strip_newline_of_help( char *str, int size )
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

void print_help() 
{
	char helpOp[50];
	printf("gbsh - General Help\n");
	printf("-------------------\n");
	printf("Commands Help: commands\n");
	printf("-------------------\n");
	printf(">> ");
	fgets(helpOp, 50, stdin);
	strip_newline_of_help(helpOp, 50);
	if(strcmp(helpOp, "commands") == 0) {
		print_help_commands();
	} else {
		return;
	}
}

void print_help_commands() 
{
	printf("gbsh - Available Commands\n");
	printf("-------------------------\n");
	printf("echo   - Prints to the terminal\n");
	printf("help   - Takes you to the help screen\n");
	printf("cd     - Change current directory\n");
	printf("pwd    - Print Working Directory\n");
	printf("ls     - List Directory Contents\n");
	printf("editor - Executes the string editor\n");
	printf("exit   - Exits gbsh\n");
}
