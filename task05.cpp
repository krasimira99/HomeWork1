#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int sum, n, m, counter = 0;
	cin >> n >> m;
	for (n; n <= m; n++)
	{
		sum = 0;
		for (int i = n/2; i > 0; i--)
		{
			bool delitel = (n % i == 0);
			if (delitel)
			{
				sum += i;
			}
		}

		bool isPrimeNumber = true;

		for (int i = sum - 1; i >= 2; i--)
		{
			if (sum % i == 0)
			{
				isPrimeNumber = false;
			}
		}

		if (sum == 2)
		{
			isPrimeNumber = true;
		}

		if (isPrimeNumber)
		{
			counter++;
		}
	}

	cout << counter;
	


    
	return 0;
}