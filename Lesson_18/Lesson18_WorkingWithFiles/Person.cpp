#include <fstream>
#include <iostream>

#include "Person.h"

Person::Person()
{
	firstName = "Poxos";
	lastName = "Poxosyan";
}

Person::Person(std::string firstName, std::string lastName)
{
	setName(firstName, lastName);
}

std::string Person::getFirstName()
{
	return firstName;
}

std::string Person::getLastName()
{
	return lastName;
}

void Person::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void Person::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void Person::setName(std::string firstName, std::string lastName)
{
	this->firstName = firstName;
	this->lastName = lastName;
}

bool Person::Read(std::ifstream& stream)
{
	stream >> firstName;
	stream >> lastName;

	return !stream.fail();
}

void Person::Write(std::ofstream& stream)
{
	stream << firstName;
	stream << " ";
	stream << lastName;
}

std::ifstream& ReadPerson(std::ifstream& stream, Person& person)
{
	std::string name;

	stream >> name;
	person.setFirstName(name);

	stream >> name;
	person.setLastName(name);

	return stream;
}

std::ofstream& WritePerson(std::ofstream& stream, Person& person)
{
	stream << person.getFirstName();
	stream << " ";
	stream << person.getLastName();

	return stream;
}

std::ifstream& operator>>(std::ifstream& stream, Person& person)
{
	std::string name;

	stream >> name;
	person.setFirstName(name);

	stream >> name;
	person.setLastName(name);

	return stream;
}

std::ofstream& operator<<(std::ofstream& stream, Person& person)
{
	stream << person.getFirstName();
	stream << " ";
	stream << person.getLastName();

	return stream;
}

int ReadPeopleFromFile(Person* people, int array_size)
{
	std::ifstream reader;
	reader.open("Data\\PeopleDB.txt");

	int counter = 0;

	while (!reader.eof())
	{
		Person person;
		//if (!person.Read(reader))
		//	break;
		//ReadPerson(reader, person);
		//operator >>(reader, person);
		reader >> person;
		if (reader.fail())
			break;

		people[counter] = person;
		counter++;

		if (counter == array_size)
		{
			std::cout << "Warning: File is larger then we can load" << std::endl;
			break;
		}
	}

	reader.close();

	return counter;
}

void WritePeopleToFile(Person* people, int count)
{
	std::ofstream writer;
	writer.open("Data\\PeopleDB.txt");

	for (int i = 0; i < count; i++)
	{
		Person person = people[i];
		//person.Write(writer);
		//WritePerson(writer, person);
		//operator <<(writer, person);
		writer << person;

		writer << "\n";
	}

	writer.close();
}
