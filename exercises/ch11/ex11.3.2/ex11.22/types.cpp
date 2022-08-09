#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <utility>

using std::vector;
using std::string;
using std::map;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	map<string, vector<int>> keyval;

	vector<int> vint{1, 2, 3, 4};
	string word = "bruh";

	std::pair<map<string, vector<int>>::iterator, bool> ins = keyval.insert(make_pair(word, vint));

	cout << "word: " << (ins.first)->first;
	cout << "\nnumbers: ";
	for (int &n : (ins.first)->second) {
		cout << n << " ";
	}
	cout << endl;
	return 0;
}

