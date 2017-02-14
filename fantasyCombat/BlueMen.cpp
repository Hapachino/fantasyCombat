/**********************************************************************************************
** Program name: BlueMen.cpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Source file for BlueMen class
**********************************************************************************************/

#include "Creature.hpp"
#include "Utilities.hpp"

/**********************************************************************************************
** Function name: BlueMen::BlueMen()
** Description: Default constructor
**********************************************************************************************/
BlueMen::BlueMen() : Creature("Blue Men", 3, 12) {
}

/**********************************************************************************************
** Function name: BlueMen::BlueMen()
** Description: Paramatezied constructor
**********************************************************************************************/
BlueMen::BlueMen(int armor, int strength) : Creature("Blue Men", armor, strength) {
	this->armor = armor;
	this->strength = strength;
}

/**********************************************************************************************
** Function name: BlueMen::~BlueMen()
** Description: Destructor
**********************************************************************************************/
BlueMen::~BlueMen() {
}

/**********************************************************************************************
** Function name: BlueMen::attack()
** Description: return attack value based on number of dice
**********************************************************************************************/
int BlueMen::attack() {
	int diceNumber = 2,
		diceValue = 10,
		diceTotal = 0;

	for (int i = 0; i < diceNumber; ++i) {
		diceTotal += multiRandomRange(1, diceValue);
	}

	return diceTotal;
}

/**********************************************************************************************
** Function name: BlueMen::defense()
** Description: strength = inputted attack - dice roll total value - armor. Return defense. 
** attack: attack value
**********************************************************************************************/
int BlueMen::defense(int attack) {
	int diceNumber,
		diceValue = 6,
		diceTotal = 0;

	// Mob
	if (strength > 8) {
		diceNumber = 3;
	}
	else if (strength < 5) {
		diceNumber = 1;
	}
	else {
		diceNumber = 2;
	}

	for (int i = 0; i < diceNumber; ++i) {
		diceTotal += multiRandomRange(1, diceValue);
	}

	int strengthLoss = attack - (diceTotal + armor);

	if (strengthLoss > 0) {
		strength -= strengthLoss;
	}

	if (strength < 0) {
		strength = 0;
	}

	return diceTotal;
}