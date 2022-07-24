#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> vi {1, 2, 3, 4, 5, 6};
	auto iter = vi.begin();
	while (iter != vi.end()) {
		if (*iter % 2)
			iter = vi.insert(iter, *iter);    // as insert inserts before the mentioned iterator
							  // this will infinitely insert into one position
		++iter;
	}	
	
	cout << "vector: ";
	for(auto &num : vi) {
		cout << num << " ";
	}
	return 0;
}
