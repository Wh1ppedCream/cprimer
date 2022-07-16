#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int point_int(int num, const int *pointnum) {
	return ((num > *pointnum) ? num : *pointnum);
}

int main()
{
	int first;
	int second;
	cout << "enter the first num and the point num: ";
	cin >> first >> second;
	int *point = &second;
	cout << "the larger value is: " << point_int(first, point) << endl;
	return 0;
}
