#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void reset(int &num) {
	num = 0;
}

int main()
{
	int curr;
	do {
		cout << "enter a value: ";
		cin >> curr;
		reset(curr);
		cout << "the new value: " << curr;
	} while (cin);
	return 0;
}
