#include <memory>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int *pa = new int[10];
	for (int i = 0; i <= 10; ++i) {
		pa[i] = 10;
		cout << i << "th integer is :" << pa[i] << "\n";
	}
	cout << endl;
	delete[] pa;
	return 0;

}

