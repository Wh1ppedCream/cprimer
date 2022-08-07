#include <string>
#include <vector>
#include <utility>
#include <iostream>

using std::string;
using std::pair;
using std::cin;
using std::cout;
using std::endl;

void printt(std::vector<pair<string, int>> &vec) {
	for (auto &r : vec) {
		cout << "\n\nword: " << r.first << " number: " << r.second << endl;
	}
}


int main()
{
	std::vector<pair<string, int>> vec1;
	std::vector<pair<string, int>> vec2;
	std::vector<pair<string, int>> vec3;

	string word;
	int num;
	cout << "enter a string: ";
	while (cin >> word) {
		cout << "\nenter a number: ";
		cin >> num;
		vec1.push_back(make_pair(word, num));

		vec2.push_back(pair<string, int>(word, num));

		pair<string, int> p = {word, num};
		vec3.push_back(p);
		cout << "\nenter a string: ";
	}
	cout << endl;

	cout << "vec1" << endl;
	printt(vec1);
	cout << "vec2" << endl;
	printt(vec2);
	cout << "vec3" << endl;
	printt(vec3);
	return 0;

}

