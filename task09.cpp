#include "pch.h"
#include<iostream>
using namespace std;
int main()
{
	int n, br = 0, d;
	cin >> n;
	if (n < 10 || n>30000) { cout << "False" << endl; }
	else
	{
		while (n)
		{
			d = n % 10;
			br++;
			n = n / 10;
		}
		cout << "The number of digits is " << br << endl;
	}
	return 0;
}
