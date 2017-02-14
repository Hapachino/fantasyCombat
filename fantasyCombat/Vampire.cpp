/**********************************************************************************************
** Program name: Vampire.cpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Source file for Vampire class
**********************************************************************************************/

#include "Vampire.hpp"
#include "Utilities.hpp"

/**********************************************************************************************
** Function name: Vampire::Vampire()
** Description: Default constructor
**********************************************************************************************/
Vampire::Vampire() : Creature("Vampire", 1, 18) {
}

/**********************************************************************************************
** Function name: Vampire::Vampire()
** Description: Paramatezied constructor
**********************************************************************************************/
Vampire::Vampire(int armor, int strength) : Creature("Vampire", armor, strength) {
	this->armor = armor;
	this->strength = strength;
}

/**********************************************************************************************
** Function name: Vampire::~Vampire()
** Description: Destructor
**********************************************************************************************/
Vampire::~Vampire() {
}

/**********************************************************************************************
** Function name: Vampire::attack()
** Description: return attack value based on number of dice
**********************************************************************************************/
int Vampire::attack() {
	int diceNumber = 1,
		diceValue = 12,
		diceTotal = 0;

	for (int i = 0; i < diceNumber; ++i) {
		diceTotal += multiRandomRange(1, diceValue);
	}

	return diceTotal;
}

/**********************************************************************************************
** Function name: Vampire::defense()
** Description: strength = inputted attack - dice roll total value - armor. Return defense.
** attack: attack value
**********************************************************************************************/
int Vampire::defense(int attack) {
	int diceNumber = 1,
		diceValue = 6,
		diceTotal = 0;

	for (int i = 0; i < diceNumber; ++i) {
		diceTotal += multiRandomRange(1, diceValue);
	}

	// Charm
	if (multiRandomRange(0, 1)) {
		attack = 0;

		cout << "Vampire used Charm! No damage was dealt!\n\n";
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