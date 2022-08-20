#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool b() {
	int* p = new int;        //intializes dynamically allocated memory
	// . . .
	return p;		 // returns without freeing it
}

int main()
{

}

