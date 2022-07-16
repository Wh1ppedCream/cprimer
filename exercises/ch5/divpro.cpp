#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	try {
		if (num2 == 0) {
			throw runtime_error("entered a 0 val");
		}
		cout << "div soln: " << (num1 / num2) << endl;
	} catch (runtime_error &error) {
		cout << error.what() << "0 entered as val" << endl;
	}
	return 0;
}
