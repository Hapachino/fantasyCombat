/**********************************************************************************************
** Program name: Utilities.cpp
** Author: Erick Brownfield
** Date: 2/11/17
** Description: Source file for utility programs
**********************************************************************************************/

#include "Utilities.hpp"

#include <ctime>

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::getline;

#include <string>
using std::string;
using std::to_string;

#include <sstream>
using std::stringstream;

#include <stack>
using std::stack;

/**********************************************************************************************
** Function name: isInt()
** Description: Ensures input is valid positive or negative int and then returns int
**********************************************************************************************/
int isInt()
{
	string input;

	bool validated = true;

	while (validated) {
		input = validLength(1, 9);

		// if first digit isn't number, +, or -
		if (!isdigit(input[0]) && input[0] != '+' && input[0] != '-') {
			validated = false;
		}

		// if first digit is sign, then must include other digits
		if (input[0] == '+' || input[0] == '-')	{
			if (input.size() < 2) {
				validated = false;
			}
		}

		for (unsigned i = 1; i < input.size(); i++) {
			if (!isdigit(input[i])) {
				validated = false;
			}
		}

		if (!validated) {	// if failed any test
			cout << "Must be an int: ";

			validated = true;	// restart loop
		}
		else {	// if passed all tests
			return stoi(input);
		}
	}
}

/**********************************************************************************************
** Function name: isDouble()
** Description: Ensures input is valid positive or negatvie double and then returns double
**********************************************************************************************/

double isDouble()
{
	string input;

	bool validated = true;

	while (validated) {
		input = validLength(1, 10);

		int pointCount = 0;	// counts number of decimal points

		// if first digit isn't number, +, -, or .
		if (!isdigit(input[0]) && input[0] != '+' && input[0] != '-' && input[0] != '.') {
			validated = false;
		}

		// if first digit is sign or decimal, then must include other digits
		if (input[0] == '+' || input[0] == '-' || input[0] == '.') {
			if (input.size() < 2) {
				validated = false;
			}
			else if (input[0] == '.') {
				++pointCount;
			}
		}

		for (unsigned i = 1; i < input.size(); i++) {
			// if not digit or decimal point
			if (!isdigit(input[i]) && input[i] != '.') {
				validated = false;
			}

			if (input[i] == '.') {
				++pointCount;
			}

			if (pointCount > 1) { // if more than one decimal point
				validated = false;
			}
		}

		if (!validated) {	// if failed any test
			cout << "Must be a double: ";

			validated = true;	// restart loop
		}

		return stod(input);
	}
}

/**********************************************************************************************
** Function name: validInt()
** Description: Ensures user input is integer within range
** min: Minimum value of accepted int
** max: Maximum value of accepted int
**********************************************************************************************/
int validInt(int min, int max) {
	int temp = isInt();

	while (temp < min || temp > max) {
		cout << "Must be between " << min << " and " << max << ": ";

		temp = isInt();
	}

	return temp;
}

/**********************************************************************************************
** Function name: validDouble()
** Description: Ensures user input is double within range
** min: Minimum value of accepted double
** max: Maximum value of accepted double
**********************************************************************************************/
double validDouble(double min, double max) {
	double temp = isDouble();

	while (temp < min || temp > max) {
		cout << "Must be between " << min << " and " << max << ": ";

		temp = isDouble();
	}

	return temp;
}

/**********************************************************************************************
** Function name: validLength()
** Description: Ensures user inputted string is within valid length
** min: Minimum length
** max: Maximum length
**********************************************************************************************/
string validLength(int min, int max) {
	string input;

	while (true) {
		getline(cin, input);

		if (input.size() >= unsigned(min) && input.size() <= unsigned(max)) {
			int blankCount = 0;

			for (unsigned i = 0; i < input.size(); ++i) {
				if (isspace(input[i])) {
					++blankCount;
				}
			}
			// if not a blank string
			if (unsigned(blankCount) != input.size()) {
				return input;
			}
		}

		cout << "Length must be between " << min << " and " << max << ": ";
	}
}

