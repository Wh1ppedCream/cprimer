/* Define a map that associates words with a list of line numbers on
   which the word might occur. */

#include <map>
#include <list>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using std::string;
using std::list;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	std::map<string, list<int>> assoc;
	string word, line;
	int count_l = 0;
	while (getline(cin, line)) {
		++count_l;
		std::istringstream curr(line);


		while (curr >> word) {
			auto &r = assoc[word];

			if (find(r.begin(), r.end(), count_l) == r.end()) {
				r.push_back(count_l);
			} else {
				continue;
			}
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
