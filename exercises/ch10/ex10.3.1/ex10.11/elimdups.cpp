#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

// comparison function to be used to sort by word length
bool isShorter(const string &s1, const string &s2)
{
return s1.size() < s2.size();
}

//prints the values in a vector
void print_vec(std::vector<string> &vec) {
        cout << "values in the vector now: " << endl;
        for (auto &str : vec) {
                cout << str << ", ";
        }
        cout << endl;
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
void sorle(vector<string> &strs) {
	print_vec(strs);
	elimDups(strs);
	print_vec(strs);
	std::stable_sort(strs.begin(), strs.end(), isShorter);
	print_vec(strs);
}

int main()
{
	vector<string> strings;
	vec_add(strings);
	sorle(strings);
	return 0;
}

