#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num;
	vector<int> vc;
	while (cin >> num) {
		vc.push_back(num);
	}
	for (auto &c : vc) {
		num = c;
		c = ((num % 2 == 0) ? num : (num * 2));
	}
	cout << endl;
	for (auto &curr : vc) {
		cout << curr << " ";
	}
	return 0;
}
