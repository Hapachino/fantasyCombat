/**********************************************************************************************
** Program name: HarryPotter.cpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Source file for HarryPotter class
**********************************************************************************************/

#include "HarryPotter.hpp"

/**********************************************************************************************
** Function name: HarryPotter::HarryPotter()
** Description: Default constructor
**********************************************************************************************/
HarryPotter::HarryPotter() {
	armor = 0;
	strength = 10;
	lives = 2;
}

/**********************************************************************************************
** Function name: HarryPotter::HarryPotter()
** Description: Paramatezied constructor
**********************************************************************************************/
HarryPotter::HarryPotter(int armor, int strength, int extraLife) : Creature(armor, strength) {
	this->armor = armor;
	this->strength = strength;
	this->lives = extraLife;
}


/**********************************************************************************************
** Function name: HarryPotter::~HarryPotter()
** Description: Destructor
**********************************************************************************************/
HarryPotter::~HarryPotter() {
}


/**********************************************************************************************
** Function name: HarryPotter::attack()
** Description: return attack value based on number of dice
**********************************************************************************************/
int HarryPotter::attack() {
	int diceNumber = 2,
		diceValue = 6,
		diceTotal = 0;

	for (int i = 0; i < diceNumber; ++i) {
		diceTotal += multiRandomRange(1, diceValue);
	}

	return diceTotal;
}

/**********************************************************************************************
** Function name: HarryPotter::defense()
** Description: strength = inputted attack - dice roll total value - armor. Return defense.
** attack: attack value
**********************************************************************************************/
int HarryPotter::defense(int attack) {
	int diceNumber = 2,
		diceValue = 6,
		diceTotal = 0;

	for (int i = 0; i < diceNumber; ++i) {
		diceTotal += multiRandomRange(1, diceValue);
	}

	strength -= attack - (diceTotal + armor);

	// Hogwarts
	if (strength < 1 && lives > 0) {
		strength = 20;
	}

	return diceTotal;
}