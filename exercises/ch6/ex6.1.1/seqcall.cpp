#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int seqcall() {
	static int calls = 0;
	return calls++;
}

int main()
{
	char value;
	do {
		cout << "call function? (y/n): ";
		cin >> value;
		cout << endl;
		if (value == 'y') {
			cout << seqcall() << endl;
		} else {
			break;
		}
	} while (cin);
	return 0;
}
