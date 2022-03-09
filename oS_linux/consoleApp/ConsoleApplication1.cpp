// TestingLibraries.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vector.h"
int main()
{
    Number a = Number(10);
    Number b = Number(5);
    Number c = ZERO;
    Number d = ONE;
    Vector v1 = Vector(a, b);
    Vector v2 = Vector(c, a);
    Vector v3 = ZERO_Vect;
    Vector v4 = ONE_Vect;
    Vector sum = v1 + v2;
    Number ro = v1.r();
    Number fi = v1.angle();
    v1.print_vector();
    v2.print_vector();
    sum.print_vector();
    std::cout << ro.number << std::endl;
    std::cout << fi.number << std::endl;
}

