#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"

void setColor(Shape& obj, Color c);
//void setColor(Triangle& obj, Color c);
void setColor(Rectangle& obj, Color c);

int main()
{
	Circle c1(Point(10, 20), 5);
	Triangle t1(Point(0, 0), Point(10, 10), Point(0, 10));
	Rectangle r1(Point(10, 20), Point(30, 40));

	setColor(c1, Color(255, 0, 0));
	setColor(t1, Color(0, 255, 0));
	setColor(r1, Color(0, 0, 255));

	return 0;
}

void setColor(Shape& obj, Color c)
{
	obj.setFillColor(c);
}

//void setColor(Triangle& obj, Color c)
//{
//	obj.setFillColor(c);
//}

void setColor(Rectangle& obj, Color c)
{
	obj.setFillColor(c);
}



class Car
{
};

class Mercedes : Car
{
};

class Mercedes_C : Mercedes
{
};

class Mercedes_S : Mercedes
{
};

class Ford : Car
{
};

class Focus : Ford
{
};

class Bronco : Ford
{
};


				// Car
//		Mercedes	Ford	Lamborghini
//		C S			F B			M
//		