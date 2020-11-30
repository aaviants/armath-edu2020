#include <iostream>

#include "Point1.h"
#include "Point2.h"
#include "Rectangle.h"

int main()
{
	if (false)
	{
		//Point1 pt = {5, 6};

		// operations with structure
		std::cout << "Input point 1" << std::endl;
		Point1 pt1 = InputPoint();
		OutputPoint(pt1);
		std::cout << "Input point 2" << std::endl;
		Point1 pt2 = InputPoint();
		OutputPoint(pt2);

		double dist_12 = CalcDistance(pt1, pt2);
		std::cout << "Distance of points is: " << dist_12 << std::endl;
	}

	if (false)
	{
		// operations with classes
		Point2 pt3 = {}, pt4 = {};

		std::cout << "Input point 3" << std::endl;
		pt3.input();
		pt3.output();
		std::cout << "Input point 4" << std::endl;
		pt4.input();
		pt4.output();

		double dist_34 = CalcDistance(pt3, pt4);
		std::cout << "Distance of points is: " << dist_34 << std::endl;

		double dist_34_second = pt3.distanceFrom(pt4);
		std::cout << "Distance of points is: " << dist_34_second << std::endl;
	}

	if (true)
	{
		Rectangle rc;
		int area = rc.area();

		//rc.width = 100;
		//rc.height = -200;
		//std::cout << "rectangle width is " << rc.width << std::endl;
		//std::cout << "rectangle height is " << rc.height << std::endl;
		//std::cout << "rectangle area is " << rc.area() << std::endl;

		rc.setWidth(50);
		rc.setHeight(15);

		rc.setHeight(-5);
		rc.setWidth(40);
		rc.setSize(70, -5);
		std::cout << "rectangle width is " << rc.getWidth() << std::endl;
		std::cout << "rectangle height is " << rc.getHeight() << std::endl;
		std::cout << "rectangle area is " << rc.area() << std::endl;

		Rectangle* rectangles = new Rectangle[5];
		delete[] rectangles;

		Rectangle rc2(5, 2);
		std::cout << "rectangle width is " << rc2.getWidth() << std::endl;
		std::cout << "rectangle height is " << rc2.getHeight() << std::endl;
		std::cout << "rectangle area is " << rc2.area() << std::endl;
	}

	return 0;
}
