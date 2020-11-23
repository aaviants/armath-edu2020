#pragma once

#include <iostream>

using namespace std;

void print(int number)
{
	std::cout << "Number is: " << number << std::endl;
}

void print_as_color(int number)
{
	switch (number)
	{
	case 0:
		cout << " black:" << endl;
		break;
	case 1:
		cout << " white:" << endl;
		break;
	case 2:
		cout << " red:" << endl;
		break;
	}
}
