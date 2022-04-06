#pragma once
#include "..\Number\Number.h"
#include <iostream>
class   Vector {
public:
	Number X;
	Number Y;
	Vector(Number X, Number Y);
	Vector sum(Vector one, Vector two);
	const Vector operator+(const Vector left);
	Number r();
	Number angle();
	void print_vector();
};
const Vector ZERO_Vect(Number(0),Number(0));
const Vector ONE_Vect(Number(1), Number(1));
