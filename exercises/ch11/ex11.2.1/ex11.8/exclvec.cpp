#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <algorithm>

using std::string;
using std::vector;
using std::map;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	// count the number of times each word occurs in the input
	map<string, size_t> word_count; // empty map from string to size_t
	vector<string> exclude = {"The", "But", "And", "Or", "An", "A",
		"the", "but", "and", "or", "an", "a"};
	string word;
	while (cin >> word)
		// count only words that are not in exclude
		if (find(exclude.begin(), exclude.end(), word) == exclude.end())
			++word_count[word];
	// fetch and increment the counter for word
	for (const auto &w : word_count) // for each element in the map
					 // print the results
		cout << w.first << " occurs " << w.second
			<< ((w.second > 1) ? " times" : " time") << endl;
	return 0;
}

