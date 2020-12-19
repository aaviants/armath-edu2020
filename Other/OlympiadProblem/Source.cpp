#include <iostream>

using byte = char;

bool getDigits(int number, byte* arrBytes, int& index)
{
	while (number > 0)
	{
		if (index < 0)
			return false;

		int digit = number % 10;
		number /= 10;

		arrBytes[index] = digit;
		index--;
	}

	index++;
	return true;
}

int getLength(int number)
{
	int result = 0;

	while (number > 0)
	{
		result++;
		number /= 10;
	}

	return result;
}

int pow10(int degree)
{
	int result = 1;
	while (degree-- > 0)
		result *= 10;

	return result;
}

void findPlusIndexesV1(const int num1, const int num2)
{
	byte digits[10] = {};
	int startIndex = 9, endIndex = 9;
	bool solutionIsFound = false;

	if (!getDigits(num1, digits, startIndex))
	{
		std::cout << "Error, something went wrong" << std::endl;
		return;
	}

	// 0, 0, 0, 1, 2, 4, +7, 9, 8, +1

	for (int indexPlus1 = startIndex + 1; indexPlus1 <= endIndex - 1; indexPlus1++)
	{
		for (int indexPlus2 = indexPlus1 + 1; indexPlus2 <= endIndex; indexPlus2++)
		{
			int sum = 0;
			int currNum = 0;
			int tmpNumber = num1;

			for (int index = startIndex; index <= endIndex; index++)
			{
				if (index == indexPlus1 || index == indexPlus2)
				{
					sum += currNum;
					currNum = 0;
				}

				currNum *= 10;
				currNum += digits[index];
			}
			sum += currNum;

			if (sum == num2)
			{
				solutionIsFound = true;
				for (int index = startIndex; index <= endIndex; index++)
				{
					if (index == indexPlus1 || index == indexPlus2)
						std::cout << "+";
					std::cout << (int)digits[index];
				}
				std::cout << std::endl;
			}
		}
	}

	if (!solutionIsFound)
		std::cout << "Solution is not found" << std::endl;
}

void findPlusIndexesV2(const int num1, const int num2)
{
	bool solutionIsFound = false;
	int length = getLength(num1);
	int endIndex = length - 1;

	// 0, 0, 0, 1, 2, 4, +7, 9, 8, +1

	for (int indexPlus1 = 1; indexPlus1 <= endIndex - 1; indexPlus1++)
	{
		for (int indexPlus2 = indexPlus1 + 1; indexPlus2 <= endIndex; indexPlus2++)
		{
			int sum = 0;
			int currNum = 0;
			int tmpNumber = num1;

			for (int index = 0; index <= endIndex; index++)
			{
				if (index == indexPlus1 || index == indexPlus2)
				{
					sum += currNum;
					currNum = 0;
				}

				int scale = pow10(endIndex - index);
				int digit = tmpNumber / scale;
				tmpNumber -= digit * scale;

				currNum *= 10;
				currNum += digit;
			}
			sum += currNum;

			if (sum == num2)
			{
				solutionIsFound = true;
				int tmpNumber = num1;

				for (int index = 0; index <= endIndex; index++)
				{
					if (index == indexPlus1 || index == indexPlus2)
						std::cout << "+";

					int scale = pow10(endIndex - index);
					int digit = tmpNumber / scale;
					tmpNumber -= digit * scale;

					std::cout << digit;
				}
				std::cout << std::endl;
			}
		}
	}

	if (!solutionIsFound)
		std::cout << "Solution is not found" << std::endl;
}

int main()
{
	int num1 = 1247981;
	int num2 = 68;

	while (true)
	{
		std::cout << "Enter number 1 (or 0 to break): ";
		std::cin >> num1;
		if (num1 == 0)
			break;

		std::cout << "Enter number 2: ";
		std::cin >> num2;

		findPlusIndexesV2(num1, num2);
	}

	return 0;
}
