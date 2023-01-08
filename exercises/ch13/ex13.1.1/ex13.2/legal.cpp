/*
Explain why the following declaration is illegal:
	Sales_data::Sales_data(Sales_data rhs);

Reference not used, so copy will use copy constructor which will attempt to use copy constructor and so on.
Illegal.

   */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

}

