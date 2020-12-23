#pragma once

#include <iostream>

using byte = unsigned char;

struct Point
{
	Point() { x = 0; y = 0; }
	Point(double x, double y) { this->x = x; this->y = y; }

	double x;
	double y;
};

struct Boundary
{
	Boundary() { left = 0; top = 0; right = 0; bottom = 0; }
	Boundary(double l, double t, double r, double b) { left = l; top = t; right = r; bottom = b; }
	Boundary(Point topLeft, Point bottomRight) { left = topLeft.x; top = topLeft.y; right = bottomRight.x; bottom = bottomRight.y; }

	double left;
	double top;
	double right;
	double bottom;
};

struct Color
{
	Color() { red = 0; green = 0; blue = 0; }
	Color(int r, int b, int g) { red = r; green = b; blue = g; }

	byte red;
	byte green;
	byte blue;
};

class Shape
{
private:

	Color fillColor;
	Color borderColor;
	int borderWeight;

public:
	Shape() :
		fillColor(255, 255, 255),
		borderColor(0, 0, 0),
		borderWeight(1)
	{
		std::cout << "Shape created" << std::endl;
	}
	virtual ~Shape()
	{
		std::cout << "Shape destroyed" << std::endl;
	}

	void setFillColor(Color value) { fillColor = value; }
	void setBorderColor(Color value) { borderColor = value; }
	void setBorderWeight(int value) { borderWeight = value; }

	Color getFillColor() { return fillColor; }
	Color getBorderColor() { return borderColor; }
	int getBorderWeight() { return borderWeight; }

	virtual Point getCenterOfGravity() = 0;
	virtual Boundary getBoundingRect() = 0;
	virtual double getArea() = 0;

	//Point getCenterOfGravity() { return Point(0, 0); }
	//Boundary getBoundingRect() { return Boundary(Point(0, 0), Point(0, 0)); }
	//double getArea() { return 18; }
};
