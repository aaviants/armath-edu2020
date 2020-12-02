#include <iostream>

#include "Vector.h"





Vector::Vector()
{
	x = 0;
	y = 0;
}
Vector::Vector(double x, double y)
{
	setCoordinates(x, y);
}

Vector::Vector(Vector& other)
{
	x = other.x;
	y = other.y;
}

void Vector::setCoordinates(double x, double y)
{
	this->x = x;
	this->y = y;
}
void Vector::setX(double x)
{
	this->x = x;
}
void Vector::setY(double y)
{
	this->y = y;
}
double Vector::getX()
{
	//return l * std::cos(a);
	return x;
}
double Vector::getY()
{
	//return l * std::sin(a);
	return y;
}

void Vector::setLength(double length)
{
	//l = length;
	std::cout << "Not implemented" << std::endl;
}

void Vector::setAlpha(double angle)
{
	//a = angle;
	std::cout << "Not implemented" << std::endl;
}

double Vector::getLength()
{
	//return l;
	return std::sqrt(x * x + y * y);
}

double Vector::getAlpha()
{
	//return a;
	return std::atan2(y, x);
}
