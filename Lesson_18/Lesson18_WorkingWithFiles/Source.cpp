#include <iostream>

#include "Person.h"
#include "Operations.h"

const int MAX_PEOPLE = 5;

int main()
{
	std::cout << "Person Database started" << std::endl << std::endl;

	Person* people = new Person[MAX_PEOPLE];
	int count = ReadPeopleFromFile(people, MAX_PEOPLE);

	Operation op = getOperation();
	while (op != Operation::Exit)
	{
		switch (op)
		{
		case Operation::Exit:
			break;
		case Operation::AddPerson:
			if (count == MAX_PEOPLE)
			{
				std::cout << "Error: Array is full" << std::endl;
			}
			else
			{
				AddPerson(people, count);
				count++;
			}
			break;
		case Operation::RemovePerson:
			//RemovePerson();
			break;
		case Operation::SearchPerson:
			//SearchPerson();
			break;
		case Operation::Something:
			DoSomething();
		default:
			break;
		}
		std::cout << std::endl;

		op = getOperation();
	}

	WritePeopleToFile(people, count);

	std::cout << std::endl << "Person Database exited" << std::endl;

	return 0;
}
