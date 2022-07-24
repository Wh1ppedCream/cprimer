#include <vector>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::endl;

void in_chngsiz(vector<string> &svec) {
	//from question, svec has been changed to function parameter

//	vector<string> svec;			     // (original code) creates vector called svec
	svec.reserve(1024);			     // reserves space for 1024 characters
	string word;				     // creates a string called word
	cout << "enter words: " << endl;
	while (cin >> word) {			     // reads in words from standard input
		if (word == "stop") {
			break;
		}
		svec.push_back(word);		     // pushes words to back of svec
	}
	svec.resize(svec.size()+svec.size()/2);	     // resizes svec to contain 50% more characters then it does now

}

int main() 
{
	vector<string> vik;

	while (cin) {
		in_chngsiz(vik);

		cout << "capacity of vik: " << vik.capacity() << endl;
		cout << "size of vik: " << vik.size() << endl;
		cout << "\n\nPress enter to continue:" << endl;
	}

	for (auto &str : vik) {
		cout << str << " ";
	}
	return 0;
}
