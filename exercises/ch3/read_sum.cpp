#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<int> vec1;
	int num = 0;
	while (cin >> num) {
		vec1.push_back(num);
	}
	auto curr = vec1.begin();
	auto ending = vec1.end();
	while (curr != ending - 1) {
		cout << *curr + *(curr + 1) << " ";
		++curr;
	}
	cout << endl;
	return 0;
}
