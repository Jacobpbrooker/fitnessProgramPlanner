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

int excercise::createID(excercise& obj)
{
	// create id
	// 	   this can probably be run everytime because it literally does not matter
	// 16 muscle groups
	// 3 intensity levels
	// 2 push or pull movement
	// 4 equipment levels
	// 2 joints iso or comp
	// (muscle)(level)(pp)(equipment)(joint)(excercise) XX-X-X-X-X-XXX
	return 1;
}