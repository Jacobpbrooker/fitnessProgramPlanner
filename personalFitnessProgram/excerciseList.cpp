#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include "excerciseList.h"

extern int excerciseCounter = 0;

void excerciseList::loadExcercises(string fileName)
{
	fstream fin;
	fin.open(fileName);

	if (fin.is_open())
	{
		while (!fin.eof())														// do work here creating objects in loop and pushing to vector list
		{
			string line;
			getline(fin, line);													// get the entire line and then will need to parse data to create the objects needed

			istringstream issLine(line);
			string muscleGRP;
			string exc;
			string lvl;
			string pushp;
			string modi;
			string jnt;
									
			getline(issLine, muscleGRP, ',');									// parse the data and covert to enum class values
			getline(issLine, exc, ',');
			getline(issLine, lvl, ',');
			getline(issLine, pushp, ',');
			getline(issLine, modi, ',');
			getline(issLine, jnt);

			muscleGroup m_grp = stringToMuscleGroup(muscleGRP);					
			intensity i_ty = stringToIntensity(lvl);
			PP p_p = stringToPushPull(pushp);
			modality m_ty = stringToModality(modi);
			joint j_nt = stringToJoint(jnt);
									
			excercise excer(m_grp, exc, "N/A", i_ty, p_p, m_ty, j_nt, ++excerciseCounter);  // create the excercise object 
			
			switch (excer.getMuscles())
			{
			case muscleGroup::NONE:
				this->NONE.push_back(excer);
				break;
			case muscleGroup::AbdominalsLower:
				this->AbLow.push_back(excer);
				break;
			case muscleGroup::AbdominalsObliques:
				this->AbObl.push_back(excer);
				break;
			case muscleGroup::AbdominalsTotal:
				this->AbTot.push_back(excer);
				break;
			case muscleGroup::AbdominalsUpper:
				this->AbUpp.push_back(excer);
				break;
			case muscleGroup::BackLatissimusDorsi:
				this->BackLatDor.push_back(excer);
				break;
			case muscleGroup::BackLatDorsiRhomboids:
				this->BackLatRhom.push_back(excer);
				break;
			case muscleGroup::Biceps:
				this->Bic.push_back(excer);
				break;
			case muscleGroup::CalvesGastrocnemius:
				this->CalGas.push_back(excer);
				break;
			case muscleGroup::CalvesSoleus:
				this->CalSol.push_back(excer);
				break;
			case muscleGroup::ChestPectoralis:
				this->ChestPec.push_back(excer);
				break;
			case muscleGroup::LegsHamstrings:
				this->LegHam.push_back(excer);
				break;
			case muscleGroup::LegsQuadriceps:
				this->LegQuad.push_back(excer);
				break;
			case muscleGroup::LowerBackErectorSpinae:
				this->LowBack.push_back(excer);
				break;
			case muscleGroup::ShouldersDeltsTraps:
				this->ShouldDelt.push_back(excer);
				break;
			case muscleGroup::ShouldersRotatorCuff:
				this->ShouldRot.push_back(excer);
				break;
			case muscleGroup::Triceps:
				this->Tric.push_back(excer);
				break;
			}
		}
	}
	else
		cout << "Failed to open file - " << fileName << endl;
}

vector<excercise> excerciseList::getAbLow() {
	return this->AbLow;
}
vector<excercise> excerciseList::getAbObl() {
	return this->AbObl;
}
vector<excercise> excerciseList::getAbTot() {
	return this->AbTot;
}
vector<excercise> excerciseList::getAbUpp() {
	return this->AbUpp;
}
vector<excercise> excerciseList::getBackLatDor() {
	return this->BackLatDor;
}
vector<excercise> excerciseList::getBackLatRhom() {
	return this->BackLatRhom;
}
vector<excercise> excerciseList::getBic() {
	return this->Bic;
}
vector<excercise> excerciseList::getCalGas() {
	return this->CalGas;
}
vector<excercise> excerciseList::getCalSol() {
	return this->CalSol;
}
vector<excercise> excerciseList::getChestPec() {
	return this->ChestPec;
}
vector<excercise> excerciseList::getLegHam() {
	return this->LegHam;
}
vector<excercise> excerciseList::getLegQuad() {
	return this->LegQuad;
}
vector<excercise> excerciseList::getLowBack() {
	return this->LowBack;
}
vector<excercise> excerciseList::getShouldDelt() {
	return this->ShouldDelt;
}
vector<excercise> excerciseList::getShouldRot() {
	return this->ShouldRot;
}
vector<excercise> excerciseList::getTric() {
	return this->Tric;
}

void excerciseList::displayAll() {
	cout << endl << "Abdominal" << endl;
	for (int i = 0; i < this->AbLow.size(); i++)
		cout << "Excercise: " << this->AbLow[i].getName() << endl;
	for (int i = 0; i < this->AbObl.size(); i++)
		cout << "Excercise: " << this->AbObl[i].getName() << endl;
	for (int i = 0; i < this->AbTot.size(); i++)
		cout << "Excercise: " << this->AbTot[i].getName() << endl;
	for (int i = 0; i < this->AbUpp.size(); i++)
		cout << "Excercise: " << this->AbUpp[i].getName() << endl;
	
	cout << endl << "Back" << endl;
	for (int i = 0; i < this->BackLatDor.size(); i++)
		cout << "Excercise: " << this->BackLatDor[i].getName() << endl;
	for (int i = 0; i < this->BackLatRhom.size(); i++)
		cout << "Excercise: " << this->BackLatRhom[i].getName() << endl;
	for (int i = 0; i < this->LowBack.size(); i++)
		cout << "Excercise: " << this->LowBack[i].getName() << endl;
	
	cout << endl << "Biceps" << endl;
	for (int i = 0; i < this->Bic.size(); i++)
		cout << "Excercise: " << this->Bic[i].getName() << endl;
	
	cout << endl << "Calves" << endl;
	for (int i = 0; i < this->CalGas.size(); i++)
		cout << "Excercise: " << this->CalGas[i].getName() << endl;
	for (int i = 0; i < this->CalSol.size(); i++)
		cout << "Excercise: " << this->CalSol[i].getName() << endl;
	
	cout << endl << "Chest" << endl;
	for (int i = 0; i < this->ChestPec.size(); i++)
		cout << "Excercise: " << this->ChestPec[i].getName() << endl;
	
	cout << endl << "Legs" << endl;
	for (int i = 0; i < this->LegHam.size(); i++)
		cout << "Excercise: " << this->LegHam[i].getName() << endl;
	for (int i = 0; i < this->LegQuad.size(); i++)
		cout << "Excercise: " << this->LegQuad[i].getName() << endl;
	
	cout << endl << "Shoulders" << endl;
	for (int i = 0; i < this->ShouldDelt.size(); i++)
		cout << "Excercise: " << this->ShouldDelt[i].getName() << endl;
	for (int i = 0; i < this->ShouldRot.size(); i++)
		cout << "Excercise: " << this->ShouldRot[i].getName() << endl;
	
	cout << endl << "Triceps" << endl;
	for (int i = 0; i < this->Tric.size(); i++)
		cout << "Excercise: " << this->Tric[i].getName() << endl;
}