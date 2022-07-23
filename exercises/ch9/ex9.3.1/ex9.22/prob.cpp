#include <vector>
#include <iostream>
#include <iterator>

using std::vector;
using std::iterator;
using std::cout;
using std::endl;



void double_and_insert(std::vector<int>& v, int some_val)
{
    auto mid = [&]{ return v.begin() + v.size() / 2; };
    for (auto curr = v.begin(); curr != mid(); ++curr)
        if (*curr == some_val)
            ++(curr = v.insert(curr, 2 * some_val));
}

void dblins_till_mid(vector<int> &v, int val) {
	vector<int>::iterator iter = v.begin(),
		mid = v.begin() + v.size()/2;
	while (iter != mid) {
		if (*iter == val) 
			++(iter = v.insert(iter, 2 * val));
		++iter;
	}
}

int main()
{
	std::vector<int> v{ 1, 9, 1, 9, 9, 9, 1, 1 };
	double_and_insert(v, 1);

	for (auto i : v)
		std::cout << i << std::endl;
	return 0;
}
