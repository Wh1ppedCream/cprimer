#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	char s1[256], s2[256];
	cin.getline(s1, 256, '\n');
	cin.getline(s2, 256, '\n');
	if (strcmp(s1, s2) > 0) {
		cout << "s1 is greater" << endl;
	} else if (strcmp(s1, s2) < 0) {
		cout << "s2 is greater" << endl;
	} else {
		cout << "same line" << endl;
	}
	char s3[256];
	strcpy(s3, s1);
	strcat(s3, s2);
	cout << s3 << endl;
	return 0;
}
