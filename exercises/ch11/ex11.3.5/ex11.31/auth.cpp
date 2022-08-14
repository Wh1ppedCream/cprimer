/* Write a program that defines a multimap of authors and their works.
   Use find to find an element in the multimap and erase that element. Be sure your
   program works correctly if the element you look for is not in the map. */

#include <map>
#include <iostream>
#include <string>

using std::multimap;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	multimap<string, string> authors;

	auto add = [&authors] (string &writ, string &product) {
		authors.insert({writ, product});
	};
	auto print = [&authors] () {
		for (auto &pai : authors) {
			cout << "\nauthor: " << pai.first << "	book: " << pai.second << endl;
		}
	};	

	string auth, book;
	do {
		cout << "enter author name (no to stop): ";
		getline(cin, auth);
		if (auth == "no") break;
		cout << "enter book name (no to stop): ";
		getline(cin, book);
		if(book == "no") break;
		add(auth, book);
		cout << "books added: \n" << endl;
	} while (cin);


	print();

	string authfi, bookfi;
	cout << "enter author to find and remove: ";
	getline(cin, authfi);
	auto found = authors.find(authfi);
	if (found == authors.end()) {
		cout << "not present" << endl;
	} else {
		authors.erase(found);
	}

	print();
	return 0;	
}

