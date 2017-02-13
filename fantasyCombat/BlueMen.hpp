/**********************************************************************************************
** Program name: Creature.cpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Source file for Creature class
**********************************************************************************************/

#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

class BlueMen : public Creature {
public:
	BlueMen();
	BlueMen(int armor, int strength);
	~BlueMen();
	int attack();
	int defense();
};

#endif