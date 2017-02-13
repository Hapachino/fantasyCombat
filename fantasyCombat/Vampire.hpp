/**********************************************************************************************
** Program name: Vampire.hpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Header file for Vampire class
**********************************************************************************************/

#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "Creature.hpp"

class Vampire : public Creature {
public:
	Vampire();
	Vampire(int armor, int strength);
	~Vampire();
	int attack();
	int defense(int attack);
};

#endif