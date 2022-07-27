#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

void strchange(string &s, string &oldval, string &newval) {
	int oldlen = oldval.size();
	if (s.empty() || oldval.empty() || s.size() < oldlen) return;
	cout << "the original string is: " << s << endl;
	int newlen = newval.size();
	auto iter = s.begin();
	string str(s, iter, oldlen);
	iter += oldlen;

	while (iter != s.end()) {
		if (str == oldval) {
			iter = s.replace(iter, iter + oldlen, newval);
		} else {
			str.erase(0, 1);
			str.append(oldlen, *iter);
			++iter;
		}
	}
	cout << "the new string is " << s << endl;
}


int main()
{	
	string str, rep, newstr;
	cout << "enter the string which will be replaced: ";
	cin >> rep;
	cout << endl;
	cout << "enter the string which will be entered: ";
	cin >> newstr;
	cout << endl;

	cout << "enter the whole string: ";
	getline(cin, str);
	cout << endl;
	
	strchange(str, rep, newstr);
	return 0;
}
