#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int cap, sec;
	cout << "first number, second number: ";
	cin >> cap >> sec;
	auto sum = [cap] (int b) { return (cap + b); };
	cout << "the sum is: " << sum(sec) << endl;
	return 0;
}

