/* Define a map for which the key is the family’s last name and the value
   is a vector of the children’s names. Write code to add new families and to add new
   children to an existing family. */

#include <utility>
#include <map>
#include <vector>
#include <iostream>
#include <string>

using std::pair;
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

void fam_add(std::map<string, vector<pair<string, string>>> &fam) {
	string last;
	string mem;
	string birth;
	cout << "enter the last name(n to stop): ";
	while(cin >> last) {
		if (last == "n") {
			break;
		}
		cout << "enter family members (x to stop): ";
		while (cin >> mem) {
			if (mem == "x") {
				break;
			}
			cout << "enter the birthday (no spaces): ";
			cin >> birth;
			fam[last].push_back(make_pair(mem, birth));
		}
		cout << "enter the last name(n to stop): ";

	}
}
		

int main()
{
	std::map<string, vector<pair<string, string>>> fam;
	fam_add(fam);

	for (const auto &w : fam) {
		cout << "family name: " << w.first << endl;
		for (const auto &name : w.second) {
			cout << "	" << name.first << endl;
			cout << "birthday: " << "       " << name.second << endl;
		}
	}
	return 0;

}

