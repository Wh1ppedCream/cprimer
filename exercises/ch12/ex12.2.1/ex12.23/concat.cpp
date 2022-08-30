// Write a program to concatenate two string literals, putting the result
// in a dynamically allocated array of char. Write a program to concatenate two library
// strings that have the same value as the literals used in the first program.

#include <string>
#include <memory>
#include <cstring>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

string cat(const string& str1, const string& str2) {
	string str = str1 + " " + str2;
	size_t n = str.size();
	char *arr = new char[n];
	for (unsigned int i = 0; i <= n; ++i) {
		arr[i] = str[i];
	}
	string res = arr;
	delete[] arr;
	return res;
}



int main()
{
	string w1 = "chicken";
	string w2 = "wings";
	string res = cat(w1, w2);
	cout << res << endl;


	const char *cstr1 = "chicken ";
	const char *cstr2 = "wings";
	char *arr = new char[strlen(cstr1) + strlen(cstr2) + 1];
	strcpy(arr, cstr1);
	strcat(arr, cstr2);
	cout << arr << endl;
	delete[] arr;

	return 0;

}

