#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

//prints the strsues in a vector
void print_vec(vector<string> &vec) {
        cout << "strs in the vector now: " << endl;
        for (auto &n : vec) {
                cout << n << ", ";
        }
        cout << "\n" << endl;
}

//with iterators
void print_vec(vector<string> &vec, vector<string>::iterator iter) {
        cout << "strs in the vector now: " << endl;
        for (auto &n : vec) {
		if (*(iter - 1) != n) {
                	cout << n << ", ";
		} else {
			break;
		}
        }
        cout << "\n" << endl;
}

//adds strsues to vector till something specific is entered:
void vec_add(vector<string> &strs) {
        cout << "Insert 'finishin' to stop" << endl;
        cout << "Insert the strings to add: \n" << endl;
        string str;
        while (cin >> str) {
                if (str == "finishin") break;
                strs.push_back(str);
        }
	cout << endl;
}


bool isfive(string &str) {
	return (str.size() >= 5);
}

int main()
{
	vector<string> words;
	vec_add(words);
	print_vec(words);
	auto last5 = std::partition(words.begin(), words.end(), isfive);
	print_vec(words, last5);
	return 0;
}

