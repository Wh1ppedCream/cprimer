/* Write a funtion that takes a string representing a name and two other
	strings representing a prefix, such as “Mr.” or “Ms.” and a suffix, such as “Jr.” or
	“III”. Using iterators and the insert and append functions, generate and return a
	new string with the suffix and prefix added to the given name. */


#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

string compl_name(const string &name, const string &pref, const string &suff) {
	string str = " " + name + " ";
	str.append(suff);
	str.insert(0, pref);
	return str;
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
