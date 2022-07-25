// Write a program that initializes a string from a vector<char>.

#include <string>
#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() 
{
	vector<char> vch(100000000, 'h'); 
	string s(vch.begin(), vch.end());
	return 0;
}	
