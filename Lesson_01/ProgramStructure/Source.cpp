#include <iostream>
#include <string>

using namespace std;


int main()
{
	// print some text
	cout << "Hello Armath" << endl;
	
	// Character types
	char letter = 'a';
	char letter2 = 'g';
	cout << "Characters: " << letter << ", "<< letter2 << endl;

	// integer types
	short number = 74;
	int number2 = 74000000;
	unsigned int number_3 = 9282834;
	cout << "Integer numbers: " << number << ", " << number2 << ", " << number_3 << endl;

	// floating point types
	float f = 1.25;				// 4 bytes
	double d = 3.1415;			// 8 bytes
	cout << "Real numbers: ";
	cout << f;
	cout << ", ";
	cout << d;
	cout << endl;

	// the boolean type
	bool boolean = true;
	number = 2;
	bool bool2 = (number > 5);
	cout << "Boolean values: " << boolean << ", " << bool2 << endl;

	if (bool2)
		cout << "true";
	else
		cout << "false";
	cout << endl;

	// playing with variables
	int a, b, c;
	a = 1;
	b = a;
	c = a + b;
	cout << "a+b Expression value is " << c << endl;

	int x(0), y = 0, z(0);
	x = 1;
	y = x;
	z = x + y;

	bool value(false);

	// string types
	string myName("Ara");
	string yourName = "Loreta";
	string mySurname = "Petrosyan";

	string myFullName = myName + " " + mySurname;
	cout << "My full name is " << myFullName << endl;

	// read / write i
	int i = 0;
	cin >> i;
	cout << i;

	return 0;
}
