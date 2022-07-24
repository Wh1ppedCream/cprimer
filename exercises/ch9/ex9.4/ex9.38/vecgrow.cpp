#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::endl;

// Exercise 9.38: Write a program to explore how vectors grow in the library you use.

void vecprint(vector<int> &v1) {
	cout << "vector : ";
	for (auto &num : v1) {
		cout << num << " ";
	}
	cout << endl;
}


int main() 
{
	vector<int> vec;
	
	int ins = 0;

	for (int cap = 5; vec.size() != 20; cap += 5) {
		vec.reserve(cap);

		cout << "cap has been raised" << endl;
		cout << "new cap: " << vec.capacity() << " current size: " << vec.size()
		       	<< "\n\n adding nums" << endl;


		while (vec.size() != vec.capacity()) {
			cout << "before add:" << endl;
			vecprint(vec);
			vec.push_back(ins);
			++ins;
			cout << "after add:" << endl;
			vecprint(vec);
		}
		cout << "\n\n";

		cout << "cap before raise" << endl;
		cout << "old cap: " << vec.capacity() << " current size: " << vec.size() << endl;
		vecprint(vec);

	}
	
	cout << "final ";
	vecprint(vec);
	return 0;
}
