#pragma once

#include <iostream>
#include <cmath>

struct Point1
{
	double x;
	double y;
};

Point1 InputPoint()
{
	Point1 pt = {};

	std::cout << "Input coordinate X: ";
	std::cin >> pt.x;

	std::cout << "Input coordinate Y: ";
	std::cin >> pt.y;

	return pt;
}

void OutputPoint(Point1 pt)
{
	std::cout << "Coordinate of the point are (" << pt.x << "," << pt.y << ")" << std::endl;
}

double CalcDistance(Point1 pt1, Point1 pt2)
{
	return sqrt((pt1.x - pt2.x) * (pt1.x - pt2.x) + (pt1.y - pt2.y) * (pt1.y - pt2.y));
}
