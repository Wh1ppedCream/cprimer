#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	std::vector<int> vint{1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::deque<int> dint;
	std::list<int> lint{555, 555};
	std::vector<int> v2;

	auto vec_bak = back_inserter(v2);
	auto dint_front = front_inserter(dint);
	auto listin = inserter(lint, ++lint.begin());
	
	for (int &i : vint) {
		vec_bak = i;
		dint_front = i;
		listin = i;
	}
	auto prout = [] (int i) { cout << i << " ";};

	cout << "the front-inserted deque: \n";
	for_each(dint.begin(), dint.end(), prout);
	cout << "\n the middle inserted list: \n";
	for_each(lint.begin(), lint.end(), prout);
	cout << "\n the back-inserted vector: \n";
	for_each(v2.begin(), v2.end(), prout);
	cout << endl;
	return 0;
}

