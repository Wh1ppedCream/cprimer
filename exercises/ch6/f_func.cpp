#include <iostream>

using std::cout;
using std::endl;

void f() {
	cout << "the void f() func" << endl;
}

void f(int) {
	cout << "the void f(int) func" << endl;
}

void f(int, int) {
	cout << "the void f(int, int) func" << endl;
}

void f(double, double = 3.14) {
	cout << "the void f(double, double = 3.14) func" << endl;

}

int main()
{
	f(2, 42);
	f(42);
	f(42, 0);
	f(2.56, 3.14);
	return 0;
}
