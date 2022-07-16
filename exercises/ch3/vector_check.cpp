#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{	
	vector<string> vec1{10, "hi"};
	decltype(vec1.size()) siz_vec = vec1.size();
	cout << siz_vec << " " << endl;
	for (auto r = vec1.cbegin(); r != vec1.cend() && !r->empty(); ++r)
		cout << *r << endl;
	return 0;
}

