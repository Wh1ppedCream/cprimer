#include <memory>
#include <iostream>
#include <string>
#include <cstring>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string str;
	cin >> str;
	char *car = new char[str.size()];
	strcpy(car, str.c_str());
	cout << car << endl;
	delete[] car;
	return 0;

}

