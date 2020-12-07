#include <iostream>

#include "Vector.h"
#include "Rectangle.h"

void print(Vector v);

int main()
{
	int left(0);
	int top(0);
	int right(0);
	int bottom(0);

	Rect r1;
	//r1.setLeft(1);
	//r1.setTop(2);
	//r1.setRight(3);
	//r1.setBottom(4);
	r1.setCoordintes(1, 2, 3, 4);
	r1.print();

	Rect r2(1, 2, 3, 4);
	r2.print();

	r2.setWidth(10);
	int w = r2.getWidth();
	r2.print();

	Rect* arrRectangles = new Rect[10];
	Rect* pointerToRect = new Rect(5, 6, 7, 8);

	(*pointerToRect).print();
	pointerToRect->print();

	delete pointerToRect;
	delete[] arrRectangles;

	if (false)
	{
		Vector v1;
		v1.setCoordinates(33, 44);
		v1.setX(10);
		v1.setX(20);

		print(v1);

		Vector v2(3.14, 2.71);

		print(v2);

		Vector v3(v2);
		Vector v4 = v2;
	}
}


void print(Vector v)
{
	std::cout << "X=" << v.getX() << ", Y=" << v.getY() << ", L=" << v.getLength() << ", A=" << v.getAlpha() << std::endl;
}

