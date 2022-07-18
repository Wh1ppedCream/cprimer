#include <vector>
#include <list>
#include <iostream>

using std::list;
using std::cout;
using std::endl;
using std::vector;

bool vecomp(vector<int> &v1, list<int> &ls) {
	if (v1.size() != ls.size()) {
		return false;
	} else {
		int i = 0;
		for (int &in : ls) {
			if (in != v1[i]) {
				return false;
			}
			++i;
		}
		return true;
	}
}

int main() 
{
	vector<int> vec1 = {1, 3, 9, 27};
	list<int> lst1 = {1, 2, 4, 8};
	list<int> lst2 = {1, 3, 9, 27};

	cout << "vector1 and lst1 are equal? ";
	cout << (vecomp(vec1, lst1) ? "true" : "false") << endl;

	cout << "vector1 and lst2 are equal? ";
	cout << (vecomp(vec1, lst2) ? "true" : "false") << endl;

	return 0;
}


