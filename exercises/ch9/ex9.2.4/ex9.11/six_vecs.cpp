#include <vector>
#include <iterator>

using std::vector;

int main()
{
	vector<char> vec1('c', 5);
	vector<char> vec2(5);
	vector<char> vec3 = {'a', 'b', 'c'};
	vector<char> vec4(vec1);
	vector<char> vec5(vec3.begin(), vec3.end());
	vector<char> vec6;

	return 0;
}

