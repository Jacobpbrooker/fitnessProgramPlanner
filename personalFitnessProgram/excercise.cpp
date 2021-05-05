#include "excercise.h"



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


// helper functions
muscleGroup stringToMuscleGroup(string a) {
	switch (stoi(a))
	{
	case stoi("Abdominals - Lower") :
		break;
	case stoi("Abdominals - Obliques") :
			break;
	case sizeof("Abdominals - Total") :
			break;
	case sizeof("Abdominals - Upper"):
		break;
	case sizeof("Back - Latissimus Dorsi"):
		break;
	case sizeof("Back - Lat.Dorsi / Rhomboids"):
		break;
	case sizeof("Biceps"):
		break;
	case sizeof("Calves - Gastrocnemius"):
		break;
	case sizeof("Calves - Soleus"):
		break;
	case sizeof("Chest - Pectoralis"):
		break;
	case sizeof("Legs - Hamstrings"):
		break;
	case sizeof("Legs - Quadriceps"):
		break;
	case sizeof("Lower Back - Erector Spinae"):
		break;
	case sizeof("Shoulders - Delts / Traps"):
		break;
	case sizeof("Shoulders - Rotator Cuff"):
		break;
	case sizeof("Triceps"):
		break;
	}
}
intensity stringToIntensity(string a);
PP stringToPushPull(string a);
modality stringToModality(string a);
joint stringToJoing(string a);