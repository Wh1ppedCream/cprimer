#include <iostream>

using std::endl;
using std::cout;

int main(int argc, char *argv[]) 
{
	for (int i = 0; i < argc; ++i) {
		cout << "string " << i << " is: " << argv[i] << endl;
	}
	return 0;
}
