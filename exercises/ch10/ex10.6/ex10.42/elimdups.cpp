#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using std::string;
using std::list;
using std::cin;
using std::cout;
using std::endl;

//prints the values in a list
void print_lst(std::list<string> &lst) {
        cout << "values in the list now: " << endl;
        for (auto &str : lst) {
                cout << str << ", ";
        }
        cout << endl;
}

//adds values to list till something specific is entered:
void lst_add(std::list<string> &stlst) {
	cout << "enter 'no' to stop reading in" << endl;
        cout << "Insert the strings to add: " << endl;
        string val;
        while (cin >> val) {
                if (val == "no") break;
                stlst.push_back(val);
        }
}

void elimDups(list<string> &stlst) {
	stlst.sort();
	cout << "\n";
	print_lst(stlst);
	stlst.unique();
	cout << "done removing\n" << endl;
}

int main()
{
	list<string> strings;
	lst_add(strings);
	cout << "\n";
	print_lst(strings);
	cout << "\n";
	elimDups(strings);
	print_lst(strings);
	return 0;
}

