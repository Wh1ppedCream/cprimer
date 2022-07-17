#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using std::string;
using std::vector;
using std::cin;
using std::istringstream;
using std::endl;
using std::cout;
using std::cerr;
using std::ostringstream;



// members are public by default; see § 7.2 (p. 268)
struct PersonInfo {
	string name;
	vector<string> phones;
};

bool valid(string per) {
	if (per.empty()) {
		return false;
	} else {
		return true;
	}
}

string format(string num) {
	string number;
	int i = 1;
	for (auto &c : num) {
		if (i > 3) {
			number += "-";
			number += c;
			i = 1;
		} else {
			number += c;
			++i;
		}
	}
	return number;
}

void readinfos(const string &filename, vector<PersonInfo> &person) {
	std::ifstream input(filename);
	istringstream record;
	string line, word;
	// read the input a line at a time until cin hits end-of-file (or another error)
	while (getline(input, line)) {
		PersonInfo info;
		record.clear();
		// create an object to hold this record’s data
		record.str(line); // bind record to the line we just read

		record >> info.name; // read the name
		while (record >> word)
			// read the phone numbers
			info.phones.push_back(word); // and store them
		person.push_back(info); // append this record to people
	}

}

void print_people(std::ostream& os, vector<PersonInfo> &people)
{
	for (const auto &entry : people) {
		// for each entry in people
		ostringstream formatted, badNums; // objects created on each loop
		for (const auto &nums : entry.phones) { // for each number
			if (!valid(nums)) {
				badNums << " " << nums; // string in badNums
			} else
				// ‘‘writes’’ to formatted’s string
				formatted << " " << format(nums);
		}
		if (badNums.str().empty())
			// there were no bad numbers
			os << entry.name << " "
				// print the name
				<< formatted.str() << endl; // and reformatted numbers
		else
			// otherwise, print the name and bad numbers
			cerr << "input error: " << entry.name
				<< " invalid number(s) " << badNums.str() << endl;
	}
}


int main(int argc, char *argv[])
{
	string line, word; // will hold a line and word from input, respectively
	vector<PersonInfo> people; // will hold all the records from the input
	readinfos(argv[1], people);
	print_people(cout, people);
	for (const auto &per : people) {
		std::cout << per.name << " ";
		for (const auto &num : per.phones)
			cout << num << " ";
		cout << endl;
	}
	return 0;
}
