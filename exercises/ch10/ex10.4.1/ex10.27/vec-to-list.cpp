#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

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
	std::list<int> lint;
	vec_add(vint);
	std::sort(vint.begin(), vint.end());
	unique_copy(vint.begin(), vint.end(), front_inserter(lint));
	cout << "printing the copied list: ";
	for (auto &c : lint) {
		cout << c << " ";
	}
	cout << endl;
	return 0;
}
