#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
	string word, full_sent;
	vector<string> vec_str;
	while (cin >> word) {
		vec_str.push_back(word);
	}
	for (auto &r : vec_str) {
		for (auto &c : r) {
			c = toupper(c);
		}
	}
	for (auto r : vec_str) {
		full_sent += r;
	}
	cout << full_sent << endl;
	return 0;
}
