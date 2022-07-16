#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::initializer_list;
using std::endl;

int inlist_sum(initializer_list<int> li) {
	int total = 0;
	for (const int &num : li) {
		total += num;
	}
	return total;
}

int main() {
	cout << inlist_sum({1, 2, 3, 4, 5}) << endl;
	return 0;
}
