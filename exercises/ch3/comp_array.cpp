#include <iostream>

using std::cout;
using std::endl;
using std::end;
using std::begin;

int main() 
{
	int a1[] = {0, 1, 2, 3, 4, 5};
	int a2[] = {0, 3, 2, 3, 4, 5};
	

	int *begin1 = begin(a1), *end1 = end(a1);
	int *begin2 = begin(a2), *end2 = end(a2);

	for(int i; begin1 != end1 && begin2 != end2; ++i) {
		if (*begin1 != *begin2) {
			cout << "not same" << endl;
			return 0;
		} else {
			begin1 += 1;
			begin2 += 1;
			continue;
		}
	}
	cout << "the same" << endl;
	return 0;
}
