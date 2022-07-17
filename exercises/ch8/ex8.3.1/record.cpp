#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using std::string;
using std::vector;
using std::cin;
using std::istringstream;
using std::endl;
using std::cout;



// members are public by default; see § 7.2 (p. 268)
struct PersonInfo {
	string name;
	vector<string> phones;
};

int main()
{
	string line, word; // will hold a line and word from input, respectively
	vector<PersonInfo> people; // will hold all the records from the input
	istringstream record;
				   // read the input a line at a time until cin hits end-of-file (or another error)
	while (getline(cin, line)) {
		PersonInfo info;
		record.clear();
		// create an object to hold this record’s data
		record.str(line); // bind record to the line we just read

		record >> info.name; // read the name
		while (record >> word)
			// read the phone numbers
			info.phones.push_back(word); // and store them
		people.push_back(info); // append this record to people
	}

	for (const auto &per : people) {
		std::cout << per.name << " ";
		for (const auto &num : per.phones)
			cout << num << " ";
		cout << endl;
	}
	return 0;
}
