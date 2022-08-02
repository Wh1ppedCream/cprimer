/* In the exercises for § 10.3.2 (p. 392) you wrote a version of biggies
that uses partition. Rewrite that function to use check_size and bind.  */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>

using std::placeholders::_1;         //
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

bool check_size(const string &s, string::size_type sz)
{
	return s.size() >= sz;
}

//prints the values in a vector
void print_vec(std::vector<string> &vec) {
	cout << "\nvalues in the vector now: " << endl;
	for (auto &str : vec) {
		cout << str << ", ";
	}
	cout << "\n" << endl;
}

//adds values to vector till something specific is entered:
void vec_add(std::vector<string> &stvec) {
	cout << "enter 'no' to stop reading in" << endl;
	cout << "Insert the strings to add: " << endl;
	string val;
	while (cin >> val) {
		if (val == "no") break;
		stvec.push_back(val);
	}
}

void elimDups(vector<string> &stvec) {
	std::sort(stvec.begin(), stvec.end());
	auto curr = std::unique(stvec.begin(), stvec.end());
	stvec.erase(curr, stvec.end());
	cout << "done removing" << endl;
}

//sorts by length and removes duplicates
void biggies(vector<string> &strs, vector<string>::size_type num) {
	print_vec(strs);
	elimDups(strs);
	print_vec(strs);

	auto szchk = bind(check_size, _1, num);

	std::stable_sort(strs.begin(), strs.end(), 
			[] (const string &s1, const string &s2)
				{ return s1.size() < s2.size(); 
				}
			);

	auto end = std::partition(strs.begin(), strs.end(), szchk);

	cout << "strings greater than " << num << ": " << endl;
	
	for_each(strs.begin(), end,
			[szchk] (const string &str) {
				if (szchk(str)) {
					cout << str << " ";
				}
			}
		);

	cout << "\n" << endl;
	print_vec(strs);
}

int main()
{
	vector<string>::size_type siz;
	vector<string> strings;
	vec_add(strings);
	cout << "\nenter the min size: ";
	cin >> siz;
	cout << endl;
	biggies(strings, siz);
	return 0;
}

