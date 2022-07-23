#include <iostream>
#include <deque>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::deque;

int main()
{
	deque<string> deq;
	string word;
	while (cin >> word) {
		deq.push_back(word);
	}
	auto last = deq.end();
	for (auto i = deq.begin(); i != last; ++i) {
		cout << *i << endl;
	}
	return 0;
}
