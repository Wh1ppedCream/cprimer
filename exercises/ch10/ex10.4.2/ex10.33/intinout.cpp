#include <iostream>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void intfiles(const string& read, const string &write1, const string &write2) {
	std::ifstream in(read);
	std::ofstream out1(write1), out2(write2);
	std::istream_iterator<int> ints(in), eof;
	std::ostream_iterator<int> even(out1, " "), odd(out2, " ");
	int curr;
	while (ints != eof) {
		curr = *ints;
		if ((curr % 2) == 0) {
			even = curr;
		} else {
			odd = curr;
		}
		++ints;
	}
}


int main(int argc, char *argv[])
{
	intfiles(argv[1], argv[2], argv[3]);
	return 0;
}

