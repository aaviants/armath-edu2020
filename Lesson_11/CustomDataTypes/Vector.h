#pragma once

#include <iostream>

//using namespace std;

struct Vector
{
	double x;
	double y;
};



void print(Vector point)
{
	std::cout << "Vector coordinates are: " << point.x << "," << point.y << std::endl;
}

void print(double x, double y)
{
	std::cout << "Vector coordinates are: " << x << "," << y << std::endl;
}

Vector Add(Vector point1, Vector point2)
{
	Vector result = { 0 };

	result.x = point1.x + point2.x;
	result.y = point1.y + point2.y;

	return result;
}

Vector Subtract(Vector point1, Vector point2)
{
	Vector result = { 0 };
	result.x = point1.x - point2.x;
	result.y = point1.y - point2.y;

	return result;
}
