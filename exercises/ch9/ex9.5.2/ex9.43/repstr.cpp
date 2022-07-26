/* Write a function that takes three strings, s, oldVal, and newVal.
   Using iterators, and the insert and erase functions replace all instances of oldVal
   that appear in s by newVal. Test your function by using it to replace common abbre-viations,
   such as “tho” by ”though” and ”thru” by “through”. */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void val_rep(string &s, &oldval, &newval) {
	if (s.empty() || oldval.empty()|| s.size() < oldval.size()) return;
	cout << "old string: " << s << endl;

	auto iter = s.begin();
	auto oldsiz = oldval.size();
	auto newsiz = newval.size();
	string str(s.begin(), s.begin() + oldval);
	while (iter != s.end()) {
		if (str == oldval) {
			iter = s.erase(iter, oldsiz);
			iter = (s.insert(iter, newval)) + newsiz;
			continue;
		} else {
			str.erase(str.begin(), 1);
			str.append(*iter);
			++iter;
			




	cout << "new string: " << s << endl;
}


int main()
{


}
