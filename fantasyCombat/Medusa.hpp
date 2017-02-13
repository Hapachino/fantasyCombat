/**********************************************************************************************
** Program name: Medusa.hpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Header file for Medusa class
**********************************************************************************************/

#ifndef MEDUSA_HPP
#define MEDUSA_HPP

#include "Creature.hpp"

class Medusa : public Creature {
public:
	Medusa();
	Medusa(int armor, int strength);
	~Medusa();
	int attack();
	int defense(int attack);
};

#endif