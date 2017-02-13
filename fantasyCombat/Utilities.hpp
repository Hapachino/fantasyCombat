/**********************************************************************************************
** Program name: Utilities.hpp
** Author: Erick Brownfield
* Date: 2/11/17
** Description: Header file for utility programs
**********************************************************************************************/

#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include <string>
using std::string;

#include <vector>
using std::vector;

int isInt();
double isDouble();
int validInt(int min, int max);
double validDouble(double min, double max);
string validLength(int min, int max);
int mainMenu(vector<string> menuIn);
bool yesOrNo();
int randomRange(int min, int max);
int multiRandomRange(int min, int max);
double isPrice();
double validPrice(double min, double max);
void addToArray(int *&arrayP, int size, int intIn);

#endif