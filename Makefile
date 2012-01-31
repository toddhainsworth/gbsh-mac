#  
#    --Makefile--
#    Copyright (C) 2012 GeissT
#
#    This program is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#
#    This program is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
#
#    You should have received a copy of the GNU General Public License
#    along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
#    Makefile for gbsh
#

all:
	gcc gbsh.c util_stringeditor.c cmd_clear.c cmd_echo.c cmd_pwd.c cmd_cd.c cmd_help.c cmd_ls.c cmd_handler.c -o gbsh-mac
