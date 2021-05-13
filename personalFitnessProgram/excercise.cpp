#include "excercise.h"

#define TEST "Abdominals - Lower"

void excercise::setValues(muscleGroup muscleGroup, string name, string desciption, intensity level, PP movement, modality moda, joint wholistic)
{
	this->muscles = muscleGroup;
	this->name = name;
	this->description = desciption;
	this->level = level;
	this->movement = movement;
	this->moda = moda;
	this->wholistic = wholistic;
}

muscleGroup excercise::getMuscles()
{
	return this->muscles;
}

string excercise::getName() {
	return this->name;
}
string excercise::getDescription() {
	return this->description;
}

// helper functions
muscleGroup stringToMuscleGroup(string a) {
	//I hate this so much, maybe use a hash table or something to index the values for lookup
	// this is broken below

	if (a.compare("Abdominals - Lower")==0)
		return muscleGroup::AbdominalsLower;
	else if (a.compare("Abdominals - Obliques")==0)
		return muscleGroup::AbdominalsObliques;
	else if (a.compare("Abdominals - Total") == 0)
		return muscleGroup::AbdominalsTotal;
	else if (a.compare("Abdominals - Upper") == 0)
		return muscleGroup::AbdominalsUpper;
	else if (a.compare("Back - Latissimus Dorsi") == 0)
		return muscleGroup::BackLatissimusDorsi;
	else if (a.compare("Back - Lat.Dorsi/Rhomboids") == 0)
		return muscleGroup::BackLatDorsiRhomboids;
	else if (a.compare("Biceps") == 0)
		return muscleGroup::Biceps;
	else if (a.compare("Calves - Gastrocnemius") == 0)
		return muscleGroup::CalvesGastrocnemius;
	else if (a.compare("Calves - Soleus") == 0)
		return muscleGroup::CalvesSoleus;
	else if (a.compare("Chest - Pectoralis") == 0)
		return muscleGroup::ChestPectoralis;
	else if (a.compare("Legs - Hamstrings") == 0)
		return muscleGroup::LegsHamstrings;
	else if (a.compare("Legs - Quadriceps") == 0)
		return muscleGroup::LegsQuadriceps;
	else if (a.compare("Lower Back - Erector Spinae") == 0)
		return muscleGroup::LowerBackErectorSpinae;
	else if (a.compare("Shoulders - Delts/Traps") == 0)
		return muscleGroup::ShouldersDeltsTraps;
	else if (a.compare("Shoulders - Rotator Cuff") == 0)
		return muscleGroup::ShouldersRotatorCuff;
	else if (a.compare("Triceps") == 0)
		return muscleGroup::Triceps;
	else
		return muscleGroup::NONE;
}

intensity stringToIntensity(string a) {
	if (a.compare("Beginner") == 0)
		return intensity::EASY;
	else if (a.compare("Intermediate") == 0)
		return intensity::MEDIUM;
	else if (a.compare("Advanced") == 0)
		return intensity::HARD;
	else
		return intensity::NONE;
}

PP stringToPushPull(string a) {
	if (a.compare("Push") == 0)
		return PP::PUSH;
	else if (a.compare("Pull") == 0)
		return PP::PULL;
	else
		return PP::NONE;
}

modality stringToModality(string a) {
	if (a.compare("FW") == 0)
		return modality::FREEWEIGHT;
	else if (a.compare("M") == 0)
		return modality::MACHINE;
	else if (a.compare("C") == 0)
		return modality::CABLES;
	else if (a.compare("BW") == 0)
		return modality::BODYWEIGHT;
	else
		return modality::NONE;
}

joint stringToJoint(string a) {
	if (a.compare("M") == 0)
		return joint::COMPOUND;
	else if (a.compare("S") == 0)
		return joint::ISOLATION;
	else
		return joint::NONE;
}

