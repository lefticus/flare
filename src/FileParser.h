/*
Copyright 2011 Clint Bellanger

This file is part of FLARE.

FLARE is free software: you can redistribute it and/or modify it under the terms
of the GNU General Public License as published by the Free Software Foundation,
either version 3 of the License, or (at your option) any later version.

FLARE is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
FLARE.  If not, see http://www.gnu.org/licenses/
*/

/**
 * FileParser
 *
 * Abstract the generic key-value pair ini-style file format
 */

#ifndef FILE_PARSER_H
#define FILE_PARSER_H

#include <fstream>
#include <string>
#include "UtilsParsing.h"

class FileParser {
private:
	ifstream infile;
	string line;
	
public:
	FileParser();
	~FileParser();
	
	bool open(string filename);
	void close();
	bool next();
	string nextValue();
	string getRawLine();

	bool new_section;
	string section;
	string key;
	string val;
	
};

#endif
