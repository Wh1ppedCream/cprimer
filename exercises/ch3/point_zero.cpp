#include <iostream>
#include <array>
#include <vector>

using std::cout;
using std::endl;
using std::end;

int main()
{
	int a[] = {0, 1, 2, 3, 4, 5, 6};
	for (int *point = a; point < end(a); ++point) {
		*point = 0;
	}
	for (auto i : a)
		cout << i << " ";
	cout << endl;
}
