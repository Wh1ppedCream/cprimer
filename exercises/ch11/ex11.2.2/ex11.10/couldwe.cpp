#include <map>
#include <vector>
#include <list>
#include <iostream>

using std::cin;
using std::map;
using std::cout;
using std::endl;

int main()
{
	map<vector<int>::iterator, int> viter;
	//possible, because vector iterators support relational operations;

	map<list<int>::iterator, int> liter;
	//not possible as list iterators do not support relational operations;

}

