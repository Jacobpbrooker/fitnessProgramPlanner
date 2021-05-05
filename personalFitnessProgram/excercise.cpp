#include "excercise.h"



void excercise::setValues(int id, muscleGroup muscleGroup, string name, string desciption, intensity level, PP movement, modality moda, joint wholistic)
{
	this->id = id;
	this->muscles = muscleGroup;
	this->name = name;
	this->description = desciption;
	this->level = level;
	this->movement = movement;
	this->moda = moda;
	this->wholistic = wholistic;
}

void excercise::createID(excercise& obj)
{
	// create id
	// 	   this can probably be run everytime because it literally does not matter
	// 16 muscle groups
	// 3 intensity levels
	// 2 push or pull movement
	// 4 equipment levels
	// 2 joints iso or comp
	// (muscle)(level)(pp)(equipment)(joint)(excercise) XX-X-X-X-X-XXX
	
	int muscle = (int)obj.muscles;
	int intensity = (int)obj.level;
	int pp = (int)obj.movement;
	int equipment = (int)obj.moda;
	int wholistic = (int)obj.wholistic;

	string muscleString = to_string(muscle);
	string intensityString = to_string(intensity);
	string ppString = to_string(pp);
	string equipmentString = to_string(equipment);
	string wholisticString = to_string(wholistic);
	string excString = to_string(obj.excNum);

	string idNumber = wholisticString + equipmentString + ppString + intensityString + muscleString + excString;

	obj.id = stoi(idNumber);
}