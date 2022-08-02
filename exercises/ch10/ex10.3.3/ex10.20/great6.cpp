#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int no_greater(vector<string> &vec, unsigned int num) {
	return std::count_if(vec.begin(), vec.end(), 
				[num] (string &str) {
					return str.size() >= num;
				}
			);
}


int main()
{
	vector<string> vstr{ "bruh", "bruuh", "broski", "broness", "v r u u u h"};
	cout << "number of strings greater or equal to 6: " << endl;
	cout << no_greater(vstr, 6) << endl;
	return 0;
	

}

