#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap_point(int* &point1, int* &point2) {
	int *change = point1;
	point1 = point2;
	point2 = change;
}

int main()
{
	int num1, num2;
	cout << "give two numbers: " << endl;
	cin >> num1 >> num2;
	int *first = &num1;
	int *second = &num2;
	cout << "point1: " << *first << "point2: " << *second << endl;
	cout << "swapping" << endl;
	swap_point(first, second);
	cout << "point1: " << *first << "point2: " << *second << endl;
	return 0;
}
