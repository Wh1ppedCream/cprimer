#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;

void vec_add(std::vector<int> &nums) {
        cout << "Insert 10 numbers to stop" << endl;
        cout << "Insert the numbers to add: " << endl;
        int count = 0, val;
        while (cin >> val) {
                if (val < 0) break;
                nums.push_back(val);
		++count;
		if (count > 10) break;
        }
}


int main()
{
	std::vector<int> vint;
	std::list<int> lint;
	vec_add(vint);
	auto sev = vint.crbegin() + 3;
	auto thir = vint.crend() - 2;
	while (sev != thir) {
		lint.push_back(*sev++);
	}
	for(auto &c : lint) {
		cout << c << " ";
	}
	cout << endl;
	return 0;
}

