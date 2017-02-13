/**********************************************************************************************
** Program name: Creature.cpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Source file for Creature class
**********************************************************************************************/

#include "Creature.hpp"

#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

class Vampire : public Creature {
public:
	Vampire();
	Vampire(int armor, int strength);
	~Vampire();
	int attack();
	int defense();
};

#endif