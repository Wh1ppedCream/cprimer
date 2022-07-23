#include <iostream>
#include <list>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::list;

int main()
{
	list<string> lst;
	string word;
	while (cin >> word) {
		lst.push_back(word);
	}
	auto last = lst.end();
	for (auto i = lst.begin(); i != last; ++i) {
		cout << *i << endl;
	}
	return 0;
}
