#include <iostream>


#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"

void setColor(Shape& obj, Color c);
void printArea(Shape& obj);

using ShapePtr = Shape*;

int main()
{
	//Shape s;
	Circle c1(Point(10, 20), 5);
	Triangle t1(Point(0, 0), Point(10, 10), Point(0, 10));
	Rectangle r1(Point(10, 20), Point(30, 40));

	setColor(c1, Color(255, 0, 0));
	setColor(t1, Color(0, 255, 0));
	setColor(r1, Color(0, 0, 255));

	printArea(c1);
	printArea(t1);
	printArea(r1);


	int* arrayOfIntegers = new int[11];

	ShapePtr arrShapes[11];
	arrShapes[0] = new Rectangle(Point(10, 20), Point(30, 40));
	arrShapes[1] = new Triangle(Point(0, 0), Point(10, 10), Point(0, 10));
	arrShapes[2] = new Circle(Point(10, 20), 5);
	arrShapes[3] = new Circle(Point(10, 20), 5);
	arrShapes[4] = new Rectangle(Point(10, 20), Point(30, 40));
	arrShapes[5] = new Triangle(Point(0, 0), Point(10, 10), Point(0, 10));
	arrShapes[6] = new Circle(Point(10, 20), 5);
	arrShapes[7] = new Rectangle(Point(10, 20), Point(30, 40));
	arrShapes[8] = new Triangle(Point(0, 0), Point(10, 10), Point(0, 10));
	arrShapes[9] = new Circle(Point(10, 20), 5);

	arrShapes[10] = new Circle(Point(15, 26), 41);

	for (int i = 0; i < 10; i++)
	{
		printArea(*arrShapes[i]);
		delete arrShapes[i];
	}

	int sizeInt = sizeof(int);
	int sizeChar = sizeof(char);
	int sizeColor = sizeof(Color);
	int sizePoint = sizeof(Point);

	int sizeShape = sizeof(Shape);
	int sizeTriangle = sizeof(Triangle);

	return 0;
}

void setColor(Shape& obj, Color c)
{
	obj.setFillColor(c);
}

void printArea(Shape& obj)
{
	std::cout << "Area = " << obj.getArea() << std::endl;
}

