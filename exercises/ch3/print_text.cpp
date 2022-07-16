#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() 
{
	vector<string> text;
	string word;
	while (cin >> word) 
		text.push_back(word);
	for (auto it = text.begin();
			it !=text.end() && !it->empty(); ++it)
		for (char &c : *it)
			if (isalpha(c))
				c = toupper(c);
	for (auto mm = text.cbegin();
			mm != text.cend() && !mm->empty(); ++mm)
		cout << *mm << " ";
	cout << endl;
}


