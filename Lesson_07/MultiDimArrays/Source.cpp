#include <iostream>
#include <string>

using namespace std;

//void print(int arrayOfNumbers[], int length)
//{
//	for (int i = 0; i < length; i++)
//		cout << arrayOfNumbers[i] << " ";
//	cout << endl;
//}

void print(int* arrayOfNumbers, int length)
{
	for (int i = 0; i < length; i++)
		cout << arrayOfNumbers[i] << " ";
	cout << endl;
}

void print(string* arrayOfWords, int length)
{
	for (int i = 0; i < length; i++)
		cout << arrayOfWords[i] << " ";
	cout << endl;
}

void print(char* arrayOfLetters, int length)
{
	for (int i = 0; i < length; i++)
		cout << arrayOfLetters[i];
	cout << endl;
}

void print(const char* arrayOfLetters)
{
	for (int index = 0; arrayOfLetters[index] != '\0'; index++)
		cout << arrayOfLetters[index];
	cout << endl;
}


// We can't pass int[][] to this function. Will come back later
//void print(int** matrixOfNumbers, int rows, int columns)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < columns; j++)
//			cout << matrixOfNumbers[i][j] << " ";
//		cout << endl;
//	}
//	cout << endl;
//}

int main()
{
	string words[5];
	words[0] = "This";
	words[1] = "is";
	words[2] = "a";
	words[3] = "sentence";
	words[4] = ".";
	print(words, 5);

	string words2[3] = { "This", "is", "." };
	print(words, 2);

	const int rows = 3, columns = 6;

	int matrix[rows][columns] = { 0 };
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			matrix[i][j] = i * j;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	//print(matrix, rows, columns);


	int matrix2[rows * columns];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			int index = i * columns + j;
			matrix2[index] = i * j;
			cout << matrix2[index] << " ";
		}
		cout << endl;
	}
	print(matrix2, rows * columns);


	// 3 dimensional array
	int cube[3][3][3];
	cube[0][1][1] = 7;


	// array of char-s
	char word1[] = { 'a', 'b', 'c', '\0' };
	char word2[] = "abc";

	print(word1, 3);
	print(word1);

	word1[1] = 'd';
	word2[1] = 'd';

	char* word3 = word1;
	word3[2] = 'e';

	const char* word4 = "another_word sodjfh kjkfns lkjs";
	print(word4);

	return 0;
}

