#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main() {
	vector<int> v {1, 2, 3, 4, 5, 6};
	auto begin = v.begin();
	
	while (begin != v.end()) {
	
		++begin; 
		begin = v.insert(begin, 42);   // if we remove 42 here and insert is not assigned a result to begin, 
					       // the program will crash
		++begin; 
	}
	cout << "the vector: ";
	for (auto &num : v) {
		cout << num << " ";
	}
	cout << endl;

}
