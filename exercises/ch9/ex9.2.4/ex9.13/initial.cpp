#include <vector>
#include <list>
#include <iostream>

using std::vector;
using std::list;
using std::cout;
using std::endl;

int main()
{	

	list<int> lint(5, 4);
	cout << "list of ints: ";
	for(auto &l : lint) {
		cout << l << " ";
	}
	cout << endl;

	cout << "vector of doubles: ";
	vector<double> vouble(lint.begin(), lint.end());
	for (auto &r : vouble) {
		cout << r << " ";
	}
	cout << endl;
}
