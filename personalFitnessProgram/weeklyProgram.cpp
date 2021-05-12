#include <vector>
#include <iostream>

#include "weeklyProgram.h"

void muscleGroupMenu() {
	cout << "Options" << endl;
	cout << "0. Exit to program creation" << endl;
	cout << "1. AbdominalsLower" << endl;
	cout << "2. AbdominalsObliques" << endl;
	cout << "3. AbdominalsTotal" << endl;
	cout << "4. AbdominalsUpper" << endl;
	cout << "5. BackLatissimusDorsi" << endl;
	cout << "6. BackLatDorsiRhomboids" << endl;
	cout << "7. Biceps" << endl;
	cout << "8. CalvesGastrocnemius" << endl;
	cout << "9. CalvesSoleus" << endl;
	cout << "10. ChestPectoralis" << endl;
	cout << "11. LegsHamstrings" << endl;
	cout << "12. LegsQuadriceps" << endl;
	cout << "13. LowerBackErectorSpinae" << endl;
	cout << "14. ShouldersDeltsTraps" << endl;
	cout << "15. ShouldersRotatorCuff" << endl;
	cout << "16. Triceps" << endl;
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
		cout << "How many excercises would you like to add?: ";
		cin >> quantity;

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
	weeklyProgram program;

	for (auto i : user_parameters) {

	}



}