/* Write a function that takes three strings, s, oldVal, and newVal.
   Using iterators, and the insert and erase functions replace all instances of oldVal
   that appear in s by newVal. Test your function by using it to replace common abbre-viations,
   such as “tho” by ”though” and ”thru” by “through”. */

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void val_rep(string &s, string &oldval, string &newval) {
	if (s.empty() || oldval.empty()|| s.size() < oldval.size()) return;
	cout << "old string: " << s << endl;
	auto iter = s.begin();
	int oldsiz = oldval.size();
	int newsiz = newval.size();
	string str(s.begin(), s.begin() + oldsiz);
	while (iter + 1 != s.end()) {
		if (str == oldval) {
			iter = s.erase(iter - 1, iter + oldsiz - 1);
			iter = (s.insert(iter, newval.begin(), newval.end())) + newsiz;
		} else {
			str.erase(str.begin());
			str.append(iter, iter + 1);
			++iter;
		}
		str.erase(str.begin());
		str.append(iter, iter + 1);
	}
	cout << "new string: " << s << endl;
}


int main()
{
	string line, rep, newval;
	cout << "enter line to be replaced: ";
	while (getline(cin, line, '\n')){
		if (line.empty()){
			continue;
		}
		cout << "enter string to replace: ";
		cin >> rep;
		cout << endl;
		cout << "enter string to be inserted: ";
		cin >> newval;
		cout << endl;
		val_rep(line, rep, newval);
		cout << "enter line to be replaced: ";

	}
	return 0;
}
