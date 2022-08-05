#include <iostream>
#include <string>
#include <cctype>
#include <set>
#include <map>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	std::map<string, size_t> wordcount;
	string word;
	int pos = 0;
	while (cin >> word) {
		for(auto &c : word) {
			if (ispunct(c)) {
				word.erase(pos, 1);
			}
			c = tolower(c);
			++pos;
		}
		pos = 0;
		++wordcount[word];
	}
	for (const auto &pair : wordcount) {
		cout << "word: " << pair.first << ",  count: " << pair.second << endl;
	}
	return 0;

}

