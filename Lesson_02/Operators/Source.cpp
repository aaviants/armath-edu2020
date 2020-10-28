#include <iostream>

int main()
{
	// constants
	const double pi = 3.1415;
	// pi = 1.2;				// this is not possible

	// int operators
	int i = 11;
	int j = 3;
	int k = i / j;
	int m = i % j;
	
	std::cout << i << " " << j << " " << k << " " << m << std::endl;
	

	i += 5;				// same as i = i + 5
	j -= 2;
	k = i / j;
	m = i % j;

	std::cout << i << " " << j << " " << k << " " << m << std::endl;

	i = i + 1;
	i += 1;
	
	i = 0;
	int var1 = i++;
	int var2 = ++i;
	std::cout << "i++ = " << var1 << " and ++i = " << var2 << std::endl;

	// boolean operators
	bool b1 = (i == j);
	bool b2 = (i >= j);
	bool b3 = (i != j);

	bool b4 = !b1;

	bool bOR = b1 || b2;
	bool bAnd = b1 && b2;
	bool bXor = b1 ^ b2;			// (b1 == true && b2 == true) || (b1 == false && b2 == false)
									// b1 == b2


	
	float f = 1.5;
	float g = 50.2;

	g += f;


	i = 5;
	f = 7.1f;

	

	//


	return 0;
}