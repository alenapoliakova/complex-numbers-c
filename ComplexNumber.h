#include <iomanip>
#pragma once

class ComplexNumber {
private:
	double re;
	double im;
public:
	ComplexNumber();

	ComplexNumber(const double re, const double im);

	ComplexNumber operator+(const ComplexNumber& right) const;

	ComplexNumber operator-(const ComplexNumber& right) const;

	ComplexNumber operator*(const ComplexNumber& right) const;

	friend std::istream& operator>>(std::istream& in, ComplexNumber& number);

	friend std::ostream& operator<<(std::ostream& out, const ComplexNumber& number);
};
