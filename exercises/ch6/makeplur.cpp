#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cin;
using std::cout;

// return the plural version of word if ctr is greater than 1
inline string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
	return (ctr > 1) ? word + ending : word;
}

int main()
{
	string suc = "success";
	string fail = "failure";
	cout << make_plural(1, suc) << endl;
	cout << make_plural(2, suc) << endl;
	cout << make_plural(2, suc, "es") << endl;
	cout << make_plural(1, fail) << endl;
	cout << make_plural(2, fail) << endl;
	cout << make_plural(2, fail, "ed") << endl;
	return 0;
}

