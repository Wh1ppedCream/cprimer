#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() 
{
	vector<int> vecint;
	int num = 0;
	while (cin >> num) {
		vecint.push_back(num);
	}
	for (decltype(vecint.size()) ind = 0;
			ind < vecint.size();
			++ind) {
		cout << vecint[ind] + vecint[ind + 1] << endl;
	}
	return 0;
}

