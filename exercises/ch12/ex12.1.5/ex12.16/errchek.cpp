#include <memory>
#include <iostream>

using std::unique_ptr;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	unique_ptr<int> i1(new int(1));
	unique_ptr<int> i2;
	i2 = i1;
	return 0;
}

