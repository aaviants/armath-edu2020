#include <iostream>
#include <fstream>

using namespace std;

enum class Operation
{
	Exit,

	AddPerson,
	SearchPerson,

};

Operation getOperation()
{
	cout << "Enter 1 for Adding a person" << endl;
	cout << "Enter 2 for Searching a person" << endl;

	cout << "Enter 0 to Exit" << endl;

	int op;
	cout << "What's your choice: ";
	cin >> op;
	cout << endl;

	return (Operation)op;
}

void AddPerson()
{
	string name;

	cout << "Enter the name to add: ";
	cin >> name;

	fstream outFile;
	outFile.open("C:\\Lesson_17\\people.txt", std::fstream::out | std::fstream::app);

	outFile << name << endl;
	outFile.close();
}

void SearchPerson()
{
	string name;

	cout << "Enter the name to search: ";
	cin >> name;

	fstream inFile;
	bool found = false;
	inFile.open("C:\\Lesson_17\\people.txt", std::fstream::in);

	while (!found && !inFile.fail() && !inFile.eof())
	{
		string tmp;
		inFile >> tmp;

		if (tmp == name)
			found = true;
	}
	inFile.close();

	if (found)
		cout << name << " is found" << endl;
	else
		cout << name << " is NOT found" << endl;
}

int main()
{
	cout << "Person Database started" << endl << endl;

	Operation op = getOperation();

	while (op != Operation::Exit)
	{
		switch (op)
		{
		case Operation::Exit:
			break;
		case Operation::AddPerson:
			AddPerson();
			break;
		case Operation::SearchPerson:
			SearchPerson();
			break;
		default:
			break;
		}
		cout << endl;

		op = getOperation();
	}

	cout << endl << "Person Database exited" << endl;

	return 0;
}
