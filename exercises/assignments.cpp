#include <iostream>
int main() 
{	
	int i = 0, &r = i;
	auto a = r;	
	const int ci = i, &cr = ci;
	auto b = ci; // b is an int (top-level const in ci is dropped)
	auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
	auto d = &i; // d is an int* (& of an int object is int*)
	auto e = &ci; // e is const int* (& of a const object is low-level const)
	
	std::cout << "a = " << a << "b = " << b << "c = "
		<< c << "d = " << d << "e = " << e << std::endl;
	a = 42;
	*d = 42;
	b = 42;
	e = &c;
	c = 42;
	std::cout << "a = " << a << "b = " << b << "c = "
		<< c << "d = " << d << "e = " << e << std::endl;
	return 0;
}
