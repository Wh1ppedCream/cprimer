/*	Write a program that, given one string, transforms it into another.
	The input to our program is two files. The first file contains rules that we
   will use to transform the text in the second file. Each rule consists of a word that
   might be in the input file and a phrase to use in its place. The idea is that when-
   ever the first word appears in the input, we will replace it with the corresponding
   phrase. The second file contains the text to transform. */ 

#include <map>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>

using std::istringstream;
using std::ifstream;
using std::map;
using std::string;
using std::cin;
using std::cout;
using std::endl;

//function that creates map of (codedword, actual word)
map<string, string> swapmap(const string &name1) {
	map<string, string> change;
	ifstream in(name1);
	string coded, real;
	while (in >> coded) {
		getline(in, real);
		change[coded] = real;
	}
	return change;
}

//function that swaps 'codedword' for 'actual word'

//function that processes the entire input string
string actswap(map<string, string> &swap, const string &str) {

	ifstream in(str);
	string text, rdline, currword;

	while (getline(in, rdline)) {
		istringstream line(rdline);
		while (line >> currword) {
			auto iter = swap.find(currword);
			if (iter == swap.end()) {
				text += " " + currword;
			} else {
				text += " " + iter->second;
			}
		}
		text += "\n";
	}
	return text;
}

int main(int argv, char *argc[])
{
	map<string, string> trans = swapmap(argc[1]);

	const string& last = actswap(trans, argc[2]);

	cout << last << endl;

	return 0;

}

