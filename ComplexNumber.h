#include <iomanip>
#pragma once
using namespace std;

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

	friend istream& operator>>(istream& in, ComplexNumber& number);

	friend ostream& operator<<(ostream& out, const ComplexNumber& number);
};