#include <map>
#include <vector>
#include <iostream>

using std::vector;
using std::map;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	// creates a vector of ints named 'v'
	vector<int> v;
	// does not work, as it is trying to dereference and change an item that is out of range
	v[0] = 1;

	//creates a map named m
	map<int, int> m;
	// checks for the existence of a key named '0'
	// when it sees this key does not exist, it creates it
	// assigns 1 as the value to the key '0'
	m[0] = 1;


	for (auto &i : m) {
		cout << "for the key: " << i.first << " , we have the value: " << i.second << endl;
	}
	return 0;

}

