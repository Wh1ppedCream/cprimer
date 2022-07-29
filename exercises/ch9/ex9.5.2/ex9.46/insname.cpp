/*      Rewrite the previous exercise using a position and length to manage
	the strings. This time use only the insert function.*/


#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

string compl_name(string name, const string &pref, const string &suff) {
	int size = name.size();
	name.insert(size, ' ' + suff);
	name.insert(0, pref + ' ');
	return name;
}

int main()
{
	string name, pref, suff;
	cout << "enter a name: ";
	cin >> name;
	cout << "\n" << "enter a suffix: ";
	cin >> suff;
	cout << "\n" << "enter a prefix: ";
	cin >> pref;
	cout << endl;

	string newname = compl_name(name, pref, suff);
	cout << "the fullname is: " << newname << endl;
	return 0;
}
