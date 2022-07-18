#include <iostream>
#include <vector>
#include <iterator>

using std::iterator;
using std::vector;

auto int_search(int num, vector<int>::const_iterator first, vector<int>::const_iterator last) {
	while(first != last) {
		if (num == *first) {
			return first;
		}
		++first;
	}
	return first;
}

int main()
{
	vector<int> vec = {0, 1, 2, 3, 4, 6, 8, 10};
	auto beginn = vec.begin();
	auto endd = vec.end();
	auto iter = int_search(4, beginn, endd);
	std::cout << "if 4 is in the mentioned vec, the number is:  " << *iter << std::endl;
	return 0;
}
