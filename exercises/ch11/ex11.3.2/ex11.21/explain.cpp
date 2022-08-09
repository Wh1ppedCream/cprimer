#include <string>
#include <map>
#include <iostream>

using std::map;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string word;
	map<string, size_t> word_count;

	while (cin >> word) {
		//reads in word

		++word_count.insert({word, 0}).first->second;
		//inserts the word into the map, with the value 0, increments it by 1,
		// regardless of whether it has inserted or not
	}

}

