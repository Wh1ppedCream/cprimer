#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool iscapital(const string &str) {
	for (auto c : str) {
		if (isupper(c)) {
			return true;
		}
	}
	return false;
}

void upper_case(string &str) {
	for (auto &c : str) {
		if (islower(c)) {
			c = toupper(c);
		} else {
			continue;
		}
	}
}
	
int main()
{
	string ex_str;
	cout << "enter a string: ";
	cin >> ex_str;
	cout << endl;
	cout << "does it contain a capital? : " << iscapital(ex_str) << endl;
	cout << "changing case : ";
	upper_case(ex_str);
	cout << ex_str << endl;
	return 0;
}
