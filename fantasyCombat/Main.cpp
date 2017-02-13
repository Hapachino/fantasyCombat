/**********************************************************************************************
** Program name: Main.cpp (Fantasy Combat)
** Author: Erick Brownfield
** Date: 2/14/17
** Description: Main program - Displays menu with five character choices - user chooses two 
** to fight against each other. Winner is displayed. 
**********************************************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <ctime>

int main()
{
	Barbarian aBarbarian;
	Vampire aVampire;
	BlueMen aBlueMen;
	Medusa aMedusa;
	HarryPotter aHarryPotter;

	Creature *player1 = &aBlueMen;

	srand(time(NULL));

	cout << player1->defense(5);

    return 0;
}

