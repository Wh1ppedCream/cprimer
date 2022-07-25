#include <iostream>
#include <string>

using std::cin;
using std::endl;

int main()
{
	std::string str;
	str.reserve(120);
	char ch;
	while (cin >> ch) {
		str.push_back(ch);
	}
	return 0;
}
	
