#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void ref_swap(int &m, int &n) {
	int swap = m;
	m = n;
	n = swap;
}

int main()
{
	int num1, num2;
	cout << "enter two numbers to swap: ";
	cin >> num1 >> num2;
	cout << endl;
	cout << "two numbers towards: " << num1 << " " << num2 << endl;
	ref_swap(num1, num2);
	cout << "now they point towards: " << num1 << " " << num2 << endl;
	return 0;

}
