#include <map>
#include <string>
#include <iostream>

using std::string;
using std::map;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	// count the number of times each word occurs in the input
	map<string, size_t> word_count; // empty map from string to size_t
	string word;
	while (cin >> word) {
		auto r = word_count.insert({word, 1});
		if (!r.second) {
			++((r.first)->second);
		}
	}

	// fetch and increment the counter for word
	for (const auto &w : word_count) // for each element in the map
					 // print the results
		cout << w.first << " occurs " << w.second
			<< ((w.second > 1) ? " times" : " time") << endl;
	
	return 0;

}

