#include <iostream>

struct Vector
{
	double x;
	double y;

	void operator = (Vector another)
	{
		std::cout << "This object is being copied from another one" << std::endl;

		x = another.x;
		y = another.y;
	}
	Vector operator + (Vector another)
	{
		Vector result;

		result.x = x + another.x;
		result.y = y + another.y;

		return result;
	}
};

//Vector Add(Vector v1, Vector v2)
//{
//	Vector result;
//
//	result.x = v1.x + v2.x;
//	result.y = v1.y + v2.y;
//
//	return result;
//}


//Vector operator + (Vector v1, Vector v2)
//{
//	Vector result;
//
//	result.x = v1.x + v2.x;
//	result.y = v1.y + v2.y;
//
//	return result;
//}

Vector operator - (Vector v1, Vector v2)
{
	Vector result;

	result.x = v1.x - v2.x;
	result.y = v1.y - v2.y;

	return result;
}

double operator * (Vector v1, Vector v2)
{
	return v1.x * v2.x + v1.y * v2.y;
}

Vector operator * (Vector v1, double number)
{
	Vector result;

	result.x = v1.x * number;
	result.y = v1.y * number;

	return result;
}

Vector operator * (double number, Vector v1)
{
	Vector result;

	result.x = v1.x * number;
	result.y = v1.y * number;

	return result;
}

Vector operator / (Vector v1, double number)
{
	Vector result;

	result.x = v1.x / number;
	result.y = v1.y / number;

	return result;
}

Vector operator -(Vector v1)
{
	Vector result;

	result.x = -v1.x;
	result.y = -v1.y;

	return result;
}

void operator +=(Vector& v1, Vector v2)
{
	v1.x += v2.x;
	v1.y += v2.y;
}

void operator *=(Vector& v1, double number)
{
	v1.x *= number;
	v1.y *= number;
}

bool operator == (Vector v1, Vector v2)
{
	return v1.x == v2.x && v1.y == v2.y;
}

bool operator != (Vector v1, Vector v2)
{
	return !(v1 == v2);
}


int main()
{
	int i1 = 1;
	int i2 = 2;

	i2 += 5;

	int i3 = i1 + i2;

	double d1 = 3.14;
	double d2 = 0;

	d2 = d1;
	double d3 = d2 / d1;

	float f1 = 2.71;
	float f2 = f1 / i1;

	d3 = f1;

	Vector v1 = { 1, 2 };
	Vector v2 = { 3, 4 };
	//Vector v12 = Add(v1, v2);
	Vector v3 = v1 + v2;
	Vector v4 = v1 - v2;

	double product = v1 * v2;
	Vector v5 = v1 * 4.5;
	Vector v6 = 4.5 * v1;


	Vector v7 = v1 / 7.0;
	// Vector v7 = 7.0 / v1;		?

	Vector v8 = -v6;
	v8 += v3;
	v8 *= 4;

	if (v1 == v2)
	{
		std::cout << "v1 is equal to v2" << std::endl;
	}
	if (v1 != v2)
	{
		std::cout << "v1 is not equal to v2" << std::endl;
	}

	v8 = v6;

	return 0;
}
