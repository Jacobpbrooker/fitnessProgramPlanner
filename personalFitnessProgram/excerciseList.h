#pragma once
#include "excercise.h"

using namespace std;

class excerciseList
{
	vector <excercise> allExcercises;
public:
	void loadExcercises(string fileName);
};

