/**********************************************************************************************
** Program name: Creature.cpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Source file for Creature class
**********************************************************************************************/

#include "Creature.hpp"

#include <string>
using std::string;

/**********************************************************************************************
** Function name: Creature::Creature()
** Description: Default constructor
**********************************************************************************************/
Creature::Creature() {
	character = "Creature";
	armor = 0;
	strength = 1;
}

/**********************************************************************************************
** Function name: Creature::Creature()
** Description: Paramatezied constructor
**********************************************************************************************/
Creature::Creature(string character, int armor, int strength) {
	this->character = character;
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

/**********************************************************************************************
** Function name: Creature::getName()
** Description: return character type
**********************************************************************************************/
string Creature::getCharacter() {
	return character;
}