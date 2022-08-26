#include <memory>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::shared_ptr;

// ptr is created and initialized when process is called
void process(shared_ptr<int> ptr)
{
	cout << ptr.use_count()	<< endl; 	// use ptr
} // ptr goes out of scope and is destroyed


int main()
{
	auto p = new int();
	auto sp = make_shared<int>();
	process(sp);				
	//works

	process(new int());			
	//doesn't work, as plain pointers cannot be implicitly converted to shared pointers

	process(p);				
	//doesn't work, as plain pointers cannot be implicitly converted to shared pointers

	process(shared_ptr<int>(p));		//works
}
