/* Rewrite the bookstore problem from § 1.6 (p. 24) using a vector to
   hold the transactions and various algorithms to do the processing. Use sort with
   your compareIsbn function from § 10.3.1 (p. 387) to arrange the transactions in order,
   and then use find and accumulate to do the sum. */

#include <iostream>
#include <algorithm>
#include <vector>
#include "sales_data.h"
#include <iterator>
#include <numeric>
#include <string>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::istream_iterator;
using std::ostream_iterator;

//prints the values in a vector
void print_vec(std::vector<Sales_item> &vec) {
        cout << "values in the vector now: " << endl;
        for (auto &n : vec) {
        	cout << n << endl;
	}
        cout << endl;
}


int main()
{

	istream_iterator<Sales_item> in(cin), eof;
	ostream_iterator<Sales_item> out(cout, "\n");

	vector<Sales_item> trans;        
	vector<Sales_item> finish;

	while(in != eof) {
		trans.push_back(*in++);
	}
	print_vec(trans);        //
	sort(trans.begin(), trans.end(), compareIsbn);
	print_vec(trans);        //
		
	Sales_item item(trans[0].isbn());
	std::accumulate(trans.begin(), trans.end(), item, [&finish, &item] (Sales_item& fir, Sales_item& sec) {
			if (fir.isbn() == sec.isbn()) {
				return (fir + sec);
			} else {
				finish.push_back(fir);
				return sec;
			}
		}
	);
	print_vec(finish);
	return 0;
}
	
	

