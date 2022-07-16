#include <iostream>
#include <string>
#include "sales_data.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main()
{

	Sales_data book1, books;
	if (cin >> book1.bookNo >> book1.units_sold >> book1.price_ave)
	{
		book1.revenue = book1.price_ave * book1.units_sold;
		
		while (cin >>  books.bookNo >> books.units_sold
				>> books.price_ave) {
			books.revenue = books.price_ave * books.units_sold;
			if (book1.bookNo == books.bookNo) {
				
				book1.units_sold = book1.units_sold + books.units_sold;
				book1.revenue = book1.revenue + books.revenue;
				book1.price_ave = book1.revenue / book1.units_sold;

			} else {

				cout << book1.bookNo << " "  << book1.units_sold 
                        		<< " " << book1.revenue  << " " << book1.price_ave  << endl;
				book1.bookNo = books.bookNo;
				book1.units_sold = books.units_sold;
				book1.revenue = books.revenue;
				book1.price_ave = books.price_ave;

			}				
		}
		cout << book1.bookNo << " "  << book1.units_sold + book1.units_sold
		       	<< " " << book1.revenue << " " << book1.price_ave << endl;

	} else {
		cerr << "no input" << endl;
		return -1;
	}
}
