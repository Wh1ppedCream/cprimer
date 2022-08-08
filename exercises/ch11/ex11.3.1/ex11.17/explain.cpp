#include <set>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

using std::multiset;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	multiset<string> c;
	vector<string> v;

	copy(v.begin(), v.end(), inserter(c, c.end()));
	//works

	copy(v.begin(), v.end(), back_inserter(c));
	//doesn't work, as copy uses push_back which sets do not have

	copy(c.begin(), c.end(), inserter(v, v.end()));
	//works

	copy(c.begin(), c.end(), back_inserter(v));
	//works


}

