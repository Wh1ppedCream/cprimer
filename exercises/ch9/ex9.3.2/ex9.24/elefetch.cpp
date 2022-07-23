#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec1;            
	auto val1 = vec1.at(0);
	auto val2 = vec1.front();
	auto val3 = vec1[0];
	auto val4 = vec1.begin();
	cout << "at: " << val1 << " front: " << val2 << " subscript: " << val3 << " begin: " << *val4 << endl;
	return 0;
}
