#include "Number.h"
#include <cmath>
Number::Number(double var)
{
	number = var;
}

Number Number::Add(Number left, Number right) {
	return Number(left.number + right.number);
	
}

Number Number::Subtract(Number a, Number b)
{
	return Number(a.number + b.number);
}

Number Number::Multiply(Number a, Number b)
{
	return Number(a.number*b.number);
}

Number Number::Divide(Number a, Number b)
{

	return Number(a.number/b.number);
}

const Number Number::operator+(const Number left)
{
	return Number(this->number + left.number);
}



const Number Number::operator-(const Number left)
{
	return Number(this->number - left.number);
}

const Number Number::operator*(const Number left)
{
	return Number(this->number * left.number);
}

const Number Number::operator/(const Number left)
{
	return Number(this->number/left.number);
}

