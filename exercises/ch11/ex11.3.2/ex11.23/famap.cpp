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

void fam_add(std::multimap<string, string> &fam) {
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
			fam.insert({last, mem});
			cout << "\nnext memeber (x to stop): ";
		}
		cout << "enter the last name(n to stop): ";

	}
}
		

int main()
{
	std::multimap<string, string> fam;
	fam_add(fam);

	for (const auto &w : fam) {
		cout << "\nfamily name: " << w.first;
		cout << "\n	first name: " << w.second;
	}
	cout << endl;
	return 0;

}

