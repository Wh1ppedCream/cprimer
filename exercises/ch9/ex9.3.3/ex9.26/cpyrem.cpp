#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;

void vecprint(vector<int> &vec) {
	cout << "vector: ";
	for (int &in : vec) {
		cout << in << " ";
	}
	cout << endl;
}

void liprint(list<int> &li) {
	cout << "list: ";
	for (int &in : li) {
		cout << in << " ";
	}
	cout << endl;
}

int main()
{
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

	vector<int> vec;
	list<int> li;

	for (int &num : ia) {
		vec.push_back(num);
		li.push_back(num);
	}
	vecprint(vec);
	liprint(li);

	auto iterv = vec.begin();
	auto iterl = li.begin();

	while (iterv != vec.end()) {
		if (((*iterv) % 2) == 0)
			iterv == vec.erase(iterv);
		else {
			++iterv;
		}
	}

	while (iterl != li.end()) {
                if (*iterl % 2) {
                        iterl = li.erase(iterl);
                } else {
                        ++iterl;
                }
        }

	liprint(li);
	vecprint(vec);
	return 0;
}


