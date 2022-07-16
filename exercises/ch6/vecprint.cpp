#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void vecprint(vector<int> &ve1, int ind, int siz) {
	if (ind < siz) {
		cout << ve1[ind] << " ";
		#ifndef NDEBUG
		cout << "the size of the vector is: " << siz << endl;
		#endif
		vecprint(ve1, ++ind, siz);
	}
}

int main()
{
	vector<int> vec1 = {1, 2, 3, 4, 5};
	int size = vec1.size();
	vecprint(vec1, 0, size);
	return 0;
}
