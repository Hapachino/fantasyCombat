/**********************************************************************************************
** Program name: Creature.cpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Source file for Creature class
**********************************************************************************************/

#include "Creature.hpp"

#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

class Barbarian : public Creature {
public:
	Barbarian();
	Barbarian(int armor, int strength);
	~Barbarian();
	int attack();
	int defense();
};

#endif