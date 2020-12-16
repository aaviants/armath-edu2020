#include <iostream>
#include <fstream>

#include "Operations.h"

Operation getOperation()
{
	std::cout << "Enter 1 for Adding a person" << std::endl;
	std::cout << "Enter 2 for Removing a person" << std::endl;
	std::cout << "Enter 3 for Searching a person" << std::endl;
	std::cout << "Enter 4 for doing something" << std::endl;

	std::cout << "Enter 0 to Exit" << std::endl;

	int op;
	std::cout << "What's your choice: ";
	std::cin >> op;
	std::cout << std::endl;

	return (Operation)op;
}

void AddPerson(Person* people, int index)
{
	Person p;
	std::string name;

	std::cout << "Enter first name: ";
	std::cin >> name;
	p.setFirstName(name);

	std::cout << "Enter last name: ";
	std::cin >> name;
	p.setLastName(name);

	people[index] = p;
}

//int Add(int a, int b)
//{
//	return a + b;
//}

void DoSomething()
{
	std::ofstream writer;
	writer.open("Data\\PeopleDBTest.txt");

	Person p1("Anun1", "Azganun1\n");
	Person p2("Anun2", "Azganun2\n");
	Person p3("Anun3", "Azganun3\n");

	//writer << p1 << "\n" << p2 << "\n" << p3;
	writer << p1 << p2 << p3;

	//Add(1, Add(2, Add(3, 4)));

	writer.close();
}
