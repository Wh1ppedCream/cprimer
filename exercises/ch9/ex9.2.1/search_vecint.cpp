#include <iostream>
#include <vector>
#include <iterator>

using std::iterator;
using std::vector;

bool int_search(int num, vector<int>::const_iterator first, vector<int>::const_iterator last) {
	while(first != last) {
		if (num == *first) {
			return true;
		}
		++first;
	}
	return false;
}

int main()
{
	vector<int> vec = {0, 1, 2, 3, 4, 6, 8, 10};
	auto beginn = vec.begin();
	auto endd = vec.end();
	std::cout << "is 4 in the mentioned vec? : " << int_search(4, beginn, endd) << std::endl;
	return 0;
}
