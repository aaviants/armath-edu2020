#pragma once

enum class Animal
{
	Dog,
	Cat,
	Lion
};

void print(Animal c)
{
	cout << "Animal is: ";
	switch (c)
	{
	case Animal::Dog:
		cout << "Dog";
		break;
	case Animal::Cat:
		cout << "Cat";
		break;
	case Animal::Lion:
		cout << "Lion";
		break;
	}

	cout << endl;
}
