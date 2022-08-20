/* Redo the previous exercise, this time using shared_ptr. */ 

#include <memory>
#include <vector>
#include <iostream>
#include <initializer_list>

using std::make_shared;
using std::shared_ptr;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

shared_ptr<vector<int>> mkvint() {
	return make_shared<vector<int>>();
}

void rdint(shared_ptr<vector<int>> vint) {
	int i;
	while (cin >> i) {
		vint->push_back(i);
	}
}

void intprnt(const shared_ptr<vector<int>> vint) {
	for (auto beg = vint->begin(); beg != vint->end(); ++beg) {
		cout << *beg << endl;
	}
}

void process() {
	shared_ptr<vector<int>> vint = mkvint();
	rdint(vint);
	intprnt(vint);
}

int main()
{
	process();
	return 0;
	
}

