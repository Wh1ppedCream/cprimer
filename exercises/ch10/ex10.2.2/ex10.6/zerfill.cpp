#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

void printiter(std::vector<int> vec) {
	cout << "values in the vector now: " << endl;
	for (auto &n : vec) {
		cout << n << ", ";
	}
	cout << endl;
}

int main()
{
	cout << "Insert a negative number to stop" << endl;
	cout << "Insert the numbers to add: " << endl;
	std::vector<int> nums;
	int val;
	while (cin >> val) {
		if (val < 0) break;
		nums.push_back(val);
	}
	printiter(nums);
	cout << "Turning all Values to 0:" << endl;
	fill_n(nums.begin(), nums.size(), 0);
	printiter(nums);
	return 0;
}
