#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int absval(int m) {
	return ((m < 0) ? -m : m);
}

int main()
{
	int curr_val;
	cin >> curr_val;
	cout << absval(curr_val) << endl;
	return 0;
}
