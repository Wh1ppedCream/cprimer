#include <iterator>
#include <iostream>
#include <deque>

using std::cin;
using std::cout;
using std::endl;

int main()
{	
	std::deque<int> vec;
	auto it = inserter(vec, vec.begin());				//inserter uses insert
	*it = 5;
	auto front_it = front_inserter(vec);				//front_inserter uses push_front()
	*front_it = 3;
	auto back_it = back_inserter(vec);				//back_inserter uses push_back()
	*back_it = 6;

	for (auto &c : vec) {
		cout << c << " ";
	}
	cout << endl;
	return 0;
}

