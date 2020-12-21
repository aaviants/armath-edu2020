#pragma once

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
	int borderWith;

public:
	Shape() :
		fillColor(255, 255, 255),
		borderColor(0, 0, 0),
		borderWith(1)
	{
	}

	void setFillColor(Color value) { fillColor = value; }
	void setBorderColor(Color value) { borderColor = value; }
	void setBorderWeight(int value) { borderWith = value; }

	Color getFillColor() { return fillColor; }
	Color getBorderColor() { return borderColor; }
	int getBorderWeight() { return borderWith; }
};
