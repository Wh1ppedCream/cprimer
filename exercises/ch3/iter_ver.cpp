#include <iostream>

using std::cout;
using std::endl;

using four_array = int[4];

int main() 
{
	int arr[3][4] = {{ 0, 1, 2, 3 }, { 4, 5, 6, 7 }, { 8, 9, 10, 11 }};

	for (auto &row : arr) {
		for (int &val : row) {
			cout << val;
		}
	}
	cout << endl;

	for (int ind = 0; ind <= 2; ++ind) {
		for (int ind2 = 0; ind2 <= 3; ++ind2) {
			cout << arr[ind][ind2];
		}
	}
	cout << endl;

	for (auto *fir = arr; fir != arr + 3; ++fir) {
		for (int *num = *fir; num != *fir + 4; ++num) {
			cout << *num;
		}
	}
	cout << endl;

	return 0;
}
