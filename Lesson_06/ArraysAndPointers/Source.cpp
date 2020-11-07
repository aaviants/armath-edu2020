#include <iostream>



int n = 10;


void f()
{
	// using local n
	int n = 5;

	std::cout << "In function f() n = " << n << std::endl;
	std::cout << "In function f() &n = " << &n << std::endl;

	std::cout << "In function f() ::n = " << ::n << std::endl;
	std::cout << "In function f() &::n = " << &::n << std::endl;
}

void g()
{
	// using global n
	n = 14;

	std::cout << "In function g() n = " << n << std::endl;
	std::cout << "In function g() &n = " << &n << std::endl;

	std::cout << "In function g() ::n = " << ::n << std::endl;
	std::cout << "In function g() &::n = " << &::n << std::endl;
}

int main()
{
	int n = 2;

	std::cout << "In function main() n = " << n << std::endl;
	std::cout << "In function main() &n = " << &n << std::endl;

	std::cout << "In function main() ::n = " << ::n << std::endl;
	std::cout << "In function main() &::n = " << &::n << std::endl;

	{

		int n = 3;

		std::cout << "In function scope() n = " << n << std::endl;
		std::cout << "In function scope() &n = " << &n << std::endl;

		std::cout << "In function scope() ::n = " << ::n << std::endl;
		std::cout << "In function scope() &::n = " << &::n << std::endl;


		double dElement = 1.5;
		double dArray[10] = { 0 };

		dArray[0] = 5;
		dArray[1] = 3;

		dArray[9] = 97832;

		double* pointerElement = &dElement;
		double* pointerArray = dArray;
		double* pointerNull = 0;


		double* pointerTo5Element = pointerArray + 5;		// 5 * sizeof(double) = 5 * 8
		pointerTo5Element--;

		pointerTo5Element[0] = 2;
		pointerTo5Element[1] = 8;

		int arrayInt[3] = { 1, 2, 3 };
		int another_arrayInt[] = { 1, 2, 3 };
		int* pArray = arrayInt;
		arrayInt[2] = 14;									// 2 * sizeof(int) = 2 * 4

		int i = 14;
		i = 3;
		i--;
		std::cout << i << std::endl;
		std::cout << (int)&i << std::endl;

		int* addressOfI = &i;
		addressOfI[0] = 8;
		std::cout << i << std::endl;
		std::cout << (int)&i << std::endl;
	}


	f();
	g();

	//
	{
		int n = 4;

		int arrayIntegers[] = { 1, 2, 3, 5, 4, 9, 7, 0, 6, 8 };

		int value = arrayIntegers[5];
		int anotherValue = arrayIntegers[value];

		int theSameValue = arrayIntegers[arrayIntegers[5]];

		bool areEqual = (anotherValue == theSameValue);

		if (areEqual)
			std::cout << "Are equal" << std::endl;
		else
			std::cout << "Are not equal" << std::endl;

		// ternary operator
		std::cout << (areEqual ? "Are equal" : "Are not equal") << std::endl;
	}

	return 0;
}
