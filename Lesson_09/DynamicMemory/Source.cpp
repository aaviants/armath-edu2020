#include <iostream>

int* f();
void g(int* arr);

void print(int* arr)
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << *arr << std::endl;
		arr++;
	}
}

int main()
{
	int* fResult = f();
	fResult[1] = 20;

	// dynamic arrays
	int n;
	std::cout << "Input n: ";
	std::cin >> n;

	int* dynamic_array = new int[n];
	for (int i = 1; i <= n; i++)
	{
		dynamic_array[i - 1] = i;

		int size = (i + 1) * (i + 1) * (i + 1);
		double* arrayOfRealNumbers = new (std::nothrow)double[size];

		if (arrayOfRealNumbers == 0)
		{
			std::cout << "memory is full" << std::endl;
			break;
		}

		delete[] arrayOfRealNumbers;
	}

	std::cout << "exiting"<<std::endl;

	for (int i = 0; i < n; i++)
	{
		std::cout << dynamic_array[i] << std::endl;
	}
	
	delete[] dynamic_array;


	// dynamic memory allocation
	int* pointer_to_number = new int;
	double* pointer_to_double = new double;


	*pointer_to_double = 5.1;
	double d = *pointer_to_double;

	delete pointer_to_number;
	delete pointer_to_double;

	g(fResult);
	print(fResult);
	delete[] fResult;


	//g(fResult);

	return 0;
}



int* f()
{
	//int arrayOfInts[]{ 1,2,3 };
	int* arrayOfInts = new int[] {1, 2, 3};

	arrayOfInts[0] = 10;


	return arrayOfInts;
}

void g(int* arr)
{
	arr[2] = 30;
}
