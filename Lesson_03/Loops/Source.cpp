#include <iostream>

int main()
{
	// homework 3 Lesson 2
	{
		int N;
		std::cout << "Input N: ";
		std::cin >> N;

		int S = 0, int prevNum = 0;								// S = 1 + 11 + 111
		for (int i = 1; i <= N; i++)
		{
			int newNum = prevNum * 10 + 1;
			S += newNum;
			prevNum = newNum;
		}
		std::cout << S << std::endl;
	}

	// homework 3 Lesson 4
	{
		int N;		// 10221
		std::cout << "Input N: ";
		std::cin >> N;

		int d0 = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0, d7 = 0, d8 = 0, d9 = 0;

		while (N != 0)
		{
			int digit = N % 10;
			N /= 10;

			switch (digit)
			{
			case 0:
				d0++;
				break;
			case 1:
				d1++;
				break;
			case 2:
				d2++;
				break;
			}
		}

		if (d0 != 0)
			std::cout << "The frequency of 0-s is " << d0 << std::endl;
		if (d1 != 0)
			std::cout << "The frequency of 1-s is " << d1 << std::endl;
		if (d2 != 0)
			std::cout << "The frequency of 2-s is " << d2 << std::endl;
	}

	// iteration by while loop
	{
		int i = 0;
		while (i < 10)
		{
			std::cout << i << std::endl;
			i++;
		}
	}


	// iteration by for loop
	{
		for (int i = 0; i < 10; i++)
		{
			std::cout << i << std::endl;
		}

		for (double j = 100; j > 12.5; j /= 2.3) // j = j / 10;
			std::cout << j << std::endl;
	}

	// break and continue
	{
		std::cout << "begin for loop" << std::endl;

		for (int i = 0; i < 100; i++)
		{
			if (i % 3 != 0)
				continue;

			if (i == 74)
				break;

			std::cout << i << std::endl;
		}

		std::cout << "end for loop" << std::endl;
	}

	{
		char text[] = "some text";
		char letter = ' ';
		int index = 0;

		do
		{
			letter = text[index];
			if (letter == '\0')
				break;

			index++;
			std::cout << letter << std::endl;
		} while (true);
	}

	return 0;
}