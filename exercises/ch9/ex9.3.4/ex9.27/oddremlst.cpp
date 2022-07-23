#include <forward_list>
#include <iostream>
#include <string>

using std::string;
using std::forward_list;
using std::cout;
using std::endl;

int main()
{
	forward_list<int> flst {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

	auto prev = flst.before_begin();
	auto curr = flst.begin();

	while (curr != flst.end()) {
		if (*curr % 2 != 0) {
			curr = flst.erase_after(prev);
		} else {
			prev = curr;
			++ curr;
		}
	}

	cout << "foreward list : ";
	for (auto &num : flst) {
		cout << num << " ";
	}
	cout << endl;
	return 0;
}
