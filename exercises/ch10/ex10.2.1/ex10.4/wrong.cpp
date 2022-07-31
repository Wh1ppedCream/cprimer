#include <iostream>
#include <numeric>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	std::vector<double> vi = { 7.5, 198, 39, 429, 345, 440, 66, 432, 17, 500, 331 };
	cout << "the sum is: " <<  std::accumulate(vi.cbegin(), vi.cend(), 0) << endl;
	//as our initial value is 0, an int, the .5 in 7.5 is removed due to conversion
	return 0;
}

