#include <map>
#include <string>
#include <vector>
#include <iostream>

using std::vector;
using std::map;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{

	map<string, vector<int>> mp;
	vector<int> v1 {1, 1, 1};
	mp["a"] = v1;

	map<string, vector<int>>::iterator iter = mp.find("a");

	for (auto &n : iter->second) {
		cout << n << " ";
	}
	cout << endl;

	return 0;

}

