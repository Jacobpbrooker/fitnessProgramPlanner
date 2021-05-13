#include <vector>
#include <iostream>
#include <ctime>

#include "weeklyProgram.h"

void muscleGroupMenu() {
	cout << endl << "Options" << endl;
	cout << "0. Exit to program creation" << "	|" << "9. CalvesSoleus" << endl;
	cout << "1. AbdominalsLower" << "		|" << "10. ChestPectoralis" << endl;
	cout << "2. AbdominalsObliques" << "		|" << "11. LegsHamstrings" << endl;
	cout << "3. AbdominalsTotal" << "		|" << "12. LegsQuadriceps" << endl;
	cout << "4. AbdominalsUpper" << "		|" << "13. LowerBackErectorSpinae" << endl;
	cout << "5. BackLatissimusDorsi" << "		|" << "14. ShouldersDeltsTraps" << endl;
	cout << "6. BackLatDorsiRhomboids" << "	|" << "15. ShouldersRotatorCuff" << endl;
	cout << "7. Biceps" << "			|" << "16. Triceps" << endl;
	cout << "8. CalvesGastrocnemius" << endl;
}

vector<muscleGroup> returnMuscleSelection() {
	vector <muscleGroup> muscleSelection;
	bool cont = true;
	int selection;
	int quantity;
	
	while (cont) {
		cout << "Please enter muscle group selection" << endl;
		muscleGroupMenu();
		cout << "Muscle Selection: ";
		cin >> selection;
		if (selection > 0) {
			cout << "How many excercises would you like to add?: ";
			cin >> quantity;
		}

		switch (selection)
		{
		default:
			cout << "Please enter specified selection" << endl;
			break;
		case 0:
			cout << "Adding Selections and Creating Program..." << endl;
			cont = false;
			break;
		case 1:
			cout << "Adding Abd Low to selection" << endl;
			for (int i = 0; i < quantity; i++)
				muscleSelection.push_back(muscleGroup::AbdominalsLower);
			break;
		case 2:
			cout << "Adding Abd Obliques to selection" << endl;
			for (int i = 0; i < quantity; i++)
				muscleSelection.push_back(muscleGroup::AbdominalsObliques);
			break;
		case 3:
			cout << "Adding Abd Total to selection" << endl;
			for (int i = 0; i < quantity; i++)
				muscleSelection.push_back(muscleGroup::AbdominalsTotal);
			break;
		case 4:
			cout << "Adding Abd Upp to selection" << endl;
			for (int i = 0; i < quantity; i++)
				muscleSelection.push_back(muscleGroup::AbdominalsUpper);
			break;
		case 5:
			cout << "Adding Back Lat Dorsi to selection" << endl;
			for (int i = 0; i < quantity; i++)
				muscleSelection.push_back(muscleGroup::BackLatissimusDorsi);
			break;
		case 6:
			cout << "Adding Back Lat Dorsi Rhomboids to selection" << endl;
			for (int i = 0; i < quantity; i++)
				muscleSelection.push_back(muscleGroup::BackLatDorsiRhomboids);
			break;
		case 7:
			cout << "Adding Biceps to selection" << endl;
			for (int i = 0; i < quantity; i++)
				muscleSelection.push_back(muscleGroup::Biceps);
			break;
		case 8:
			cout << "Adding Calves Gast to selection" << endl;
			for (int i = 0; i < quantity; i++)
				muscleSelection.push_back(muscleGroup::CalvesGastrocnemius);
			break;
		case 9:
			cout << "Adding Calves Soleus to selection" << endl;
			for (int i = 0; i < quantity; i++)
				muscleSelection.push_back(muscleGroup::CalvesSoleus);
			break;
		case 10:
			cout << "Adding Chest Pectoralis to selection" << endl;
			for (int i = 0; i < quantity; i++)
				muscleSelection.push_back(muscleGroup::ChestPectoralis);
			break;
		case 11:
			cout << "Adding Legs Hamstrings to selection" << endl;
			for (int i = 0; i < quantity; i++)
				muscleSelection.push_back(muscleGroup::LegsHamstrings);
			break;
		case 12:
			cout << "Adding Legs Quads to selection" << endl;
			for (int i = 0; i < quantity; i++)
				muscleSelection.push_back(muscleGroup::LegsQuadriceps);
			break;
		case 13:
			cout << "Adding Lower Back Erec Spinae to selection" << endl;
			for (int i = 0; i < quantity; i++)
				muscleSelection.push_back(muscleGroup::LowerBackErectorSpinae);
			break;
		case 14:
			cout << "Adding Shoulders Delts Traps to selection" << endl;
			for (int i = 0; i < quantity; i++)
				muscleSelection.push_back(muscleGroup::ShouldersDeltsTraps);
			break;
		case 15:
			cout << "Adding Shoulders Rotator Cuff to selection" << endl;
			for (int i = 0; i < quantity; i++)
				muscleSelection.push_back(muscleGroup::ShouldersRotatorCuff);
			break;
		case 16:
			cout << "Adding Triceps to selection" << endl;
			for (int i = 0; i < quantity; i++)
				muscleSelection.push_back(muscleGroup::Triceps);
			break;
		}
	}
	return muscleSelection;
}

