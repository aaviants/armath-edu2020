#include <iostream>

#include <cmath>

using namespace std;

int func()
{
	return 74;
}

int main()
{
	double num = pow(10, 3);		// 10 ^ 3 = 10 * 10 * 10

	// a & b
	// 1 - a+b
	// 2 - a-b
	// 3 - a*b
	// 4 - a/b

	int a = 0, b = 0;
	int op;

	cout << "input a: ";
	cin >> a;
	cout << "input b: ";
	cin >> b;

	// 
	cout << "Enter 1 for +, 2 for -, 3 for *, 4 for /: ";
	cin >> op;

	if (op == 1)
		cout << "a+b=" << a + b << endl;
	if (op == 2)
		cout << "a-b=" << a - b << endl;
	if (op == 3)
		cout << "a*b=" << a * b << endl;
	if (op == 4)
		cout << "a/b=" << a / b << endl;

	const int k = 74;

	//k = 12;

	switch (op)
	{
	case 1:
		cout << "a+b=" << a + b << endl;
		break;
	case 2:
		cout << "a-b=" << a - b << endl;
		break;
	case 3:
		cout << "a*b=" << a * b << endl;
		break;
	case 4:
		cout << "a/b=" << a / b << endl;
		break;
	case k:
		break;
	default:
		cout << "invalid operator" << endl;
		break;
	}

	// char, signed char, short, int, long long, unsigned short, unsigned int, unsigned long long
	char c = ' ';
	char letter2 = 'Z';
	cin >> c;

	int code = (int)c;		// 0 - 255

	signed char c1 = -7;		// -127,128
	signed char c2 = 3;			// -127,128
	signed char c3 = c1 + c2;

	switch (c)
	{
	case '+':
		break;
	case '-':
		break;
	//case letter2:
	//	break;
	case '*':
		break;
	case '/':
		break;
	}

	return 0;
}
