#include <iostream>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;

int main()
{
	int i = 0;
	string word, var;
	while (cin >> word) {
		if (word == "NEG" || word == "ABS") {
		} else if (word == "+" || word == "-" || 
				word == "*" || word == "/") {
		} else {
			try {
				i = stoi(word);
				cout << "input was int: " << i;
				return 0;
			}
			catch(...) {
				var = word;
				cout << "input was var named: " << var << endl;
				return 0;
			}
		}
	}
	cout << "input was symbol" << endl;
	return 0;
}

	


