#include <iostream>

using namespace std;


namespace math
{
	int min(int value1, int value2)
	{
		if (value1 < value2)
			return value1;
		else
			return value2;
	}
}


int main()
{
	bool b = false;
	int min = 1, max = 5;


	//// if conditional operator
	//if (b)
	//{
	//	/* this is a comment */
	//	cout << "value is true" << endl;
	//	cout << "value is still true" << endl;

	//	if (!b)
	//	{
	//		cout << "this is impossible" << endl;
	//	}
	//}
	//else
	//{
	//	cout << "value is false" << endl;

	//	if (b)
	//	{
	//		cout << "this is impossible" << endl;
	//	}
	//}

	//cout << "something else" << endl;

	//int x;
	//cout << "Input x: ";
	//cin >> x;

	//if (x < min)
	//{
	//	cout << "X is smaller then " << min << endl;
	//}
	//else if (x > max)
	//{
	//	cout << "X is larger then " << max << endl;
	//}
	//else
	//{
	//	cout << "X is within (" << min << ", "<< max << ") range" << endl;

	//	bool isEqulalToAverage = (x == (min + max) / 2);
	//	if (isEqulalToAverage)
	//		cout << "X is equal to the average" << endl;
	//}



	// while loop

	//// single number input
	//{
	//	int number = 0;
	//	cout << "Input a positive number: ";
	//	cin >> number;

	//	if (number > 0)
	//		cout << "Number * 2 = " << number * 2;
	//	else
	//		cout << "Error: Number is not positive";
	//}

	// number input with correction
	{
		int number = 0;
		cout << "Input a positive number: ";
		cin >> number;

		while (number <= 0)
		{
			cout << "Error: Number is not positive" << endl;
			cout << "Input a positive number: ";
			cin >> number;
		}

		cout << "Number * 2 = " << number * 2;
	}

	{
		int number = 0;
		bool isFirstTime = true;

		do
		{
			if (!isFirstTime)
			{
				cout << "Error: Number is not positive" << endl;
			}
			else
			{
				isFirstTime = false;
			}

			cout << "Input a positive number: ";
			cin >> number;
		} while (number <= 0);

		cout << "Number * 2 = " << number * 2;
	}

	return 0;
}
