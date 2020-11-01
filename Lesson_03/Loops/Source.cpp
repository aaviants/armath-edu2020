#include <iostream>

int main()
{
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