#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> v1;
	string str;
	while (cin >> str) {
		v1.push_back(str);
	}
	return 0;
}
