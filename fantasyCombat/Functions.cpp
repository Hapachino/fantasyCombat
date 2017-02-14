/**********************************************************************************************
** Program name: Functions.cpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Source file for Functions used in Main
**********************************************************************************************/

#include "Creature.hpp"

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;
using std::left;
using std::right;

/**********************************************************************************************
** Function name: finishHim()
** Description: Randomly chooses one character to attack first. 
** Displays armor, strength, attack and defense each round. Displays winner. 
**********************************************************************************************/
void finishHim(Creature *player1, Creature *player2) {
	int turn = multiRandomRange(1, 2),
		round = 1;

	// While both charaters are alive
	while (player1->getStrength() && player2->getStrength()) {

		cout << "Round " << round << ":\n\n";

		if (turn % 2 != 0) {
			// player 1 attacks, player 2 defends 
			defense(player2, attack(player1));
		}
		else {
			// player 1 defends, player 2 attack
			defense(player1, attack(player2));
		}

		++turn;
		++round;
	}

	// if player 1 is alive
	if (player1->getStrength()) {
		cout << player1->getCharacter() << " defeated " << player2->getCharacter();
	}
	else {
		cout << player2->getCharacter() << " defeated " << player1->getCharacter();
	}
}

/**********************************************************************************************
** Function name: attack(Creature)
** Description: Displays attacking creature's strength, armor, and attack. Returns attack. 
** Creature: creature that is attacking
**********************************************************************************************/
int attack(Creature *player) {

	cout << setw(11) << left
		<< "Character"
		<< right << setw(5) << ""
		<< "Strength"
		<< setw(5) << "" 
		<< "Armor"
		<< setw(5) << ""
		<< "Attack"
		<< "\n";

	int attack = player->attack();

	cout << setw(12) << left << player->getCharacter()
		<< setw(9) << right << player->getStrength()
		<< setw(11) << player->getArmor()
		<< setw(11) << attack
		<< endl << endl;
	
	return attack;
}

/**********************************************************************************************
** Function name: defense(Creature, attack)
** Description: Displays defending creature's strength, armor, and defense
** Creature: creature that is defending and attack value
**********************************************************************************************/
void defense(Creature *player, int attack) {
	
	int defense = player->defense(attack);

	cout << setw(11) << left
		<< "Character"
		<< right << setw(5) << ""
		<< "Strength"
		<< setw(5) << ""
		<< "Armor"
		<< setw(5) << ""
		<< "Defense"
		<< "\n";

	cout << setw(12) << left << player->getCharacter()
		<< setw(9) << right << player->getStrength()
		<< setw(11) << player->getArmor()
		<< setw(11) << defense
		<< endl << endl;
}