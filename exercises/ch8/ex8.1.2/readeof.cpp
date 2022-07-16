#include <iostream>
#include <string>

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
	readnprint(cin);
	return 0;
}
