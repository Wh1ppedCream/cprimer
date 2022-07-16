#include <iostream>
#include <string>
#include "sales_data.h"

using std::string;

int main()
{

	Sales_data book1, books;
	if (std::cin >> book1.bookNo >> book1.units_sold >> book1.price_ave)
	{
		book1.revenue = book1.price_ave * book1.units_sold;
		
		while (std::cin >>  books.bookNo >> books.units_sold
				>> books.price_ave) {
			books.revenue = books.price_ave * books.units_sold;
			if (book1.bookNo == books.bookNo) {
				
				book1.units_sold = book1.units_sold + books.units_sold;
				book1.revenue = book1.revenue + books.revenue;
				book1.price_ave = book1.revenue / book1.units_sold;

			} else {

				std::cout << book1.bookNo << " "  << book1.units_sold 
                        		<< " " << book1.revenue  << " " << book1.price_ave  << std::endl;
				book1.bookNo = books.bookNo;
				book1.units_sold = books.units_sold;
				book1.revenue = books.revenue;
				book1.price_ave = books.price_ave;

			}				
		}
		std::cout << book1.bookNo << " "  << book1.units_sold + book1.units_sold
		       	<< " " << book1.revenue << " " << book1.price_ave << std::endl;

	} else {
		std::cerr << "no input" << std::endl;
		return -1;
	}
}
