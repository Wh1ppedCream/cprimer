/* Write a function that returns a dynamically allocated vector of ints.
   Pass that vector to another function that reads the standard input to give values to
   the elements. Pass the vector to another function to print the values that were read.
   Remember to delete the vector at the appropriate time. */

#include <memory>
#include <vector>
#include <iostream>
#include <initializer_list>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

vector<int> *mkvint() {
	vector<int> *vi = new vector<int>;
	return vi;
}

void rdint(vector<int> *vint) {
	int i;
	while (cin >> i) {
		vint->push_back(i);
	}
}

void intprnt(const vector<int> *vint) {
	for (auto beg = vint->begin(); beg != vint->end(); ++beg) {
		cout << *beg << endl;
	}
}

void process() {
	vector<int> *vint = mkvint();
	rdint(vint);
	intprnt(vint);
	delete vint;
}

int main()
{
	process();
	return 0;
	
}

