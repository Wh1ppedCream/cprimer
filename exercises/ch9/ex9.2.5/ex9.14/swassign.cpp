#include <vector>
#include <list>
#include <iostream>
#include <string>

using std::string;
using std::vector;
using std::list;
using std::cout;
using std::endl;

void ass(list<char*> &li, vector<string> &vec) {
	vec.assign(li.begin(), li.end());
}

int main(int argc, char* argv[])
{
	list<char*> lchar;
	vector<string> strvec;
	for (int i = 1; i < argc; ++i) {
		lchar.push_back(argv[i]);
	}
	cout << "words in list: ";
	for (auto &m : lchar) {
		cout << m << " ";
	}
	cout << endl;

	ass(lchar, strvec);
	cout << "words in vector: ";
	for (auto &br : strvec) {
		cout << br << " ";
	}
	cout << endl;
	return 0;
}
