    
#include <iomanip>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	double p1, p2, p3, p4, t1, t2, t3, t4;
	cout << "TICKET PRICES     \t   Number of Tickets sold    \t Total Sales"<<endl;
	cout << "Box Ticket cost: ";
	cout << "$250 ";
	cout <<  "     Number of Tickets sold:";
	cin >> p1;
	t1 = 250 * p1;
	cout << " \t\t\t\t\t\t\t Total:" << setprecision(2)<<fixed << t1 <<endl<<endl;
	cout << "Sideline Ticket cost: ";
	cout << "$100 ";
	cout <<  "Number of Tickets sold:";
	cin >> p2;
	t2 = 100 * p2;
	cout << " \t\t\t\t\t\t\t Total:" << setprecision(2)<<fixed << t2 <<endl<<endl;
	cout << "Premium ticket cost: ";
	cout << "$50 ";
	cout <<  "  Number of Tickets sold:";
	cin >> p3;
	t3 = 50 * p3;
	cout << " \t\t\t\t\t\t\t Total:" << setprecision(2)<<fixed << t3 <<endl<<endl;
	cout << "Gen Ad ticket cost: ";
	cout << "$25";
	cout <<  "    Number of Tickets sold:";
	cin >> p4;
	t4 = 25 * p4;
	cout << " \t\t\t\t\t\t\t Total:" << setprecision(2)<<fixed << t4 <<endl<<endl;	 
getch();
return 0;
}
