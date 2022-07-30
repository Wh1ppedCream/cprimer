#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int sum_vecstr(vector<string> &vstr) {
	int val;
	for (auto &num : vstr) {
		val += stoi(num);
	}
	return val;
}


int main()
{
	vector<string> s = {"5", "32", "29", "15"};
	cout << "original vector values: ";
	for (auto &ch : s) {
		cout << ch << " ";
	}
	cout << endl;

	cout << "value of addition in vector vals: " << sum_vecstr(s) << endl;
	return 0;

}
