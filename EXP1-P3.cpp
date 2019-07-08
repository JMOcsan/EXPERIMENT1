#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	double nbal, pay, d1, d2, avgd, inte, iup;
	cout << "Enter current net balance." << endl;
	cin >> nbal;
	cout << "\nEnter payment." << endl;
	cin >> pay;
	cout << "\nEnter days in billing cycle." << endl;
	cin >> d1;
	cout << "\nEnter days before the billing cycle." << endl;
	cin >> d2;
	cout << "\nEnter monthlty interest." << endl;
	cin >> inte;
	
	avgd = (nbal * d1 - pay *d2) / d1;
	
	iup = (avgd * inte);
	
	cout << "Current interest is: " << setprecision(3) << "P" << iup;
}
