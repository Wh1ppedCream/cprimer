#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int var;
	cout << "input the value: ";
	cin >> var;
	cout << "\n decrementing the value: \n";
	auto zer = [&var] () { 
		while (var > 0) { --var;}
		return true;
	};
	cout << "has the value been decremented ? : " << zer();
	cout << "\n current val of var: " << var << endl;
	return 0;
		
}

