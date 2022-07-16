#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> integers(5, 5);
	for (auto it = integers.begin(); it != integers.end(); ++it) {
		*it *= 2;
	}
	for (auto num : integers)
		cout << num << " " << endl;
	return 0;
}
