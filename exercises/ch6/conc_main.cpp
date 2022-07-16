#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char **str2) 
{
	string tot_str;
	for (int i = 0; i < argc; ++i) {
		tot_str += str2[i];
	}
	cout << tot_str << endl;
	return 0;
}
