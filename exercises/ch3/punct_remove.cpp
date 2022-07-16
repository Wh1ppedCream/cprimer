#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
	string main_str;
	cin >> main_str;
	string::size_type n = main_str.size();
	for (decltype(main_str.size()) index = 0;
		index <= n; ++index) {
		if (ispunct(main_str[index]))
			continue;
		cout << main_str[index];
	}
	return 0;
}
