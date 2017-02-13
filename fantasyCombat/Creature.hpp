/**********************************************************************************************
** Program name: Creature.cpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Source file for Creature class
**********************************************************************************************/

#ifndef CREATURE_HPP
#define CREATURE_HPP

class Creature {
protected:
	int armor;
	int strength;
public:
	Creature();
	Creature(int armor, int strength);
	virtual ~Creature() = 0;
	int getArmor();
	int getStrength();
	virtual int attack() = 0;
	virtual int defense(int attack) = 0;
};

#endif