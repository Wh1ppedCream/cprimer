/* What are the mapped_type, key_type, and value_type of a map 
   from int to vector<int>? */

#include <map>
#include <vector>
#include <utility>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector vint{1, 2, 3, 4};
	std::map<int, vector<int>>::mapped_type mvec = vint;
	cout << "mapped_type: ";
	for (auto &i : mvec) {
		cout << i << ", ";
	}

	std::map<int, vector<int>>::key_type kint = 5;
	cout << "\n\nkey_type: " << kint << endl;

	std::map<int, vector<int>>::value_type vvec = std::make_pair(1, vint);
	cout << "\n value_type: " << "key: " << vvec.first << "\n vector: ";
	for (auto &v : vvec.second) {
		cout << v << ", ";
	};
	cout << endl;
	return 0;
}

