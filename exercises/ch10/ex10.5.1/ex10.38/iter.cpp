// List the five iterator categories and the operations that each supports.

#include <iostream>
#include <iterator>
#include <list>
#include <vector>
#include <forward_list>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	std::list<int> lint{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::vector<int> vint{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::forward_list<int> fint{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	
	std::istream_iterator<int> in(cin);                                  
	//for reading only, passes once, can be incremented

	std::ostream_iterator<int> out(cout);				     
	//for writing only, passes once, can be incremented
	
	std::list<int>::iterator bidirectional(lint.end());
	//for reading and writing, can pass multiple times, can be incremented and decremented

	std::forward_list<int>::iterator foreward(fint.begin());
	//for reading and writing, can pass multiple times, can only be incremented

	std::vector<int>::iterator random(vint.begin());
	//for reading and writing, can pass multiple times, incremented decremented and full arithmatic functions

	return 0;

}

