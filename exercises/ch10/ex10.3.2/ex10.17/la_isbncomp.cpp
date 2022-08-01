/*Rewrite exercise 10.12 from § 10.3.1 (p. 387) to use a lambda in the call
  to sort instead of the compareIsbn function. */

#include <iostream>
#include <algorithm>
#include <vector>
#include "sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
	std::vector<Sales_data> isbns;
	isbns.push_back(Sales_data("0-201-78345-X", 20.00, 3));
	isbns.push_back(Sales_data("0-201-11111-M", 20.00, 3));
	isbns.push_back(Sales_data("0-201-783453-X", 20.00, 3));
	isbns.push_back(Sales_data("0-201-7834-X", 20.00, 3));
	cout << "members are: " << endl;
	for (auto &sls : isbns) {
		print(cout, sls) << endl;;
	}

	sort(isbns.begin(), isbns.end(), 
			[] (Sales_data& s1, Sales_data& s2) {
				return (s1.isbn() > s2.isbn());
				}
	    );




	cout << "after sorting: " << endl;
	for (auto &sls : isbns) {
		print(cout, sls) << endl;
	}
	return 0;
}
