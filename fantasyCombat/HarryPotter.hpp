/**********************************************************************************************
** Program name: Creature.cpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Source file for Creature class
**********************************************************************************************/

#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

class HarryPotter : public Creature {
public:
	HarryPotter();
	HarryPotter(int armor, int strength);
	~HarryPotter();
	int attack();
	int defense();
};

#endif