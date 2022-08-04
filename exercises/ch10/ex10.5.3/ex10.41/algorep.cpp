#include <iostream>
#include <algorithm>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	replace(beg, end, old_val, new_val);      
	//replaces all occurrences of old_val in the range with new_val

	replace_if(beg, end, pred, new_val);
	//replaces all occurrences where pred is true with new_val

	replace_copy(beg, end, dest, old_val, new_val);
	//copies the range with all old_val's replaced with new_val to the destination

	replace_copy_if(beg, end, dest, pred, new_val);
	// copies the range with all the values where pred is true, replaced with new val, to dest
}

