/* Define a map for which the key is the family’s last name and the value
   is a vector of the children’s names. Write code to add new families and to add new
   children to an existing family. */

#include <map>
#include <vector>
#include <iostream>
#include <string>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

void fam_add(std::map<string, vector<string>> &fam) {
	string last;
	string mem;
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
			fam[last].push_back(mem);
		}
		cout << "enter the last name(n to stop): ";

	}
}
		

int main()
{
	std::map<string, vector<string>> fam;
	fam_add(fam);

	for (const auto &w : fam) {
		cout << "family name: " << w.first;
		for (const auto &name : w.second) {
			cout << "	" << name << endl;
		}
	}
	return 0;

}

