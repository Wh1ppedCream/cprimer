#include <iostream>
#include <vector>
#include <iterator>

using std::fill_n;
using std::vector;
using std::cin;
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
	vector<int> vec;
	vec.reserve(10); // reserve is covered in § 9.4 (p. 356)
	fill_n(std::back_inserter(vec), 10, 0);
	print_vec(vec);
	return 0;
}

