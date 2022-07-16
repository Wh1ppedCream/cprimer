#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() 
{
	int grade = 0;
	cin >> grade;
	string final_grade = (grade > 90) ? "high pass" 
					  : (grade > 75) ? "pass" 
					  : (grade < 60) ? "fail" : "low_pass";
	cout << final_grade << endl;
	return 0;
}
