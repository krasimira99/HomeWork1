#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int width;
	cin >> width;
	if (width % 2 != 0 && width != 1)
	{
		for (int i = 0; i < width; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if (j==i || i== width-1-j || i==0 || i==width-1)
				{
					cout << "*";
				}
				else cout << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Invalid number";
	}
	return 0;
}