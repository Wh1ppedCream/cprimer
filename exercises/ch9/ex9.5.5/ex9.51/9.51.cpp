
#include "datecls.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() 
{
	std::string calender;
	cout << "insert date";
	getline(cin, calender);
	Date dat(calender);
	cout << "the date is:" << endl;
	print_date(cout, calender) << endl;
	return 0;
}
