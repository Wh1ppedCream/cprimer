#include <iostream>
#include <map>
#include <list>
#include <vector>
#include <deque>
#include <set>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	std::list<int> lint;
	//doubly linked lists can have values added randomly, without invalidating existing iterators

	std::vector<int> vint;
	//vectors are good for general use where containers are required and only insertion at the end is needed

	std::deque<int> dint;
	// deques can be accessed from both sides, so when insertion at beginning and end are needed, they are used

	std::map<int, int> mint;
	// allows you to store a key-value pair, where u can access both the key and the value and use them to access
	// each other

	std::set<int> sint;
	// 
}

