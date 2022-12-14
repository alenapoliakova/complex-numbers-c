#pragma once
#include <iostream>
#include "ComplexNumber.h"


ComplexNumber read_complex_number() {
	float re, im;
	std::cout << "\tReal part of number: ";
	std::cin >> re;
	std::cout << "\tImaginary part of number: ";
	std::cin >> im;
	return ComplexNumber(re, im);
}

int main(void) {
	const int SUM = 1;
	const int SUBTRACTION = 2;
	const int MULTIPLY = 3;
	const int EXIT = 4;

	while (true) {
		std::cout << "\n-----\n" << "Menu:\n" << "-----\n";
		std::cout << "1. Sum 2 complex numbers\n2. Subtract 2 complex numbers\n3. Multiply 2 complex numbers\n4. Exit\n";
		std::cout << "Select your choice: ";
		int choice;
		ComplexNumber number1, number2;
		if (std::cin >> choice) {
			switch (choice) {
			case SUM:
				number1 = read_complex_number();
				number2 = read_complex_number();
				std::cout << number1 + number2;
				break;
			case SUBTRACTION:
				number1 = read_complex_number();
				number2 = read_complex_number();
				std::cout << number1 - number2;
				break;
			case MULTIPLY:
				number1 = read_complex_number();
				number2 = read_complex_number();
				std::cout << number1 * number2;
				break;
			case EXIT:
				return 0;
			default:
				std::cout << "\nPlease enter a choice from Menu\n";
				break;
			}
		}
		else {
			std::cout << "\nPlease enter a valid number\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}
