#include <iostream>
int main()
{
	int initial = 5;
	int secondary = 2;
	int *point1 = &initial;
	std::cout << *point1 << std::endl;
	*point1 += secondary;
	std::cout << *point1 << std::endl;
	return 0;
}	
