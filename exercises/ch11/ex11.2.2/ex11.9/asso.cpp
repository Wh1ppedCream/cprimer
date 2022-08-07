/* Define a map that associates words with a list of line numbers on
   which the word might occur. */

#include <map>
#include <list>
#include <iostream>
#include <string>
#include <algorithm>

using std::string;
using std::list;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	std::map<string, list<int>> assoc;
	string word;
	int line = 1;
	while (cin >> word) {
		if (word == "\n") {
			++line;
			continue;

		} else {
		(assoc[word]).push_back(line);
		}
	}
	for (auto &v : assoc) {
		cout << "the word: " << v.first << " appears at lines: (";
		for (auto &li : (v.second)) {
			cout << li << ", ";
		}
		cout << ")" << endl;
	}
	return 0;


}
