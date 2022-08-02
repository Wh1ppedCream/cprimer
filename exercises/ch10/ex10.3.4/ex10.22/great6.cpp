#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>

using std::placeholders::_1;
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

bool no_greater(string &str, unsigned int num) {
	return str.size() >= num;
}

int main()
{
	vector<string> vstr{ "bruh", "bruuh", "broski", "broness", "v r u u u h"};
	cout << "number of strings greater or equal to 6: " << endl;
	cout << std::count_if(vstr.begin(), vstr.end(), bind(no_greater, _1, 6)) << endl;
	return 0;
	

}

