#pragma once

#include <iostream>

using namespace std;

struct Statistics
{
	double sum;
	double avg;
	double prod;
};

double sum(double* arr, int size)
{
	double result = 0;

	for (int i = 0; i < size; i++)
		result += arr[i];

	return result;
}
double avg(double* arr, int size)
{
	double result = 0;

	result = sum(arr, size);
	result /= size;

	return result;
}
double prod(double* arr, int size)
{
	double result = 1;

	for (int i = 0; i < size; i++)
		result *= arr[i];

	return result;
}


void clac_statistics(double* arr, int size, double& s, double& a, double& p)
{
	s = 0;
	p = 1;

	for (int i = 0; i < size; i++)
	{
		s += arr[i];
		p *= arr[i];
	}
	a = s / size;
}

Statistics clac_statistics(double* arr, int size)
{
	Statistics stat = {};
	stat.sum = 0;
	stat.prod = 1;

	for (int i = 0; i < size; i++)
	{
		stat.sum += arr[i];
		stat.prod *= arr[i];
	}
	stat.avg = stat.sum / size;

	return stat;
}

void clac_statistics(double* arr, int size, Statistics* stat)
{
	(*stat).sum = 0;
	stat->prod = 1;		// same as (*stat).prod = 1;

	for (int i = 0; i < size; i++)
	{
		stat->sum += arr[i];
		stat->prod *= arr[i];
	}
	stat->avg = stat->sum / size;
}

void clac_statistics(double* arr, int size, Statistics& stat)
{
	stat.sum = 0;
	stat.prod = 1;

	for (int i = 0; i < size; i++)
	{
		stat.sum += arr[i];
		stat.prod *= arr[i];
	}
	stat.avg = stat.sum / size;
}

void print(const Statistics& stat)
{
	//stat.avg = 1;

	cout << "sum=" << stat.sum << endl << "avg=" << stat.avg << endl << "prod=" << stat.prod << endl;
}

void print(const Statistics* stat)
{
	//stat->avg = 1;

	cout << "sum=" << stat->sum << endl << "avg=" << stat->avg << endl << "prod=" << (*stat).prod << endl;
}
