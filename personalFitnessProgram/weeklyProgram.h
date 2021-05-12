#pragma once
#include "excercise.h"
#include "excerciseList.h"

using namespace std;

class weeklyProgram {
	vector <excercise> weeklyExercises;
public:
	void makeProgram(excerciseList, vector<muscleGroup>);
	void displayProgram();
};

vector<muscleGroup> returnMuscleSelection();
void muscleGroupMenu();
