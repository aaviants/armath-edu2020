#include <iostream>
#include <string>

#include "Vector.h"
#include "Rectangle.h"
#include "Color.h"
#include "Animal.h"
#include "Trash.h"

using namespace std;

using int_1 = signed char;
using int_2 = short;
using int_4 = int;
using int_8 = long long;

using char_ptr = char*;


void print(char_ptr text)
{
	cout << text << endl;
}

int main()
{
	//Vector pt = { 0 };
	//pt.x = 5;
	//pt.y = 1.5;

	//cin >> pt.x >> pt.y;
	//print(pt);

	//double x;
	//double y;
	//cin >> x >> y;
	//print(x, y);

	string text = "some text";
	cout << text << endl;


	Vector v1 = { 1, 3 };
	Vector v2 = { 5, 7 };

	Vector addition = Add(v1, v2);
	Vector subtraction = Subtract(v1, v2);

	print(addition);
	print(subtraction);

	Rectangle rc = { v1, v2 };
	cout << "Area of the rectangle is: " << area(rc) << endl;


	// 0 - black
	// 1 - white
	// 2 - red
	int color = 0;
	print(color);
	print_as_color(color);

	Color anotherColor;
	anotherColor = Color::Black;
	Color c = Color::Red;
	print(c);

	Animal a = Animal::Lion;
	print(a);
	int value = (int)Animal::Lion;
	print(value);


	char_ptr charArray = new char[10];
	charArray[0] = 'a';
	charArray[1] = 'b';
	charArray[2] = 'c';
	charArray[3] = '\0';

	cout << charArray << endl;
	print(charArray);

	//

	delete[] charArray;

	{
		int_1 tinyInt = 12;
		int_2 smallInt = 543;
		int_4 normalInt = 543093240;
		int_8 bigInt = 543984359989354358;

		cout << tinyInt << endl;
		cout << smallInt << endl;
		cout << normalInt << endl;
		cout << bigInt << endl;
	}

	{
		signed char tinyInt = 12;
		short smallInt = 543;
		int normalInt = 543093240;
		long long bigInt = 543984359989354358;

		cout << tinyInt << endl;
		cout << smallInt << endl;
		cout << normalInt << endl;
		cout << bigInt << endl;
	}

	return 0;
}
