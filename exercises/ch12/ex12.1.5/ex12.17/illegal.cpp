#include <memory>
#include <iostream>

using std::unique_ptr;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int ix = 1024, *pi = &ix, *pi2 = new int(2048);
	typedef unique_ptr<int> IntP;

	IntP p0(ix);
	//illegal, ix is not dynamically allocated memory

	IntP p1(pi);
	//will compile, but will cause error when running, when deleting, ix is not in dynamic memory

	IntP p2(pi2);
	//will compile, but will cause dangling pointer

	IntP p3(&ix);
	//illegal, when deleting, ix is not in dynamic memory

	IntP p4(new int(2048));
	//legal

	IntP p5(p2.get());
	//illegal, two unique pointers are pointing at same object, so it will be double freed


	return 0;
}

