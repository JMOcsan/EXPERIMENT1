    
#include <iomanip>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

	double m, d;
	double v;
	cout << "Input mass in grams and density in grams per cubic centimeters." << endl;
	cin >> m >> d;

	v = m / (4 * d);

	cout << "\nThe volume is.." << endl;
	cout << setprecision(2) << v << " " << "cubic centimeter" << endl;	 
getch();
return 0;
}
