/**********************************************************************************************
** Program name: Functions.hpp
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Header file for Functions used in Main
**********************************************************************************************/

#include "Creature.hpp"

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

void finishHim(Creature *player1, Creature *player2);
int attack(Creature *player);
void defense(Creature *player, int attack);

#endif