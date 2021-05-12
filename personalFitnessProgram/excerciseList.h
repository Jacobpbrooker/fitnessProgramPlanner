#pragma once
#include <vector>
#include "excercise.h"

using namespace std;

class excerciseList{
	vector <excercise> NONE;
	vector <excercise> AbLow;
	vector <excercise> AbObl;
	vector <excercise> AbTot;
	vector <excercise> AbUpp;
	vector <excercise> BackLatDor;
	vector <excercise> BackLatRhom;
	vector <excercise> Bic;
	vector <excercise> CalGas;
	vector <excercise> CalSol;
	vector <excercise> ChestPec;
	vector <excercise> LegHam;
	vector <excercise> LegQuad;
	vector <excercise> LowBack;
	vector <excercise> ShouldDelt;
	vector <excercise> ShouldRot;
	vector <excercise> Tric;
public:
	void loadExcercises(string fileName);
};

