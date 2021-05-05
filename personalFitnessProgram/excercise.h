#pragma once

#include <string>

enum class muscleGroup {NONE, AbdominalsLower, AbdominalsObliques, AbdominalsTotal, AbdominalsUpper, BackLatissimusDorsi, BackLatDorsiRhomboids, Biceps, CalvesGastrocnemius, CalvesSoleus, ChestPectoralis, LegsHamstrings, LegsQuadriceps, LowerBackErectorSpinae, ShouldersDeltsTraps, ShouldersRotatorCuff, Triceps};
enum class intensity {NONE, EASY, MEDIUM, HARD };
enum class PP { NONE, PUSH, PULL};
enum class modality { NONE, FREEWEIGHT, MACHINE, CABLES, BODYWEIGHT};
enum class joint { NONE, COMPOUND, ISOLATION};

using namespace std;

extern int excerciseCounter;

class excercise {
	int id;				
	muscleGroup muscles;
	string name;
	string description;
	intensity level;
	PP movement;
	modality moda;
	joint wholistic;
	int excNum;
public:
	excercise() : id(0), muscles(muscleGroup::NONE), name("N/A"), description("N/A"), level(intensity::NONE), movement(PP::NONE), moda(modality::NONE), wholistic(joint::NONE), excNum(0) {};
	excercise(muscleGroup b, string c, string d, intensity e, PP f, modality g, joint h) : id(0), muscles(b), name(c), description(d), level(e), movement(f), moda(g), wholistic(h), excNum(++excerciseCounter) {};
	void setValues(int id, muscleGroup muscleGroup, string name, string desciption, intensity level, PP movement, modality moda, joint wholistic);
	void createID(excercise& obj);
};

