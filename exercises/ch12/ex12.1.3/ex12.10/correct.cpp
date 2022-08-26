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
	shared_ptr<int> p(new int(42));
	cout << "objects sharing with p: " << p.use_count() << endl;
	process(shared_ptr<int>(p));
	cout << "objects sharing with p: " << p.use_count() << endl;
	return 0;
}
