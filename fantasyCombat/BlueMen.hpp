/**********************************************************************************************
** Program name: BlueMen.hpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Header file for BlueMen class
**********************************************************************************************/

#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

#include "Creature.hpp"

class BlueMen : public Creature {
public:
	BlueMen();
	BlueMen(int armor, int strength);
	~BlueMen();
	int attack();
	int defense(int attack);
};

#endif