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
	
	string alow = "Abdominals - Lower";
	string aobl = "Abdominals - Obliques";
	string atot = "Abdominals - Total";
	string aupp = "Abdominals - Upper";
	string blat = "Back - Latissimus Dorsi";
	string brho = "Back - Lat.Dorsi / Rhomboids";
	string bice = "Biceps";
	string cgas = "Calves - Gastrocnemius";
	string csol = "Calves - Soleus";
	string chpe = "Chest - Pectoralis";
	string lham = "Legs - Hamstrings";
	string lqua = "Legs - Quadriceps";
	string lber = "Lower Back - Erector Spinae";
	string sdel = "Shoulders - Delts / Traps";
	string srot = "Shoulders - Rotator Cuff";
	string tric = "Triceps";


	if (a.compare(alow))
		return muscleGroup::AbdominalsLower;
	else if (a.compare(aobl))
		return muscleGroup::AbdominalsObliques;
	else if (a.compare(atot))
		return muscleGroup::AbdominalsTotal;
	else if (a.compare(aupp))
		return muscleGroup::AbdominalsUpper;
	else if (a.compare(blat))
		return muscleGroup::BackLatissimusDorsi;
	else if (a.compare(brho))
		return muscleGroup::BackLatDorsiRhomboids;
	else if (a.compare(bice))
		return muscleGroup::Biceps;
	else if (a.compare(cgas))
		return muscleGroup::CalvesGastrocnemius;
	else if (a.compare(csol))
		return muscleGroup::CalvesSoleus;
	else if (a.compare(chpe))
		return muscleGroup::ChestPectoralis;
	else if (a.compare(lham))
		return muscleGroup::LegsHamstrings;
	else if (a.compare(lqua))
		return muscleGroup::LegsQuadriceps;
	else if (a.compare(lber))
		return muscleGroup::LowerBackErectorSpinae;
	else if (a.compare(sdel))
		return muscleGroup::ShouldersDeltsTraps;
	else if (a.compare(srot))
		return muscleGroup::ShouldersRotatorCuff;
	else if (a.compare(tric))
		return muscleGroup::Triceps;
	else
		return muscleGroup::NONE;
}

intensity stringToIntensity(string a) {
	if (a.compare("Beginner"))
		return intensity::EASY;
	else if (a.compare("Intermediate"))
		return intensity::MEDIUM;
	else if (a.compare("Advanced"))
		return intensity::HARD;
	else
		return intensity::NONE;
}

PP stringToPushPull(string a) {
	if (a.compare("Push"))
		return PP::PUSH;
	else if (a.compare("Pull"))
		return PP::PULL;
	else
		return PP::NONE;
}

modality stringToModality(string a) {
	if (a.compare("FW"))
		return modality::FREEWEIGHT;
	else if (a.compare("M"))
		return modality::MACHINE;
	else if (a.compare("C"))
		return modality::CABLES;
	else if (a.compare("BW"))
		return modality::BODYWEIGHT;
	else
		return modality::NONE;
}

joint stringToJoint(string a) {
	if (a.compare("M"))
		return joint::COMPOUND;
	else if (a.compare("S"))
		return joint::ISOLATION;
	else
		return joint::NONE;
}

