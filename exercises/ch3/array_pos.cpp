#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> nums;
	for (int curr = 0; curr <= 9; ++curr) {
		nums.push_back(curr);
	}
	for (auto r : nums) 
		cout << r << " ";
        cout << endl;
	


	vector<int> nums2;
	for (auto m : nums) {
		nums2.push_back(m);
	}
	for (auto n : nums2)
		cout << n << " ";
	cout << endl;
	return 0;
}
