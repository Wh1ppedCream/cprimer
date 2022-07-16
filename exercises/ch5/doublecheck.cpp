#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1, s_curr;
	int rep = 0;
	cin >> s1;
	cin >> s_curr;
	do {
		if (isupper(s_curr[0])) {	
			if (s_curr == s1) {
				cout << "repeated word: " << s1 << endl;
				++rep;
			} else {
				s1 = s_curr;
			}
		} else {
			continue;
		}
	} while (cin >> s_curr);
	if (rep == 0)
		cout << "no repeats";
	return 0;
}
