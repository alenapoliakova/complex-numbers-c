#pragma once
#include <iostream>
#include "ComplexNumber.h"
using namespace std;


int main(void) {
	const int SUM = 1;
	const int SUBTRACTION = 2;
	const int MULTIPLY = 3;
	const int EXIT = 4;

	while (true) {
		cout << "\n-----\n" << "Menu:\n" << "-----\n";
		cout << "1. Sum 2 complex numbers\n2. Subtract 2 complex numbers\n3. Multiply 2 complex numbers\n4. Exit\n";
		cout << "Select your choice: ";
		int choice;
		ComplexNumber number1, number2;
		if (cin >> choice) {
			switch (choice) {
			case SUM:
				cin >> number1 >> number2;
				cout << number1 + number2;
				break;
			case SUBTRACTION:
				cin >> number1 >> number2;
				cout << number1 - number2;
				break;
			case MULTIPLY:
				cin >> number1 >> number2;
				cout << number1 * number2;
				break;
			case EXIT:
				return 0;
			default:
				cout << "\nPlease enter a choice from Menu\n";
				break;
			}
		}
		else {
			cout << "\nPlease enter a valid number\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
}
