#include <iostream>

using namespace std;


void print(int value);
int sum_1_N(int N);
void printFibonacciSeq(int first, int second, int counter);
void printFibonacciSeq(int counter);
int printFibonacciSeq_2(int counter);

int global_counter = 0;
int sumCounter = 0;

// namespaces
namespace my_namespace
{
	int Subtract(int number1, int number2);


	namespace another_one
	{
		int Add(int number1, int number2)
		{
			int result = number1 + number2;
			print(result);

			Subtract(3, 1);
			global_counter++;
			return result;
		}
	}


	int Subtract(int number1, int number2)
	{
		return number1 - number2;
		global_counter++;
	}
}

// global functions
void f()
{
	cout << "f";

	global_counter++;

	my_namespace::another_one::Add(1, 2);
}

void print(int value)
{
	cout << value << endl;
}
void print(string value)
{
	cout << value << endl;
}
void print(double value)
{
	cout << value << endl;
}

using namespace my_namespace;



int main()
{
	string text = "text";
	cout << "A";
	cout << my_namespace::another_one::Add(2, 5);
	cout << my_namespace::Subtract(2,5);
	f();

	global_counter++;

	// sum of 1 - 10000 numbers
	int sum = 0;
	for (int i = 1; i <= 10000; i++)
		sum += i;

	cout << sum_1_N(100) << endl;

	// 1, 1, 2, 3, 5, 8, 13, ...
	printFibonacciSeq(10);

	cout << "printFibonacciSeq_2" << endl;
	printFibonacciSeq_2(10);
	//for (int i = 1; i <= 10; i++)
	//	cout << printFibonacciSeq_2(i) << endl;

	cout << "Global Counter = " << global_counter << endl;
	cout << "Sum Counter = " << sumCounter << endl;

	return 0;
}



// recursive function
int sum_1_N(int N)
{
	int localCounter = 0;
	localCounter++;

	sumCounter++;
	if (N == 0)
		return 0;

	int innerSum = sum_1_N(N - 1);
	int value = N + innerSum;
	return value;
}

int printFibonacciSeq_2(int counter)
{
	int sim = 0;

	if (counter == 1 || counter == 2) {
		sim = 1;
	}
	else {
		sim = printFibonacciSeq_2(counter - 1) + printFibonacciSeq_2(counter - 2);
	}

	cout << counter << " = " << sim << endl;
	return sim;
}

void printFibonacciSeq(int counter)
{
	printFibonacciSeq(1, 1, counter);
}

void printFibonacciSeq(int first, int second, int counter)
{
	cout << first << endl;
	if (counter < 2)
		return;

	int next = first + second;
	printFibonacciSeq(second, next, --counter);
}
