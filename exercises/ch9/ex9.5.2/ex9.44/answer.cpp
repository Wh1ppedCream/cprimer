#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::cin;

void changeSubstr(string &s, const string &oldval, const string &newval) {
	if (s.empty() || oldval.empty() || newval.empty()) return;
	auto oldsiz = oldval.size();
	int size = s.size();
	for (int i = 0; i < size; ++i) {
		if (s[i] == oldval[0]) {
			string str(s, i, oldsiz);
			if (str == oldval) {
				s.replace(i, oldsiz, newval);
			}
		}
	}
}

int main()
{
	string s = "the ch is good cooked. ch makes for good fried food";
	string oldval = "ch";
	string newval = "chicken";
	cout << "The string is initially: " << endl;
	cout << s << endl;

	changeSubstr(s, oldval, newval);
	cout << s << endl;
	return 0;
}
