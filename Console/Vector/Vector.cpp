
#include "Vector.h"
#include <cmath>
#define PI 3.14159265
Vector::Vector(Number x, Number y) :X(x), Y(y) {}

Vector Vector::sum(Vector one, Vector two)
{
	return Vector(one.X + two.X, one.Y + two.Y);
}

const Vector Vector::operator+(const Vector left)
{
	return Vector(this->X + left.X,this->Y + left.Y);
}

Number Vector::r()
{
	Number X2 = X * X;
	Number Y2 = Y * Y;
	Number sum = X2 + Y2;
	return Number(sqrt(sum.number));
}

Number Vector::angle()
{
	Number r = Vector::r();
	Number cos_fi = X / r;
	Number angle = Number(acos(cos_fi.number) * 180.0 / PI);
	return Number(angle);
}

void Vector::print_vector()
{
	std::cout << "( " << X.number << " , " << Y.number << " )\n";
}


