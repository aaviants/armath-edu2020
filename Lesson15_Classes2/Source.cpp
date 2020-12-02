#include <iostream>

#include "Vector.h"

void print(Vector v);

int main()
{
	Vector v1;
	v1.setCoordinates(33, 44);
	v1.setX(10);
	v1.setX(20);

	print(v1);

	Vector v2(3.14, 2.71);

	print(v2);

	Vector v3(v2);
	Vector v4 = v2;
}


void print(Vector v)
{
	std::cout << "X=" << v.getX() << ", Y=" << v.getY() << ", L=" << v.getLength() << ", A=" << v.getAlpha() << std::endl;
}

