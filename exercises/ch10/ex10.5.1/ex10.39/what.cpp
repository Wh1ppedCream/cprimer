#include <iostream>
#include <list>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	std::list<int> lint{1, 2, 3, 4};
	std::vector<int> vint{1, 2, 3, 4};
	
	std::vector<int>::iterator viter = vint.begin();
	//this is a random access iterator, as vector iterators support full arithmatic operations

	std::list<int>::iterator liter = lint.begin();
	//this is a bidirectional iterator, as the iterator can be incremented and decremented,
}

