#include <iostream>

int main()
{
	int N;
	std::cout << "Input the size: ";
	std::cin >> N;

	int rowIndex = 0, i = 0;

	while (rowIndex < (N / 2 + 1))
	{
		int spaces = N / 2 - rowIndex;
		int stars = N - 2 * spaces;

		i = 0;
		while (i < spaces)
		{
			std::cout << "_";
			i++;
		}
		i = 0;
		while (i < stars)
		{
			std::cout << "*";
			i++;
		}
		i = 0;
		while (i < spaces)
		{
			std::cout << "_";
			i++;
		}

		rowIndex++;
		std::cout << std::endl;
	}


	while (rowIndex < N)
	{
		int spaces = rowIndex - N / 2;
		int stars = N - 2 * spaces;

		i = 0;
		while (i < spaces)
		{
			std::cout << "_";
			i++;
		}
		i = 0;
		while (i < stars)
		{
			std::cout << "*";
			i++;
		}
		i = 0;
		while (i < spaces)
		{
			std::cout << "_";
			i++;
		}

		rowIndex++;
		std::cout << std::endl;
	}

	//0 ___*___
	//1 __***_  
	//2	 *****
	//3 *******
	//4 _*****_
	//5 __***__
	//6 ___*___

	return 0;
}
