/* What type can be used to subscript a map? What type does the sub-
script operator return? Give a concrete example—that is, define a map and then write
the types that can be used to subscript the map and the type that would be returned
from the subscript operator */

#include <map>
#include <iostream>
#include <string>

using std::map;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	map<int, string> sub = {{1, "first"}, {2, "second"}};
	int num = 1;
	while (num < 3) {
		cout << "the key: " << num << " has a value of : " << sub[num] << endl;
		++num;
	}
	return 0;



}

