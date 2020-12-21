#pragma once

#include "Geometry.h"

class Rectangle
{
private:
	Point topLeft;
	Point bottomRight;

	Color fillColor;
	Color borderColor;
	int borderWith;

public:
	Rectangle() :
		fillColor(255, 255, 255),
		borderColor(0, 0, 0),
		borderWith(1)
	{
	};
	Rectangle(Point tl, Point br) :
		topLeft(tl),
		bottomRight(br),

		fillColor(255, 255, 255),
		borderColor(0, 0, 0),
		borderWith(1)
	{
	};

	void setTopLeft(Point value) { topLeft = value; }
	void setBottomRight(Point value) { bottomRight = value; }

	Point getTopLeft() { return topLeft; }
	Point getBottomRight() { return bottomRight; }

	void setFillColor(Color value) { fillColor = value; }
	void setBorderColor(Color value) { borderColor = value; }
	void setBorderWeight(int value) { borderWith = value; }

	Color getFillColor() { return fillColor; }
	Color getBorderColor() { return borderColor; }
	int getBorderWeight() { return borderWith; }

	Point getCenterOfGravity() { return Point((topLeft.x + bottomRight.x) / 2, (topLeft.y + bottomRight.y) / 2); }
	Boundary getBoundingRect() { return Boundary(topLeft, bottomRight); }
	double getArea() { return (bottomRight.x - topLeft.x) * (bottomRight.y - topLeft.y); }
};
