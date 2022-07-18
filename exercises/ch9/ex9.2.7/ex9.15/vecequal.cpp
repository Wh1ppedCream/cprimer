#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

bool vecomp(vector<int> v1, vector<int> v2) {
	if (v1 == v2) {
		return true;
	} else {
		return false;
	}
}

int main() 
{
	vector<int> vec1 = {1, 3, 9, 27};
	vector<int> vec2 = {1, 2, 4, 8};
	vector<int> vec3 = {1, 3, 9, 27};

	cout << "vector1 and 2 are equal? ";
	cout << (vecomp(vec1, vec2) ? "true" : "false") << endl;

	cout << "vector1 and 3 are equal? ";
	cout << (vecomp(vec1, vec3) ? "true" : "false") << endl;

	return 0;
}


