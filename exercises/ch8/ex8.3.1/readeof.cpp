#include <iostream>
#include <string>
#include <sstream>

using std::istream;
using std::ostream;
using std::cin;
using std::endl;
using std::cout;
using std::string;

istream& readnprint(istream& is) {
	string curr_str;
	while (is >> curr_str) {
		cout << curr_str << endl;
	}
	is.clear();
	return is;
}

int main()
{
	string str;
	getline(cin, str);
	std::stringstream record(str);
	readnprint(record);
	return 0;
}
