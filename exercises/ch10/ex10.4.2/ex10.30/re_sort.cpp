/* Use stream iterators, sort, and copy to read a sequence of integers
   from the standard input, sort them, and then write them back to the standard output. */

#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

void read_write(std::istream& is, std::ostream& os) {
	std::vector<int> vint;
	std::istream_iterator<int> in(is), eof;
	std::ostream_iterator<int> out(os, " ");
	while (in != eof) {
		vint.push_back(*in++);
	}
	sort(vint.begin(), vint.end(), [] (int a, int b) {return a > b;});
	copy(vint.begin(), vint.end(), out);
}


int main()
{
	read_write(cin, cout);
	return 0;
}

