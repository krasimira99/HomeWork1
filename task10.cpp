#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int n;
	float avr, digit = 0, sum = 0;
	do
	{    
		cout << "Enter number: ";
		cin >> n;
		if (n>=1 && n<=200)
		{
			digit++;
			sum += n;
			avr = sum / digit;
		}

	} while (n >= 1 && n<=200);
	cout << "The digit is:" << digit << endl;
	cout << "The sum is: " << sum << endl;
	cout << "The average is: " << avr << endl;
	
	
	return 0;
}

