// Write a program that reads an input file a line at a time into a StrBlob
// and uses a StrBlobPtr to print each element in that StrBlob.

#include "strblob.h"
#include <fstream>
#include <sstream>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void process(const string& filename) {
	std::ifstream in(filename);
	string line, word;
	StrBlob sb;
	while (getline(in, line)) {
		sb.push_back(line);
	}


	
	for (StrBlobPtr beg = sb.begin(); !(beg == sb.end()); beg.incr()) {
		cout << beg.deref() << " ";
	}
	cout << endl;
}




int main(int argv, char* argc[])
{
	process(argc[1]);
	return 0;
}

