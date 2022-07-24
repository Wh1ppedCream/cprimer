#include <vector>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::vector;
using std::string;

void in_chngsiz(vector<string> &svec) {
	
//	vector<string> svec;                         //(in question, svec has been changed to function parameter
						     //	 creates vector called svec
	svec.reserve(1024);			     // reserves space for 1024 characters
	string word;				     // creates a sstring called word
	while (cin >> word)			     // reads in words from standard input
		svec.push_back(word);		     // pushes words to back of svec
	svec.resize(svec.size()+svec.size()/2);	     // resizes svec to contain 50% more characters then it does now

}

int main() 
{
	vector<string> vik;
	in_chngsiz(vik);
	for (auto &str : vik) {
		cout << str << " ";
	}
	return 0;
}
