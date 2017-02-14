/**********************************************************************************************
** Program name: Medusa.cpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Source file for Medusa class
**********************************************************************************************/

#include "Medusa.hpp"
#include "Utilities.hpp"

/**********************************************************************************************
** Function name: Medusa::Medusa()
** Description: Default constructor
**********************************************************************************************/
Medusa::Medusa() : Creature("Medusa", 3, 8) {
}

/**********************************************************************************************
** Function name: Medusa::Medusa()
** Description: Paramatezied constructor
**********************************************************************************************/
Medusa::Medusa(int armor, int strength) : Creature("Medusa", armor, strength) {
}

/**********************************************************************************************
** Function name: Medusa::~Medusa()
** Description: Destructor
**********************************************************************************************/
Medusa::~Medusa() {
}

/**********************************************************************************************
** Function name: Medusa::attack()
** Description: return attack value based on number of dice
**********************************************************************************************/
int Medusa::attack() {
	int diceNumber = 2,
		diceValue = 6,
		diceTotal = 0;

	for (int i = 0; i < diceNumber; ++i) {
		diceTotal += multiRandomRange(1, diceValue);
	}

	// Glare
	if (diceTotal == 12) {
		return 99;

		cout << "Medusa used Glare! Her foe has been petrified!\n\n";
	}

	return diceTotal;
}

/**********************************************************************************************
** Function name: Medusa::defense()
** Description: strength = inputted attack - dice roll total value - armor. Return defense.
** attack: attack value
**********************************************************************************************/
int Medusa::defense(int attack) {
	int diceNumber = 1,
		diceValue = 6,
		diceTotal = 0;

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