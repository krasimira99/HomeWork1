#include "pch.h"
#include<iostream>
using namespace std;
int main()
{
	int value;
	int sum = 0;
	int number = 0;
	while (true)
	{
		cin >> value;
		sum = sum + value;
		number++;
		if (number == 5 || sum >= 234) break;
	}
	cout << number << ", " << sum << endl;
	return 0;
}