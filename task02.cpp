#include "pch.h"
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	float value, NofMonths, Irate, MIrate, Mpayment, q, TotalAm;
	cout << "Value:";
	cin >> value;
	cout << "Interest period:";
	cin >> NofMonths;
	cout << "Interest rate:";
	cin >> Irate;
	cout << endl;
	if (value <= 0 || Irate < 0) {
		cout << "False" << endl;
		return 0;
	}
	MIrate = Irate / NofMonths;
	q = 1 + (MIrate / 100);
	TotalAm = value * pow(q, NofMonths);
	Mpayment = TotalAm / NofMonths;
	cout << "Monthly interest rate: " << MIrate << endl;
	cout << "Monthly payment: " << Mpayment << endl;
	cout << "The total amount to be returned:" << TotalAm << endl;
   return 0;
}