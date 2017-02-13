/**********************************************************************************************
** Program name: Barbarian.cpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Source file for Barbarian class
**********************************************************************************************/

#include "Creature.hpp"
#include "Utilities.hpp"

/**********************************************************************************************
** Function name: Barbarian::Barbarian()
** Description: Default constructor
**********************************************************************************************/
Barbarian::Barbarian() {
	armor = 0;
	strength = 12;
}

/**********************************************************************************************
** Function name: Barbarian::Barbarian()
** Description: Paramatezied constructor
**********************************************************************************************/
Barbarian::Barbarian(int armor, int strength) : Creature(armor, strength) {
	this->armor = armor;
	this->strength = strength;
}


/**********************************************************************************************
** Function name: Barbarian::~Barbarian()
** Description: Destructor
**********************************************************************************************/
Barbarian::~Barbarian() {
}


/**********************************************************************************************
** Function name: Barbarian::attack()
** Description: return attack value based on number of dice
**********************************************************************************************/
int Barbarian::attack() {
	int diceNumber = 2,
		diceValue = 6,
		diceTotal = 0;

	for (int i = 0; i < diceNumber; ++i) {
		diceTotal += multiRandomRange(1, diceValue);
	}

	return diceTotal;
}

/**********************************************************************************************
** Function name: Barbarian::defense()
** Description: strength = inputted attack - dice roll total value - armor. Return defense.
** attack: attack value
**********************************************************************************************/
int Barbarian::defense(int attack) {
	int diceNumber = 2,
		diceValue = 6,
		diceTotal = 0;

	for (int i = 0; i < diceNumber; ++i) {
		diceTotal += multiRandomRange(1, diceValue);
	}

	strength -= attack - (diceTotal + armor);

	return diceTotal;
}