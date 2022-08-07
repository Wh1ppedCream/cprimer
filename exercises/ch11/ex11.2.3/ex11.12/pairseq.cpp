#include <string>
#include <vector>
#include <utility>
#include <iostream>

using std::string;
using std::pair;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	std::vector<pair<string, int>> vec;
	string word;
	int num;
	cout << "enter a string: ";
	while (cin >> word) {
		cout << "\nenter a number: ";
		cin >> num;
		vec.push_back(make_pair(word, num));
		cout << "\nenter a string: ";
	}
	cout << endl;

	for (auto &r : vec) {
		cout << "\n\nword: " << r.first << " number: " << r.second << endl;
	}
	return 0;

}

