#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string text;
	//cout << "input text: ";
	//cin >> text;
	text = "abc";
	cout << "you entered: " << text << endl;

	int number = 5;

	ifstream inFile;
	inFile.open("C:\\Lesson_17\\testfile.txt");
	inFile.seekg(4, ios_base::beg);

	int wordCounter = 0;
	while (!inFile.eof())
	{
		if (wordCounter == 1)
		{
			inFile.seekg(-9, ios_base::cur);
		}

		if (wordCounter == 6)
		{
			inFile >> number;
			cout << "file contains the following number: " << number << endl;
		}
		else
		{
			inFile >> text;
			cout << "file contains the following text: " << text << endl;
		}
		wordCounter++;

		if (inFile.fail())
		{
			cout << "error reading the file" << endl;
			break;
		}
	}

	ofstream outFile;
	outFile.open("C:\\Lesson_17\\testfile.txt");
	outFile << "you entered: " << text << endl;
	outFile.flush();
	outFile << "the correct number is: " << number << endl;
	outFile.flush();
	outFile.write("some text ", 10);
	outFile.write("some text ", 10);
	outFile.write("some text ", 10);
	outFile.flush();
	outFile.write("some text ", 10);
	outFile.write("some text ", 10);
	outFile.write("some text ", 10);
	outFile.close();

	fstream file;
	file.open("C:\\Lesson_17\\testfile.txt", ios::in | ios::out);
	file >> text;
	file.seekp(0, ios_base::end);
	file << "abc";
	file.close();

	return 0;
}
