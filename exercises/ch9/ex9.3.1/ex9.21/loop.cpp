// the same, except replace list with vector


#include <vector>
#include <string>

int main() {

	vector<string> vec;
	auto iter = vec.begin();
	while (cin >> word)
		iter = vec.insert(iter, word); // same as calling push_front

}
