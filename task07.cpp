#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	bool m4 = m % 4 == 0;
	bool m100 = m % 100 == 0;
	bool m400 = m % 400 == 0;
	switch (n) {
	case 1: cout << "January ";
		break;
	case 2: cout << "February ";
		break;
	case 3: cout << "March ";
		break;
	case 4: cout << "April ";
		break;
	case 5: cout << "May ";
		break;
	case 6: cout << "June ";
		break;
	case 7: cout << "July ";
		break;
	case 8: cout << "August ";
		break;
	case 9: cout << "September ";
		break;
	case 10: cout << "October ";
		break;
	case 11: cout << "November ";
		break;
	case 12: cout << "December ";
		break;
	default: cout << "False" << endl;
		break;
	}
	switch (n) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "has 31 days " << endl;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "has 30 days"<< endl;
		break;
	case 2: if (((m4 && !m100) || m400)) cout << "has 29 days" << endl;
			else cout << "has 28 days" << endl;
		break;
	default: cout << "False" << endl;
		break;
	} 
	return 0;
}
