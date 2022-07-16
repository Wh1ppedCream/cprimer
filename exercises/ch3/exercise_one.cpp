#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int curr_num = 50;
	int total = 0;
	while (curr_num < 101) {
		total += curr_num;
		++curr_num;
	}
	cout << total << endl;


	int tenth = 10;
	while (tenth >= 0) {
		cout << tenth << endl;
		--tenth;
	}

	int first = 0, second = 0;
	cin >> first >> second;
	if (first > second) {
		int swap = 0;
		swap = first;
		first = second;
		second = swap;
	}
	while (first <= second) {
		cout << first << endl;
		++first;
	}
	return 0;
}