/**********************************************************************************************
** Function name: mainMenu()
** Description: Displays menu and returns valid option
** menuIn[0]: reserved for program name
** menuIn[1]: menu[n] is for menu options
**********************************************************************************************/
int mainMenu(vector<string> menuIn) {
	if (!menuIn[0].empty()) {	// if program name is available
		cout << menuIn[0] << "\n";
	}

	for (unsigned i = 1; i < menuIn.size(); i++) {	// display menu options
		cout << "\n  " << i << ". " << menuIn[i];
	}

	cout << "\n\nEnter Option " << 1 << " to " << menuIn.size() - 1 << ": ";

	return validInt(1, menuIn.size() - 1);	// asks for user option then returns valid option
}

/**********************************************************************************************
** Function name: yesOrNo()
** Description: Only accepts 'Y', 'y', 'N', 'n' as valid, and returns true (Y/y) or false (N/n)
**********************************************************************************************/
bool yesOrNo() {
	string decide;

	while (true) {
		getline(cin, decide);

		if (decide == "Y" || decide == "y") {
			return true;
		}
		else if (decide == "N" || decide == "n") {
			return false;
		}
		else {
			cout << "Please enter Y or N only: ";
		}
	}
}

/**********************************************************************************************
** Function name: randomRange(int min, int max)
** Description: Returns a random number within specified range
** min: Minimum random number
** max: Maximum random number
**********************************************************************************************/
int randomRange(int min, int max) {
	srand(unsigned(time(NULL)));

	return min + rand() % (max - min + 1);
}

/**********************************************************************************************
** Function name: multiRandomRange(int min, int max)
** Description: Returns a random number within specified range. Used when called multiple times
per second. srand() needs to be called elsewhere.
** min: Minimum random number
** max: Maximum random number
**********************************************************************************************/
int multiRandomRange(int min, int max) {
	return min + rand() % (max - min + 1);
}

/**********************************************************************************************
** Function name: isPrice()
** Description: Ensures input is valid positive or negatvie double representing price
** and then returns double
**********************************************************************************************/

double isPrice() {
	string input;

	bool validated = true;

	while (validated) {
		input = validLength(1, 10);

		int pointCount = 0;	// counts number of decimal points

		// if first digit isn't number, +, -, or .
		if (!isdigit(input[0]) && input[0] != '+' && input[0] != '-' && input[0] != '.') {
			validated = false;
		}

		// if first digit is sign or decimal, then must include other digits
		if (input[0] == '+' || input[0] == '-' || input[0] == '.') {
			if (input.size() < 2) {
				validated = false;
			}

			else if (input[0] == '.') {
				++pointCount;
			}
		}

		for (unsigned i = 1; i < input.size(); i++) {
			// if not digit or decimal point
			if (!isdigit(input[i]) && input[i] != '.') {
				validated = false;
			}

			if (input[i] == '.') {
				++pointCount;
			}

			if (pointCount > 1) { // if more than one decimal point
				validated = false;
			}
		}

		int places = 0;
		bool found = false;

		for (unsigned i = 0; i < input.size(); ++i) {
			if (found) {
				++places;
			}
			else if (input[i] == '.') {
				found = true;
			}
		}

		if (places > 2) {
			validated = false;
		}

		if (!validated) {	// if failed any test
			cout << "Must be in standard price format: ";

			validated = true;	// restart loop
		}
		else {
			return stod(input);
		}
	}
}

/**********************************************************************************************
** Function name: validPrice()
** Description: Ensures user inputted double is in pricing format and within range
** min: Minimum value of accepted double
** max: Maximum value of accepted double
**********************************************************************************************/
double validPrice(double min, double max) {
	double temp = isPrice();

	while (temp < min || temp > max) {
		cout << "Must be between " << min << " and " << max << ": ";

		temp = isPrice();
	}

	return temp;
}

/**********************************************************************************************
** Function name: addToArray()
** Description: Increases array size by one before adding int.
** *arrayP: array pointer
** size: size of array
** intIn: int to be added
**********************************************************************************************/
void addToArray(int *&arrayP, int size, int intIn) {

	stack<int> oldArray;

	// push elements in reverse order
	for (int i = size - 1; i >= 0; --i) {

		oldArray.push(arrayP[i]);
	}

	// delete old array and allocate new array
	delete[] arrayP;
	arrayP = new int[size + 1];

	// pop items in order into new array
	for (int i = 0; i < size; ++i) {
		arrayP[i] = oldArray.top();

		oldArray.pop();
	}

	arrayP[size] = intIn;
}