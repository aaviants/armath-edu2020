#pragma once

#include <iostream>

using namespace std;

enum class Color
{
	Black,
	White,
	Red,
	Green,
	Yellow,
	Blue
};

void print(Color c)
{
	cout << "Color is: ";
	switch (c)
	{
	case Color::Black:
		cout << "Black";
		break;
	case Color::White:
		cout << "White";
		break;
	case Color::Red:
		cout << "Red";
		break;
	case Color::Green:
		cout << "Green";
		break;
	case Color::Yellow:
		cout << "Yellow";
		break;
	case Color::Blue:
		cout << "Blue";
		break;
	}

	cout << endl;
}
