#include <iostream>
#include "printing.h"

using std::cout;
using std::endl;

void print_mark(const int *cp) {
	if (cp) 
		while (*cp)
			cout << *cp++ << " ";
	cout << "ending mark " << endl;
}

void print_std(const int *beg, const int *end) {
	while (beg != end) {
		cout << *beg++ << " ";
	}
	cout << "ending std" << endl;
}

void print_siz(const int ia[], size_t size) {
	for (size_t i = 0; i < size; ++i) {
		cout << ia[i] << " ";
	}
	cout << "ending siz" << endl;
}

void print_ref(const int (&arr)[2]) {
	for (auto num : arr) {
		cout << num << " ";
	}
	cout << "ending ref" << endl;
}
