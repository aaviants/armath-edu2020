#pragma once

#include "Vector.h"

struct Rectangle
{
	Vector topLeft;
	Vector bottomRight;
};

void print(Rectangle rect)
{
	// l, t, r, b
	std::cout << "Rectangle coordinates are: " 
		<< rect.topLeft.x << ", " 
		<< rect.topLeft.y << ", " 
		<< rect.bottomRight.x << ", " 
		<< rect.bottomRight.y << std::endl;
}

double area(Rectangle rect)
{
	return (rect.bottomRight.y - rect.topLeft.y) * (rect.bottomRight.x - rect.topLeft.x);
}
