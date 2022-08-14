#include <map>
#include <iostream>

using std::map;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	map<int, int> mint = {{1, 5}, {2, 10}, {3, 15}, {5, 25}};

	auto i = [] (map<int, int>::iterator it) {
			cout << "for key: " << it->first << "\n val: " << it->second << endl;
	};

	// will point to where the key can be inserted, while maintaining order
	auto fir = mint.upper_bound(4);
	auto sec = mint.lower_bound(4);

	// will return pair of iterators to where key can be inserted;
	auto thir = mint.equal_range(4);

	cout << "first: " << endl;
	i(fir);
	cout << "second: " << endl;
	i(sec);
	cout << "third: " << endl;
	i(thir.first);
	i(thir.second);

}

