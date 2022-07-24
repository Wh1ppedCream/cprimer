#include <vector>
#include <list>
#include <forward_list>
#include <iostream>

using std::vector;
using std::list;
using std::forward_list;
using std::cout;
using std::endl;

int main()
{
	// silly loop to remove even-valued elements and insert a duplicate of odd-valued elements
	forward_list<int> li = {0,1,2,3,4,5,6,7,8,9};
	auto iter = li.begin(); // call begin, not cbegin because we’re changing li
	auto prev = li.before_begin();
	while (iter != li.end()) {
		if (*iter % 2) {
			iter = li.insert_after(iter, *iter); // duplicate the current element
			prev = iter;
			++iter; // advance past this element and the one inserted before it
		} else {
			iter = li.erase_after(prev);

		}// remove even elements
		 // don’t advance the iterator; iter denotes the element after the one we erased
	}
	cout << "vector: ";
	for(auto &it : li) {
		cout << it << " ";
	}
	return 0;
}