void weeklyProgram::makeProgram(excerciseList all_excercises, vector<muscleGroup> user_parameters) {
	// all excercises in all_excercises and quantities of the excercise are in the user_parameters vector list
	// I need to randomly generate one excercise per user_parameters element

	srand(time(0));
	int x = 0;

	for (int i = 0; i < user_parameters.size(); i++) {
		switch (user_parameters[i])
		{
		case muscleGroup::AbdominalsLower:
			x = rand() % all_excercises.getAbLow().size();
			this->weeklyExercises.push_back(all_excercises.getAbLow()[x]);
			break;
		case muscleGroup::AbdominalsObliques:
			x = rand() % all_excercises.getAbObl().size();
			this->weeklyExercises.push_back(all_excercises.getAbObl()[x]);
			break;
		case muscleGroup::AbdominalsTotal:
			x = rand() % all_excercises.getAbTot().size();
			this->weeklyExercises.push_back(all_excercises.getAbTot()[x]);
			break;
		case muscleGroup::AbdominalsUpper:
			x = rand() % all_excercises.getAbUpp().size();
			this->weeklyExercises.push_back(all_excercises.getAbUpp()[x]);
			break;
		case muscleGroup::BackLatissimusDorsi:
			x = rand() % all_excercises.getBackLatDor().size();
			this->weeklyExercises.push_back(all_excercises.getBackLatDor()[x]);
			break;
		case muscleGroup::BackLatDorsiRhomboids:
			x = rand() % all_excercises.getBackLatRhom().size();
			this->weeklyExercises.push_back(all_excercises.getBackLatRhom()[x]);
			break;
		case muscleGroup::Biceps:
			x = rand() % all_excercises.getBic().size();
			this->weeklyExercises.push_back(all_excercises.getBic()[x]);
			break;
		case muscleGroup::CalvesGastrocnemius:
			x = rand() % all_excercises.getCalGas().size();
			this->weeklyExercises.push_back(all_excercises.getCalGas()[x]);
			break;
		case muscleGroup::CalvesSoleus:
			x = rand() % all_excercises.getCalSol().size();
			this->weeklyExercises.push_back(all_excercises.getCalSol()[x]);
			break;
		case muscleGroup::ChestPectoralis:
			x = rand() % all_excercises.getChestPec().size();
			this->weeklyExercises.push_back(all_excercises.getChestPec()[x]);
			break;
		case muscleGroup::LegsHamstrings:
			x = rand() % all_excercises.getLegHam().size();
			this->weeklyExercises.push_back(all_excercises.getLegHam()[x]);
			break;
		case muscleGroup::LegsQuadriceps:
			x = rand() % all_excercises.getLegQuad().size();
			this->weeklyExercises.push_back(all_excercises.getLegQuad()[x]);
			break;
		case muscleGroup::LowerBackErectorSpinae:
			x = rand() % all_excercises.getLowBack().size();
			this->weeklyExercises.push_back(all_excercises.getLowBack()[x]);
			break;
		case muscleGroup::ShouldersDeltsTraps:
			x = rand() % all_excercises.getShouldDelt().size();
			this->weeklyExercises.push_back(all_excercises.getShouldDelt()[x]);
			break;
		case muscleGroup::ShouldersRotatorCuff:
			x = rand() % all_excercises.getShouldRot().size();
			this->weeklyExercises.push_back(all_excercises.getShouldRot()[x]);
			break;
		case muscleGroup::Triceps:
			x = rand() % all_excercises.getTric().size();
			this->weeklyExercises.push_back(all_excercises.getTric()[x]);
			break;
		}
	}
}

void weeklyProgram::displayProgram() {
	for (int i = 0; i < weeklyExercises.size(); i++) {
		cout << "Excercise: " << weeklyExercises[i].getName() <<  endl;
		cout << "Description - " << weeklyExercises[i].getDescription() << endl;
	}
}