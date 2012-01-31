/*  
    --cmd_pwd.c--
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

    IMPLEMENTS THE PWD COMMAND
*/

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "cmd_pwd.h"

char * getDir()
{
	char workDir[1024];
	char * newLine = "\n";
	if(getcwd(workDir, sizeof(workDir)) != NULL)
		if(strcmp(workDir, "/") == 0) {
			return workDir;
		}
		else {
			return workDir;
		}
	else
		printf("Unable to get current working directory!");
	return;
}

void do_pwd()
{
	char workDir[1024];
	if(getcwd(workDir, sizeof(workDir)) != NULL) {
		//if(strcmp(workDir, "/") == 0) {
			printf("%s\n", workDir);
		//}
		//else {
			//printf("%s", workDir);
		//}
	}
	else {
		printf("Unable to change directory!");
	}
}
