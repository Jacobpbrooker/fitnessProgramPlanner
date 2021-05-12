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
