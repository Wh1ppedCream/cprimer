#include <iostream>
#include <numeric>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

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
	cout << "The sum of the numbers is: " << std::accumulate(nums.begin(), nums.end(), 0) << endl;
	return 0;
}

