#include <vector>

int main()
{
	std::vector<int> vec(25);         // 25 elements, initialized to 0
	vec.resize(100);                  // changed to 100 initialized to 0, (75 elements added)
	vec.resize(10);			  // changed to 10 elements initialized to 0 (90 elements removed from end)
}

