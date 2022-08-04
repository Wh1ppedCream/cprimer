#include <list>
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

void li_add(std::list<int> &nums) {
	cout << "Insert a negative number to stop" << endl;
	cout << "Insert the numbers to add: " << endl;
	int val;
	while (cin >> val) {
		if (val < 0) break;
		nums.push_back(val);
	}
}


int main()
{
	std::list<int> ints;
	li_add(ints);
	auto num = find(ints.crbegin(), ints.crend(), 0);
	cout << "num " << *num << endl;
	return 0;

}

