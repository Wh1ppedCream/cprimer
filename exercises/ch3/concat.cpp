#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string whole_str, curr_str;
	while (cin >> curr_str) {
		whole_str += curr_str + " ";
	}
	cout << whole_str << endl;
	return 0;
}
