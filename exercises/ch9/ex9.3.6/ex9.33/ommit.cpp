#include <vector>

int main() {
	vector<int> v;
	auto begin = v.begin();
	// safer: recalculate end on each trip whenever the loop adds/erases elements
	while (begin != v.end()) {
		// do some processing
		++begin; // advance begin because we want to insert after this element
		begin = v.insert(begin, 42); // insert the new value
		++begin; // advance begin past the element we just added
	}
}
