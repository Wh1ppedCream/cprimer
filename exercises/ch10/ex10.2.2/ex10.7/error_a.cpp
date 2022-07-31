/* vector<int> vec; list<int> lst; int i;
   while (cin >> i)
   lst.push_back(i);
   copy(lst.cbegin(), lst.cend(), vec.begin()); */

#include <iterator>
#include <vector>
#include <list>
#include <iostream>

using std::vector;
using std::list;
using std::cin;
using std::back_inserter;
using std::cout;
using std::endl;

//prints the values in a vector
void print_vec(std::vector<int> &vec) {
        cout << "values in the vector now: " << endl;
        for (auto &n : vec) {
                cout << n << ", ";
        }
        cout << endl;
}


int main()
{
	vector<int> vec; list<int> lst; int i;
	while (cin >> i)
		lst.push_back(i);
	copy(lst.cbegin(), lst.cend(), back_inserter(vec));
	print_vec(vec);
	return 0;
}
