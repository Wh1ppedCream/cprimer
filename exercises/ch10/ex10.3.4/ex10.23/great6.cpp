#include <functional>

using std::placeholders::_1;
using std::string;

bool no_greater(string &str, unsigned int num) {
	return str.size() >= num;
}

int main()
{
	bind(no_greater, _1, 6);  // the arguments which bind takes are: function(1) and the argument list(n) , 
				  //  so (n + 1) arguments
	return 0;
}

