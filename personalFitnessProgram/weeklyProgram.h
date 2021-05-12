#pragma once
#include "excercise.h"

using namespace std;

class weeklyProgram
{
	vector <excercise> weeklyExercises;
public:
	void makeProgram(vector <excercise>, vector<muscleGroup>);
	vector<muscleGroup> returnMuscleSelection();
};

void muscleGroupMenu();
