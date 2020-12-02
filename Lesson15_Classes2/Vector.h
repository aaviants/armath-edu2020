#pragma once

class Vector
{
private:
	double x;
	double y;

	//double l;
	//double a;

public:
	Vector();
	Vector(double x, double y);
	Vector(Vector& other);

	void setCoordinates(double a, double b);
	void setX(double a);
	void setY(double b);
	double getX();
	double getY();

	void setLength(double l);
	void setAlpha(double a);
	double getLength();
	double getAlpha();
};
