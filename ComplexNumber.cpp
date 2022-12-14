#pragma once
#include <iostream>
#include "ComplexNumber.h"


ComplexNumber::ComplexNumber() {
	re = 0.0;
	im = 0.0;
}


ComplexNumber::ComplexNumber(const double re, const double im) {
	this->re = re;
	this->im = im;
}


ComplexNumber ComplexNumber::operator+(const ComplexNumber& right) const {
	return ComplexNumber(this->re + right.re, this->im + right.im);;
}


ComplexNumber ComplexNumber::operator-(const ComplexNumber& right) const {
	return ComplexNumber(this->re - right.re, this->im - right.im);
}


ComplexNumber ComplexNumber::operator*(const ComplexNumber& right) const {
	return ComplexNumber(this->re * right.re - this->im * right.im, this->im * right.re + this->re * right.im);
}


std::istream& operator>>(std::istream& input, ComplexNumber& number) {
	// Input from keyboard
	std::cout << "\tReal part of number: ";
	input >> number.re;
	std::cout << "\tImaginary part of number: ";
	input >> number.im;
	return input;
}


std::ostream& operator<<(std::ostream& output, const ComplexNumber& number) {
	// Output to console
	std::cout << "\t\tComplex number = ";
	output << number.re;
	if (number.im > 0) {
		output << " + ";
		output << number.im << "i";
	}
	else if (number.im < 0) {
		output << " - ";
		output << number.im << "i";
	}
	return output;
}
