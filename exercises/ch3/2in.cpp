#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	if (str1 == str2) {
		cout << "equal strings" << endl;
		return 0;
	} else {
		if (str1 > str2) {
			cout << str1 << " the first string is greater" << endl;
		} else {
			cout << str2 << " second string is greater" << endl;
		}
		return 0;
	}
}
