#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int *q = new int(42), *r = new int(100);              // two dynamic int pointers, q and r are intilized
	r = q;						     // r is changed to be a pointer to q, without freeing, 
							     // memory leakage occurs
	auto q2 = make_shared<int>(42), r2 = make_shared<int>(100);   // two shared pointers, q2 and r2 initialized
	r2 = q2;					     // ref count change: r2: 1->0, q2: 1->2;
							     // r2's original memory allocation is freed
}

