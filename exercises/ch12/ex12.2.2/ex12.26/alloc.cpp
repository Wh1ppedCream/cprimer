#include <memory>
#include <vector>
#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	std::allocator<string> al;
	string s;
	std::vector<string> vstr;
	while (cin >> s) {
		vstr.push_back(s);
	}
	auto p = al.allocate(vstr.size());
	auto q = uninitialized_copy(vstr.begin(), vstr.end(), p);
	
	for (auto iter = p; iter != q; ++iter) {
		cout << *iter << endl;
		al.destroy(iter);
	}
	al.deallocate(p, vstr.size());
	return 0;
}

