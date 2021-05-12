#pragma once

#include <string>

enum class muscleGroup {NONE, AbdominalsLower, AbdominalsObliques, AbdominalsTotal, AbdominalsUpper, BackLatissimusDorsi, BackLatDorsiRhomboids, Biceps, CalvesGastrocnemius, CalvesSoleus, ChestPectoralis, LegsHamstrings, LegsQuadriceps, LowerBackErectorSpinae, ShouldersDeltsTraps, ShouldersRotatorCuff, Triceps};
enum class intensity {NONE, EASY, MEDIUM, HARD };
enum class PP { NONE, PUSH, PULL};
enum class modality { NONE, FREEWEIGHT, MACHINE, CABLES, BODYWEIGHT};
enum class joint { NONE, COMPOUND, ISOLATION};

using namespace std;



class excercise {		
	muscleGroup muscles;
	string name;
	string description;
	intensity level;
	PP movement;
	modality moda;
	joint wholistic;
	int excNum;
public:
	excercise() : muscles(muscleGroup::NONE), name("N/A"), description("N/A"), level(intensity::NONE), movement(PP::NONE), moda(modality::NONE), wholistic(joint::NONE), excNum(0) {};
	excercise(muscleGroup b, string c, string d, intensity e, PP f, modality g, joint h, int num) : muscles(b), name(c), description(d), level(e), movement(f), moda(g), wholistic(h), excNum(++num) {};
	void setValues(muscleGroup muscleGroup, string name, string desciption, intensity level, PP movement, modality moda, joint wholistic);
	muscleGroup getMuscles();
	string getName();
	string getDescription();
};

// helper functions
muscleGroup stringToMuscleGroup(string);
intensity stringToIntensity(string);
PP stringToPushPull(string);
modality stringToModality(string);
joint stringToJoint(string);
