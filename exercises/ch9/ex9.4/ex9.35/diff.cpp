#include <vector>

using std::vector;

int main()
{
	vector<int> vec1 {1, 2, 3, 4, 5};

	vec1.capacity();  // .capacity() here produces the maximum number of elements the vector can hold before
			  // it must be reallocated;
	
	vec1.size();      // .size() here produces the current number of elements which are contained within the 
			  // vector. The value produced by .size() is always less than or equal to the value produced
			  // by .capacity()
}
	
