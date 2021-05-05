#include <vector>
#include <string>
#include <fstream>
#include <iostream>

#include "excerciseList.h"

void excerciseList::loadExcercises(string fileName)
{
	fstream fin;
	fin.open(fileName);

	if (fin.is_open())
	{
		while (!fin.eof())			// do work here creating objects in loop and pushing to vector list
		{
			string line;
			getline(fin, line);		// get the entire line and then will need to parse data to create the objects needed

			istringstream issLine(line);
			string xstring;
			string ystring;
			string zstring;
			string orientationString;

			getline(issLine, xstring, ',');
			getline(issLine, ystring, ',');
			getline(issLine, zstring, ',');
			getline(issLine, orientationString);

		}
	}
	else
		cout << "Failed to open file - " << fileName << endl;
}
