#include <iostream>

using namespace std;


// return_value function_name(arg1, arg2, arg3, ..., argN)

bool checkIfPrinterExists();
void print_text(string text);
void print_int(int integer_number);
void print_double(double real_number);
bool print_text_and_return_true_if_succeeded(string text);
double my_pow(double base, int degree);


void print(string text)
{
	cout << text << endl;
}

//void print(string text, int count)
//{
//	cout << text << endl;
//}

void print(int number)
{
	cout << number << endl;
}

void print(int number, int count)
{
	for (int i = 0; i < count; i ++)
		cout << number << endl;
}

void print(double number)
{
	cout << number << endl;
}

void print(bool b)
{
	string value;
	if (b)
		value = "true";
	else
		value = "false";

	print(value);
}

int main()
{
	if (false)
	{
		double a = 0.0;
		int b = 0;

		cout << "input base: ";
		cin >> a;
		cout << "input degree: ";
		cin >> b;

		double pow_base_deg = my_pow(a, b);
		cout << "result = " << my_pow(pow_base_deg, 2) << endl;


		cout << "result = " << my_pow(my_pow(a, b), 2) << endl;
	}

	if (true)
	{
		print_text("my name is Ara");

		//bool b = print_text_and_return_true_if_succeeded("another text goes here");
		//if (b)
		if (print_text_and_return_true_if_succeeded("another text goes here"))
		{
			cout << "print succeeded" << endl;
		}
		else
		{
			cout << "print failed" << endl;
		}

		print_double(3.14);
		print_int(3);

		string text = "text";
		print(text);
		print(3.14);
		print(3);
		print(true);


		print(5);
		print(5, 3);

		//print(text, 3);
	}

	return 0;
}



bool checkIfPrinterExists()
{
	return false;
}


void print_text(string text)
{
	bool printer_exists = checkIfPrinterExists();
	if (!printer_exists)
		return;

	cout << text << endl;
}

void print_int(int integer_number)
{
	cout << integer_number << endl;
}

void print_double(double real_number)
{
	cout << real_number << endl;
}


bool print_text_and_return_true_if_succeeded(string text)
{
	bool printer_exists = checkIfPrinterExists();
	if (!printer_exists)
		return false;

	cout << text << endl;

	return true;
}


double my_pow(double base, int degree)
{
	if (degree < 0)
		return 0.0;

	// 0 + base + base + base
	// 1 * base * base * base

	double result = 1;

	for (int i = 0; i < degree; i++)
	{
		result *= base;		// result = result * base
	}

	return result;

	// code after return
	result *= base;

	return result;
}
