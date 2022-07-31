#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin;
using std::endl;
using std::cout;
using std::count;

void elecount(vector<int> &vec, int val) {
	cout << "number of times " << val << " was inputted: " << count(vec.begin(), vec.end(), val) << endl;
}

int main()
{
	cout << "enter a negative value to stop reading" << endl;
	int val;
	vector<int> vvals;
	while (cin >> val) {
		if (val < 0) break;
		vvals.push_back(val);
	}
	cout << "enter value to search: ";
	int sear;
	cin >> sear;
	elecount(vvals, sear);
	return 0;
}
