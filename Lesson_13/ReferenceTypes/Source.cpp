#include <iostream>

#include "statistics.h"

using namespace std;

const double pi = 3.14;
const double pi_2 = 3.1415;
//int K = 7;


void inputNumber(int& number)
{
	cout << "Input number: " << endl;
	number = 15;
}

void inputNumber(int* pnumber)
{
	cout << "Input number: " << endl;
	cin >> *pnumber;
}

void inputNumbers(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Input array[" << i << "]: ";
		cin >> arr[i];
	}
}


void outputNumber(int number)
{
	cout << number<<endl;
}

void outputNumbers(double* arr, int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << endl;
}

int main()
{
	// const
	// ref type
	// scope of variables
	// cast operator

	int n = 1;		// allocates 4 bytes, writes 10 into that
	n = 2;

	int* pn = &n;
	int& m = n;

	m = 3;

	int* pk;		// this is OK
	pk = &m;
	pk = (int*)10;

	//int& k;		// = m is required



	int K = 8;

	const int N = 2;
	//N = 12;
	double numbers[N];

	inputNumber(n);
	outputNumber(n);

	inputNumbers(numbers, N);
	// K = 14
	outputNumbers(numbers, N);

	n = N;

	double s1 = sum(numbers, N);
	double a1 = avg(numbers, N);
	double p1 = prod(numbers, N);
	cout << "sum=" << s1 << endl << "avg=" << a1 << endl << "prod=" << p1 << endl;

	double s2, a2, p2;
	clac_statistics(numbers, N, s2, a2, p2);
	cout << "sum=" << s2 << endl << "avg=" << a2 << endl << "prod=" << p2 << endl;

	Statistics stat1 = clac_statistics(numbers, N);
	print(stat1);

	Statistics stat2;
	clac_statistics(numbers, N, &stat2);
	print(&stat2);

	Statistics stat3;
	clac_statistics(numbers, N, stat3);
	print(stat3);


	return 0;
}
