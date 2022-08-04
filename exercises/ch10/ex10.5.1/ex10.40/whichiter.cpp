#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	std::vector<int> vint{1, 2, 3, 4, 5};
	std::vector<int> vint2;

	std::copy(vint.begin(), vint.end(), vint2);
	// input, input, output

	std::reverse(vint.begin(), vint.end());
	//bidirectional, bidirectional

	std::unique(vint.begin(), vint.end());
	// foreward, foreward
}

