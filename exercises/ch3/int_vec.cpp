#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
	vector<int> v1 = {1, 2, 3, 4, 5};
	int a1[5];
	for (auto c : v1) {
		a1[c - 1] = c;
	}
	for (auto num : a1) {
		cout << num << endl;
	}
	return 0;
}
