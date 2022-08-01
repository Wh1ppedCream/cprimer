/* Rewrite biggies to use partition instead of find_if. We de-
   scribed the partition algorithm in exercise 10.13 in § 10.3.1 (p. 387). */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

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

	std::stable_sort(strs.begin(), strs.end(), 
			[] (const string &s1, const string &s2)
				{ return s1.size() < s2.size(); 
				}
			);

	auto end = std::stable_partition(strs.begin(), strs.end(), 
				[num] (const string &s) {
					return (s.size() >= num);
					}
				);

	cout << "strings greater than " << num << ": " << endl;
	for_each(strs.begin(), end, 
			[num] (const string &str) {
				if (str.size() >= num) {
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

