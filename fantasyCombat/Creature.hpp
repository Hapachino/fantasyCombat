/**********************************************************************************************
** Program name: Creature.cpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Source file for Creature class
**********************************************************************************************/

#ifndef CREATURE_HPP
#define CREATURE_HPP

#include <string>
using std::string;

class Creature {
protected:
	string character;
	int armor;
	int strength;
public:
	Creature();
	Creature(string name, int armor, int strength);
	virtual ~Creature() = 0;
	int getArmor();
	int getStrength();
	virtual int attack() = 0;
	virtual int defense(int attack) = 0;
	string getCharacter();
};

#endif