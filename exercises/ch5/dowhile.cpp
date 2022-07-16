#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1, s2;

	do {
		cout << "enter two strings: ";
		cin >> s1 >> s2;
		if (s1 >= s2) {
			cout << "s1 is greater" << endl;
		} else {
			cout << "s2 is greater" << endl;
		}
	} while (cin);
	return 0;
}
