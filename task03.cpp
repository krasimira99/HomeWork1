#include "pch.h"
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int number, a, counter=0 ,m ,sum=0 ;
	cout << "Enter a number:";
	cin >> number;
	m = number;
	while (m)
	{
		m = m / 10;
		counter++;
	}
	m = number;
	while (number)
	{
		a = number % 10;
		sum = sum + pow(a, counter);
		number = number / 10;
	}
	if (sum == m) cout << "The number is Narcissistic" << endl;
	else cout << "The number is not Narcissistic" << endl;
	
	return 0;
}

