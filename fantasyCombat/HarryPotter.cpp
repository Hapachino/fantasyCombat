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
HarryPotter::HarryPotter() : Creature("Harry Potter", 0, 10) {
	lives = 2;
}

/**********************************************************************************************
** Function name: HarryPotter::HarryPotter()
** Description: Paramatezied constructor
**********************************************************************************************/
HarryPotter::HarryPotter(int armor, int strength, int lives) : Creature("Harry Potter", armor, strength) {
	this->lives = lives;
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

	int strengthLoss = attack - (diceTotal + armor);

	if (strengthLoss > 0) {
		strength -= strengthLoss;
	}

	// Hogwarts
	if (strength < 1 && lives > 1) {
		strength = 20;
		--lives;

		cout << "Harry Potter used Hogwarts! He has resurrected with 20 strength!\n\n";
	}

	if (strength < 0) {
		strength = 0;
	}

	return diceTotal;
}