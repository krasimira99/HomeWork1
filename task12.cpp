#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int input;
	cin >> input;
	int currentHeight = 0;
	int day = 0;
	while (currentHeight<input)
	{
		currentHeight += 2;
		day++;
		if (currentHeight >= input) break;
		currentHeight--;
	}
	cout << day << endl;
	return 0;

}