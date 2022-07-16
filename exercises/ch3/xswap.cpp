#include <iostream>
#include <string>

using std::endl;
using std::cin;
using std::cout;
using std::string;

int main() 
{
	string str;
	cin >> str;
	decltype(str.size()) counter = 0;
	while (counter < str.size()) {
		str[counter] = 'X';
		++counter;
	}
	cout << str << endl;
	

	for (decltype(str.size()) index = 0;
			index <= str.size();
			++index) {
		str[index] = 'Y';
	}
	cout << str << endl;
	
	
	return 0;
}

