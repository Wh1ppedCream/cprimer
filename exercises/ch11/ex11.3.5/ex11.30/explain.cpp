#include <map>
#include <string>
#include <iostream>

using std::multimap;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	multimap<string, string> authors;
	authors.insert({"Barth, John", "Sot-Weed Factor"});
	authors.insert({"Alain de Botton", "chickens recipe"});
	authors.insert({"Barth, John", "Lost in the Funhouse"});
	string search_item("Alain de Botton"); 
	for (auto pos = authors.equal_range(search_item);
			pos.first != pos.second; ++pos.first)
		cout << pos.first->second << endl;
	// pos.first->second: here pos is assigned to the pair containing the iterator range for the searched item
	// in authors. The first iterator is selected and the value from the key-value pair is dereferenced
	return 0;
}

