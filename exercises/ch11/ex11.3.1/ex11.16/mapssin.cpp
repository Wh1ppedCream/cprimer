#include <map>
#include <iostream>

using std::map;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	map<int, int> mint;
	mint[1] = 5;
	auto v = mint.begin();
	int i = v->second;
	cout << "int i : " << i << endl;
	return 0;

}

