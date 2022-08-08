#include <map>
#include <iostream>
#include <string>

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
	while (cin >> word)
		++word_count[word];
	// fetch and increment the counter for word
	for (const auto &w : word_count) // for each element in the map
					 // print the results
		cout << w.first << " occurs " << w.second
			<< ((w.second > 1) ? " times" : " time") << endl;


	// get an iterator positioned on the first element
	map<string, size_t>::const_iterator map_it = word_count.cbegin();
	// compare the current iterator to the off-the-end iterator
	while (map_it != word_count.cend()) {
		// dereference the iterator to print the element key--value pairs
		cout << map_it->first << " occurs "
			<< map_it->second << " times" << endl;
		++map_it; // increment the iterator to denote the next element
	}
	return 0;
}

