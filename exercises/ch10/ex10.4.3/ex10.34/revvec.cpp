/*Use reverse_iterators to print a vector in reverse order. */

#include <vector>
#include <iterator>
#include <iostream>

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

//adds values to vector till something specific is entered:
void vec_add(std::vector<int> &nums) {
        cout << "Insert a negative number to stop" << endl;
        cout << "Insert the numbers to add: " << endl;
        int val;
        while (cin >> val) {
                if (val < 0) break;
                nums.push_back(val);
        }
}

int main()
{
	std::vector<int> vint;
	vec_add(vint);
	print_vec(vint);
	auto curr = vint.crbegin();
	while (curr != vint.crend()) {
		cout << *curr << " ";
		++curr;
	}
	return 0;

}

