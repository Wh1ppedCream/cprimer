/* Write a program to implement text queries without defining classes to
   manage the data. Your program should take a file and interact with a user to query for
   words in that file. Use vector, map, and set containers to hold the data for the file
   and to generate the results for the queries. */

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <set>
#include <map>
#include <string>

using std::istringstream;
using std::vector;
using std::set;
using std::map;
using std::string;
using std::ifstream;
using std::cin;
using std::cout;
using std::endl;

void query_in(const string &str) {
	ifstream in(str);
	vector<string> lines;
	map<string, set<int>> words;
	string line, word;
	int lineno = 1;
	while (getline(in, line)) {
		lines.push_back(line);
		istringstream lnwords(line);
		while (lnwords >> word) {
			words[word].insert(lineno);
			}
		++lineno;
	}


	string search;
	do {
		cout << "Enter word to search (q to quit): ";
		cin >> search;
		if (search == "q") break;

		string res;
		int times = 0;
		int number;
		set<int> &st = words[search];

		cout << "\nThe word: " << search << " appears in: \n";

		for (auto iter = st.begin(); iter != st.end(); ++iter) {
			++times;
			number = *iter;
			res = lines[number];
			cout << "\nlineNo. " << number << " :   " << res;
		}
		cout << "\nThe word: " << search << " occurs " << times << " times\n";
		cout << "Enter word to search (q to quit): ";
	} while (true);
}

int main(int argv, char* argc[])
{
	query_in(argc[1]);
	return 0;
}

