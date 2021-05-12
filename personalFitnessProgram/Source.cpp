#include <iostream>
#include <string>
#include <cstdlib>

#include "excerciseList.h"
#include "weeklyProgram.h"



using namespace std;

// I think the first thing I need to do is create the ID code for each and attach
int main(void)
{
	string filename = "excercises/excercises.csv";
	
	excerciseList all_excercises;
	all_excercises.loadExcercises(filename);
	
	weeklyProgram weekly_program;
	weekly_program.makeProgram(all_excercises, returnMuscleSelection());

	weekly_program.displayProgram();

	exit(EXIT_SUCCESS);
}
