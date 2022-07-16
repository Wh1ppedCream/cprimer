#include <iostream>
#include "chapter6.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{	
	int numberr;
	cout << "give num to factorial: ";
	cin >> numberr;
	cout << fact(numberr) << endl;
}
