#include <iostream>
#include <string>
#include <sstream>

using std::istream;
using std::ostream;
using std::cin;
using std::endl;
using std::cout;
using std::string;

void readnprint(istream& is) {
	string curr_str;
	while (getline(is, curr_str)) {
		string word;
		std::istringstream record(curr_str);
		while (record >> word) {
			cout << word << endl;
		}
	}
	is.clear();
}

int main()
{
	readnprint(cin);
	return 0;
}
