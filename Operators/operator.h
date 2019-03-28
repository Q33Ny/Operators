#ifndef OPERATOR_H
#define OPERATOR_H
#include <stdexcept>
class simple_fraction {
public:

	simple_fraction(int numerator, int denumerator) {

		if (denumerator == 0)
			throw std::runtime_error("zero division error");

		this->numerator = numerator;
		this->denumerator = denumerator;
	}

	double operator+(int val) { return number() + val; }
	double operator-(int val) { return number() - val; }
	double operator*(int val) { return number() * val; }
	double operator/(int val) {
		if (val == 0)
			throw std::runtime_error("'zero division error");
		return number() / val;
	}
	double number() { return numerator / (double)denumerator; }

private:
	int numerator;
	int denumerator;
};

#endif OPERATOR_H
