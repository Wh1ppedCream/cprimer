/* Given the definitions of name and numbers on page 365, what does
   numbers.find(name) return? */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string numbers("0123456789"), name("r2d2");

	if(numbers.find(name) == string::npos) {                  //since name is not present in numbers,
								  //will produce npos
		cout << "not present";
	}
	return 0;

}
