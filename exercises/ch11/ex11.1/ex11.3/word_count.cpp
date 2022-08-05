#include <iostream>
#include <string>
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
	while (cin >> word) {
		++wordcount[word];
	}
	for (const auto &pair : wordcount) {
		cout << "word: " << pair.first << ",  count: " << pair.second << endl;
	}
	return 0;

}

