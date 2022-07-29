/* A letter has an ascender if, as with d or f, part of the letter extends
   above the middle of the line. A letter has a descender if, as with p or g, part of the
   letter extends below the line. Write a program that reads a file containing words and
   reports the longest word that contains neither ascenders nor descenders. */

#include <iostream>
#include <string>
#include <fstream>

using std::ifstream;
using std::string;
using std::cout;
using std::endl;

void long_short(const string &file) {
	ifstream input(file);

	string curr_word, max_word, ascenders("tifdhklb"), descenders("qypgj");
	while (input >> curr_word) {
		if (curr_word.find_first_of(ascenders) == curr_word.find_first_of(descenders)) {
			if (curr_word > max_word) {
				max_word = curr_word;
			}
		}
	}
	cout << max_word << endl;
}



int main(int argc, char *argv[])
{
	cout << "the greatest word which does not contain an ascender or a descender is: " << endl;
	long_short(argv[1]);
	return 0;
}
