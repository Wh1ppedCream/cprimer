#include<iostream>
#include"printing.h"

using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;

int main() 
{
	int i = 0;
	int j[2] = {0, 1};
	print_mark(j);
	print_std(begin(j), end(j));
	print_siz(j, end(j) - begin(j));
	print_ref(j);
	return 0;
}

