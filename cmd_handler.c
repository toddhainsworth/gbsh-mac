/*  
    --cmd_handler.c--
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

    IMPLEMENTS THE COMMAND HANDLER
*/

#include "cmd_handler.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Command Headers
#include "cmd_echo.h"
#include "cmd_help.h"
#include "cmd_ls.h"
#include "cmd_cd.h"
#include "cmd_pwd.h"
#include "cmd_clear.h"

// Utility Headers
#include "util_stringeditor.h"

void exec_cmd(char * command) 
{
	if(strcmp(command, "echo") == 0) // echo command
	{
		do_echo();
	}
	else if(strcmp(command, "exit") == 0) // exit command
	{
		exit(0);
	}
	else if(strcmp(command, "help") == 0) // help command
	{
		print_help();
	}
	else if(strcmp(command, "ls") == 0) // ls command
	{
		do_ls();
	}
	else if(strcmp(command, "cd") == 0) // cd command
	{
		do_cd();
	}
	else if(strcmp(command, "pwd") == 0) // pwd command
	{
		do_pwd();
	}
	else if(strcmp(command, "clear") == 0) // clear command
	{
		do_clear();
	}
	else if(strcmp(command, "editor") ==0) // invoke the string editor
	{
		edit_string();
	}
	else 
	{
		printf("Command not found!\n");
	}
}
