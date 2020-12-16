#pragma once

#include <string>

class Person
{
private:
	std::string firstName;
	std::string lastName;

public:
	Person();
	Person(std::string firstName, std::string lastName);

	std::string getFirstName();
	std::string getLastName();
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);

	void setName(std::string firstName, std::string lastName);

	bool Read(std::ifstream& stream);
	void Write(std::ofstream& stream);
};

std::ifstream& ReadPerson(std::ifstream& stream, Person& person);
std::ofstream& WritePerson(std::ofstream& stream, Person& person);

std::ifstream& operator >> (std::ifstream& stream, Person& person);
std::ofstream& operator << (std::ofstream& stream, Person& person);

int ReadPeopleFromFile(Person* people, int array_size);
void WritePeopleToFile(Person* people, int count);
