/**********************************************************************************************
** Program name: HarryPotter.hpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Header file for HarryPotter class
**********************************************************************************************/

#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

#include "Creature.hpp"

class HarryPotter : public Creature {
private:
	int lives;
public:
	HarryPotter();
	HarryPotter(int armor, int strength, int extraLife);
	~HarryPotter();
	int attack();
	int defense(int attack);
};

#endif