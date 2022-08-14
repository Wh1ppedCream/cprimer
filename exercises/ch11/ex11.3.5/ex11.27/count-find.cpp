#include <map>
#include <iostream>

using std::map;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	multimap<int, int> ma = {{1, 5}, {2, 10}, {3, 15}};

	auto num = ma.count(2);
	// when we want to count how many times a key appears


	auto val = ma.find(3);
	// when we want to find the first instance of a key

}

