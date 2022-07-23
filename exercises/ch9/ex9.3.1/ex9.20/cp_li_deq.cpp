#include <iostream>
#include <deque>
#include <list>

using std::list;
using std::deque;
using std::cin;
using std::cout;
using std::endl;

std::ostream& readout(deque<int> &d1, std::ostream& os) {
	for (int &m : d1) {
		os << m << " ";
	}
	return os;
}

int main() 
{
	list<int> lis {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	deque<int> deq1;
	deque<int> deq2;

	for (int &n : lis) {
		if ((n % 2) == 0) {
			deq1.push_back(n);
		} else {
			deq2.push_back(n);
		}
	}
	
	cout << "even numbers: ";
	readout(deq1, cout) << endl;
	cout << "odd numbers: ";
	readout(deq2, cout) << endl;
	return 0;
}

