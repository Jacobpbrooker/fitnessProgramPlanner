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
	void displayAll();
	vector<excercise> getAbLow();
	vector<excercise> getAbObl();
	vector<excercise> getAbTot();
	vector<excercise> getAbUpp();
	vector<excercise> getBackLatDor();
	vector<excercise> getBackLatRhom();
	vector<excercise> getBic();
	vector<excercise> getCalGas();
	vector<excercise> getCalSol();
	vector<excercise> getChestPec();
	vector<excercise> getLegHam();
	vector<excercise> getLegQuad();
	vector<excercise> getLowBack();
	vector<excercise> getShouldDelt();
	vector<excercise> getShouldRot();
	vector<excercise> getTric();
};

