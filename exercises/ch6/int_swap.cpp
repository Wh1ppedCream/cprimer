#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void point_swap(int *m, int *n) {
	int swap = *m;
	*m = *n;
	*n = swap;
}

int main()
{
	int num1, num2;
	cout << "enter two numbers to swap: ";
	cin >> num1 >> num2;
	int *point1 = &num1;
	int *point2 = &num2;
	cout << endl;
	cout << "two pointers point towards: " << *point1 << " " << *point2 << endl;
	point_swap(point1, point2);
	cout << "now they point towards: " << *point1 << " " << *point2 << endl;
	return 0;

}
