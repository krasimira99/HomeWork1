#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int n, S = 1, i;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		S *= i;
	}
	cout << S << endl;
	return 0;
}


