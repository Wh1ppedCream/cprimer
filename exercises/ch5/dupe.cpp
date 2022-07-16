#include <iostream>

using std::cin;
using std::endl;
using std::string;
using std::cout;

int main() 
{
	string str, curr_str, max_str;
	int num = 1;
        int hi_num = 1;
	cin >> str;
	while (cin >> curr_str) {
		if (curr_str == str) {
			++num;
		} else {
			if (num > hi_num) {
				hi_num = num;
				max_str = str;
			}
			num = 1;
			str = curr_str;
		}
	}
	if (hi_num > 1) {
		cout << "the highest number is " << hi_num << " for " << max_str << endl;
	} else {
		cout << "no repeated words" << endl;
	}
	return 0;
}

