/* Rewrite the word-counting (§ 11.1, p. 421) and word-transformation
   (§ 11.3.6, p. 440) programs to use an unordered_unordered_map. */

#include <fstream>
#include <unordered_map>
#include <string>
#include <iostream>
#include <string>
#include <sstream>

using std::runtime_error;
using std::unordered_map;
using std::istringstream;
using std::string;
using std::ifstream;
using std::cin;
using std::cout;
using std::endl;


void word_count() {
	// count the number of times each word occurs in the input
	unordered_map<string, size_t> word_count; // empty unordered_unordered_map from string to size_t
	string word;
	cout << "enter text: ";
	while (cin >> word)
		++word_count[word];
	// fetch and increment the counter for word
	for (const auto &w : word_count) // for each element in the unordered_map
					 // print the results
		cout << w.first << " occurs " << w.second
			<< ((w.second > 1) ? " times" : " time") << endl;

}

// The buildMap function reads its given file and builds the transformation unordered_map
unordered_map<string, string> buildMap(ifstream &umap_file)
{
	unordered_map<string, string> trans_umap;
	// holds the transformations
	string key;
	// a word to transform
	string value; // phrase to use instead
		      // read the first word into key and the rest of the line into value
	while (umap_file >> key && getline(umap_file, value))
		if (value.size() > 1) // check that there is a transformation
			trans_umap[key] = value.substr(1); // skip leading space
		else
			throw runtime_error("no rule for " + key);
	return trans_umap;
}

// The transform function does the actual transformation.
const string &transform(const string &s, const unordered_map<string, string> &m)
{
	// the actual unordered_map work; this part is the heart of the program
	auto umap_it = m.find(s);
	// if this word is in the transformation unordered_map
	if (umap_it != m.cend())
		return umap_it->second; // use the replacement word
	else
		return s;
	// otherwise return the original unchanged
}

// The transform function will take a string and return the transformation if there is one.
void word_transform(ifstream &umap_file, ifstream &input)
{
	auto trans_umap = buildMap(umap_file); // store the transformations
	string text;
	// hold each line from the input
	while (getline(input, text)) { // read a line of input
		istringstream stream(text); // read each word
		string word;
		bool firstword = true;
		// controls whether a space is printed
		while (stream >> word) {
			if (firstword)
				firstword = false;
			else
				cout << " "; // print a space between words
					     // transform returns its first argument or its transformation
			cout << transform(word, trans_umap); // print the output
		}
		cout << endl;
		// done with this line of input
	}
}

int main(int argv, char* argc[])
{
	cout << "testing word_count";
	cout << "\nenter words for test: " << endl;
	word_count();
	
	cout << "\n\ntesting word_transform:\n\n";
	ifstream in1(argc[1]), in2(argc[2]);
	word_transform(in1, in2);
	return 0;
}

