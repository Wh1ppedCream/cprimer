#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::istream;
using std::ostream;
using std::string;
using std::vector;

void ReadFiletoVec(const string& filename, vector<string> &vec) {
	std::ifstream input(filename);
	if (input) {
		string curr_line;
		while(getline(input, curr_line)) {
			vec.push_back(curr_line);
		}
	} else {
		cerr << "couldn't open the file: " + filename;
	}
}


int main() 
{
	vector<string> linesif;
	string str = "thefile.txt";
	ReadFiletoVec(str, linesif);
	for (const auto &str : linesif) {
		cout << str << endl;
	}
	return 0;
}
