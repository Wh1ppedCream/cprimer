#include <iostream>
#include <fstream>
#include "sales_data.h"

using std::endl;
using std::ofstream;


void processing(char *infile, char *outfile)
{
	Sales_data total; 					// variable to hold the running sum
	std::ifstream input(infile);
	ofstream output(outfile, ofstream::app);
	if (read(input, total)) { 				// read the first transaction
		Sales_data trans; 				// variable to hold data for the next transaction
		while(read(input, trans)) {			// read the remaining transactions
			if (total.isbn() == trans.isbn())       // check the isbns
				total.combine(trans); 		// update the running total
			else {
				print(output, total) << endl; 	// print the results
				total = trans;			// process the next book
			}
		}
		print(output, total) << endl;			// print the last transaction
	} else {						// there was no input
	std::cerr << "No data?!" << endl;				// notify the user
	}
}

int main(int argc, char *argv[]) {
	processing(argv[1], argv[2]);
	return 0;
}

