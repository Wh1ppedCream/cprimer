/* Write your own version of the biggies function using lambdas.
   As a related example, we’ll revise our program from § 10.3.1 (p. 387) to report
   how many words are of a given size or greater. We’ll also change the output so
   that it prints only the words of the given length or greater.*/

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

	std::stable_sort(strs.begin(), strs.end(), [] (const string &s1, const string &s2)
			{ return s1.size() < s2.size(); });

	auto start = std::find_if(strs.begin(), strs.end(), [num] (const string &s) {
			return (s.size() >= num);
			}
			);
	
	cout << "strings greater than " << num << ": " << endl;
	for_each(start, strs.end(), [num] (const string &str) {
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

