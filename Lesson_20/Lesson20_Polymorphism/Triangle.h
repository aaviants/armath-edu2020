#pragma once

#include "Geometry.h"

class Triangle : public Shape
{
private:
	Point pt1;
	Point pt2;
	Point pt3;

public:
	Triangle()
	{
	};
	Triangle(Point p1, Point p2, Point p3) :
		pt1(p1),
		pt2(p2),
		pt3(p3)
	{
	};

	void setPoint1(Point value) { pt1 = value; }
	void setPoint2(Point value) { pt2 = value; }
	void setPoint3(Point value) { pt3 = value; }

	Point getPoint1() { return pt1; }
	Point getPoint2() { return pt2; }
	Point getPoint3() { return pt3; }

	Point getCenterOfGravity() { return Point(); }
	Boundary getBoundingRect() { return Boundary(); }
	double getArea() { return 0; }
};
