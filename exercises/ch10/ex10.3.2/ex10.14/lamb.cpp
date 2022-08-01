#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int fir, sec;
	cout << "first number, second number: ";
	cin >> fir >> sec;
	auto sum = [] (int a, int b) { return (a + b); };
	cout << "the sum is: " << sum(fir, sec) << endl;
	return 0;
}

