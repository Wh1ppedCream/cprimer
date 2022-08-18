#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	StrBlob b1;
	{
		StrBlob b2 = {"a", "an", "the"}; //b2: 3 elements    , b1: 0 elements
		b1 = b2;                         //b2: 3 elements    , b1: 3 elements
		b2.push_back("about");		 //b2: 4 elements    , b1: 4 elements
	} 					 //b2: 0 elements    , b1: 4 elements
}

