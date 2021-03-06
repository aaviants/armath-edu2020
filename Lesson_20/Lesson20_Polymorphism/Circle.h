#pragma once

#include "Geometry.h"

class Circle : public Shape
{
private:
	Point center;
	double radius;

public:
	Circle() :
		radius(0)
	{
		std::cout << "Circle created" << std::endl;
	}
	Circle(Point c, double r) :
		center(c),
		radius(r)
	{
		std::cout << "Circle created" << std::endl;
	}
	~Circle()
	{
		std::cout << "Circle destroyed" << std::endl;
	}

	void setCenter(Point value) { center = value; }
	void setRadius(double value) { radius = value; }

	Point getCenter() { return center; }
	double getRadius() { return radius; }

	Point getCenterOfGravity() { return center; }
	Boundary getBoundingRect() { return Boundary(center.x - radius, center.y - radius, center.x + radius, center.y + radius); }
	double getArea() { return 3.14 * radius * radius; }
};
