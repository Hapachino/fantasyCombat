/**********************************************************************************************
** Program name: Creature.cpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Source file for Creature class
**********************************************************************************************/

#include "Creature.hpp"

/**********************************************************************************************
** Function name: Creature::Creature()
** Description: Default constructor
**********************************************************************************************/
Creature::Creature() {
	armor = 0;
	strength = 1;
}

/**********************************************************************************************
** Function name: Creature::Creature()
** Description: Paramatezied constructor
**********************************************************************************************/
Creature::Creature(int armor, int strength) {
	this->armor = armor;
	this->strength = strength;
}

/**********************************************************************************************
** Function name: Creature::~Creature()
** Description: Paramatezied constructor
**********************************************************************************************/
Creature::~Creature() {
}

/**********************************************************************************************
** Function name: Creature::getArmor()
** Description: returns armor
**********************************************************************************************/
int Creature::getArmor() {
	return armor;
}

/**********************************************************************************************
** Function name: Creature::getStrength()
** Description: returns strength
**********************************************************************************************/
int Creature::getStrength() {
	return strength;
}