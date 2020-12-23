#pragma once

#include "Geometry.h"

class Rectangle : public Shape
{
private:
	Point topLeft;
	Point bottomRight;

public:
	Rectangle()
	{
		std::cout << "Rectangle created" << std::endl;
	}
	Rectangle(Point tl, Point br) :
		topLeft(tl),
		bottomRight(br)
	{
		std::cout << "Rectangle created" << std::endl;
	}
	~Rectangle()
	{
		std::cout << "Rectangle destroyed" << std::endl;
	}

	void setTopLeft(Point value) { topLeft = value; }
	void setBottomRight(Point value) { bottomRight = value; }

	Point getTopLeft() { return topLeft; }
	Point getBottomRight() { return bottomRight; }

	Point getCenterOfGravity() { return Point((topLeft.x + bottomRight.x) / 2, (topLeft.y + bottomRight.y) / 2); }
	Boundary getBoundingRect() { return Boundary(topLeft, bottomRight); }
	double getArea() { return (bottomRight.x - topLeft.x) * (bottomRight.y - topLeft.y); }
};
