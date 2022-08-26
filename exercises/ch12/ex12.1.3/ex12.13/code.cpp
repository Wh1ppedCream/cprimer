//delete p frees memory pointed at by sp. When other shared pointers to this memory are destroyed, memory will be
// freed again (double free)
#include <memory>
#include <iostream>

using std::shared_ptr;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto sp = std::make_shared<int>();
	auto p = sp.get();
	delete p;
	return 0;
}

