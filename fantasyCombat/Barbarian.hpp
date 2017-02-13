/**********************************************************************************************
** Program name: Barbarian.hpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Header file for Barbarian class
**********************************************************************************************/

#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

#include "Creature.hpp"

class Barbarian : public Creature {
public:
	Barbarian();
	Barbarian(int armor, int strength);
	~Barbarian();
	int attack();
	int defense(int attack);
};

#endif