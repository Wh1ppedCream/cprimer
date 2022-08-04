// Write a program using stream iterators to read a text file into a vectorof strings.


#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <fstream>

using std::istream_iterator;
using std::string;
using std::cin;
using std::cout;
using std::endl;

void file_add(std::vector<string> &vec, const string &filename) {
	std::ifstream in(filename);
	istream_iterator<string> str_in(in), eof;
	while(str_in != eof) {
		vec.push_back(*str_in++);
	}
}

//prints the values in a vector
void print_vec(std::vector<string> &vec) {
        cout << "values in the vector now: " << endl;
        for (auto &n : vec) {
                cout << n << " ";
        }
        cout << endl;
}


int main(int argc, char *argv[])
{
	std::vector<string> vstr;
	file_add(vstr, argv[1]);
	print_vec(vstr);
	return 0;
}

