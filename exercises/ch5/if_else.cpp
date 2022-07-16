#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
	int num_grade;


	while (cin >> num_grade) {


		cout << ((num_grade < 60) ? scores[0] :
				((num_grade > 100) ? "highval" : scores[(num_grade / 10) - 5]));


		if (num_grade < 60) {
			cout << scores[0];
		} else if (num_grade <= 100) {
			if ((num_grade % 10) > 7) {
				cout << "+";
			} else if ((num_grade % 10) < 3) {
				cout << "-";
			}
			cout << scores[(num_grade / 10) - 5];
		}
	}
	return 0;
}
