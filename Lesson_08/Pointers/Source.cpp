#include <iostream>
#include <string>

using namespace std;

void print_array(double* arr, int count)
{
	if (count == 0)
	{
		cout << "array is empty";
	}
	else
	{
		if (false)
		{
			for (int i = 0; i < count; i++)
			{
				if (i == 0)
					cout << arr[i];
				else
					cout << "," << arr[i];
			}
		}

		if (false)
		{
			while (count > 1)
			{
				cout << *arr << ",";
				arr++;
				count--;
			}
			cout << *arr;
		}

		for (int i = 0; i < count; i++)
		{
			double* pointer = arr + i;
			if (i == 0)
				cout << *pointer;
			else
				cout << "," << *(arr + i);
		}
	}
	cout << endl;
}

void print_array(char* arr)
{
	while (*arr != '\0')
	{
		cout << *arr;
		arr++;
	}
	cout << endl;
}

void print_array_rec(char* arr)
{
	if (*arr == '\0')
	{
		cout << endl;
		return;
	}

	cout << *arr;
	print_array_rec(arr + 1);
}

int main()
{
	int i = 10;					// 4 bytes
	bool b = true;				// 1 byte
	double d = 3.14;			// 8 bytes
	const char* s = "text";		// 4 byte

	int ai[3] = { 1, 2, 3 };
	bool ab[3] = { true, true, true };
	double ad[3] = { 2.71, 2.71, 2.71 };

	double another_arr[5] = {1, 2, 3, 4, 5};

	double* arr = 0;
	print_array(arr, 0);

	// pointer to ad
	arr = ad;
	print_array(arr, 3);
	arr[1] = 7;
	print_array(ad, 3);

	// pointer to another_arr
	arr = another_arr;
	print_array(arr, 5);
	another_arr[2] = 1.5;
	print_array(arr, 5);

	// pointer to a single double
	arr = &d;
	print_array(arr, 1);

	int* pi = &i;
	bool* pb = &b;
	double* pd = &d;

	pi = ai;
	pb = ab;
	pd = ad;

	pb = &b;

	// 
	pi[0] = 90;
	pi[1] = 14;

	pd[2] = 0.0;

	// reading value from the pointer
	int memory_address = (int)pd;
	double d1 = pd[0];
	double d2 = *pd;
	bool isTrue = d1 == d2;
	cout << "Address of d is " << memory_address << " and value of d1 is " << d1 << ", value of d2 is " << d2 << endl;



	int a1[10];
	int b1[10];
	for (int i = 0; i < 10; i++)
		b1[i] = a1[i];


	// print text array
	char some_text[] = "Some text to print in console";
	print_array_rec(some_text);


	{
		int value = 1;
		int* address_to_value = &value;

		cout << "Value = " << value << endl;
		*address_to_value = 2;
		cout << "Value = " << value << endl;
		address_to_value[0] = 3;
		cout << "Value = " << value << endl;

		int value2 = *address_to_value;
		value2 = value;
		value2 = 4;
	}

	return 0;
}
