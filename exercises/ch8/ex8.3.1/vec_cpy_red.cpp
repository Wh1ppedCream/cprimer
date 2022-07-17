#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>
#include <string>

using std::string;
using std::vector;
using std::endl;

void vec_cpy(vector<string> &vec, const string& filename) {
	std::ifstream input(filename);
	string curr_lin;
	while(getline(input, curr_lin)) {
		vec.push_back(curr_lin);
	}
}

std::ostream& vec_print(const vector<string> &vec, std::ostream& os) {
	for (auto &s : vec) {
		std::istringstream curline(s);
		string curr_word;
		while (curline >> curr_word) {
			os << curr_word << " ";
		}
		os << "\n";
	}
	return os;
}

int main(int argc, char *argv[])
{
	if(argc != 2) {
		std::cerr << "Wrong input!" << endl;
        	return -1;
       	}
	vector<string> lines;
	vec_cpy(lines, argv[1]);
	vec_print(lines, std::cout) << endl;
	return 0;

}

