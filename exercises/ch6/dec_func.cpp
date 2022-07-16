#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int func(int, int);

typedef int(*fir)(int, int) ;

int addd(int a, int b) {
	return (a + b);
}

int subtr(int c, int d) {
	return (c - d);
}

int multi(int e, int f) {
	return (e * f);
}

int divi(int g, int h) {
	return (g / h);
}

int main()
{
	int num1, num2;
	vector<fir> vec1 = {*addd, *subtr, *multi, *divi};
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	cout << endl;
	for(auto pro : vec1) {
		cout << "the return value for this function is: ";
		cout << pro(num1, num2) << endl;
	}
	return 0;
}

