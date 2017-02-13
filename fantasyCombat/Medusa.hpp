/**********************************************************************************************
** Program name: Creature.cpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Source file for Creature class
**********************************************************************************************/

#include "Creature.hpp"

#ifndef MEDUSA_HPP
#define MEDUSA_HPP

class Medusa : public Creature {
public:
	Medusa();
	Medusa(int armor, int strength);
	~Medusa();
	int attack();
	int defense();
};

#endif