#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <string>

using std::placeholders::_1;
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

bool check_size(unsigned int i, string &s)
{
	return i >= s.size();
}

int main()
{
	vector<int> vint {1, 3 , 4, 5, 3, 32, 423, 1, 431, 4};
	string str;
	cout << "string val: ";
	cin >> str;
	auto val = std::find_if(vint.begin(), vint.end(), bind(check_size, _1, str));
	cout << "value is : " << *val << endl;
	return 0;
}

