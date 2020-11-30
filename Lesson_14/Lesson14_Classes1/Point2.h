#pragma once

#include <iostream>
#include <cmath>

class Point2
{
public:
	double x = 0;
	double y = 0;

	void input()
	{
		std::cout << "Input coordinate X: ";
		std::cin >> x;

		std::cout << "Input coordinate Y: ";
		std::cin >> y;
	}
	void output()
	{
		std::cout << "Coordinate of the point are (" << x << "," << y << ")" << std::endl;
	}

	double distanceFrom(Point2 anotherPoint)
	{
		return sqrt((x - anotherPoint.x) * (x - anotherPoint.x) + 
			(y - anotherPoint.y) * (y - anotherPoint.y));
	}
};

double CalcDistance(Point2 pt1, Point2 pt2)
{
	return sqrt((pt1.x - pt2.x) * (pt1.x - pt2.x) + 
		(pt1.y - pt2.y) * (pt1.y - pt2.y));
}
