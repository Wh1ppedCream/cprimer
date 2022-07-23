#include <string>
#include <iostream>
#include <forward_list>

using std::string;
using std::cout;
using std::endl;
using std::forward_list;

void find_ins(forward_list<string> &flst,const string &find,const string &ins) {
	auto prev = flst.before_begin();
	auto curr = flst.begin();
	while (curr != flst.end()) {
		if ((*curr) == find) {
			curr = flst.insert_after(curr, ins);
			return;
		}
		else {
			prev == curr;
			++curr;
		}
	}
	curr = flst.insert_after(prev, ins);
	return;
}

void printt(forward_list<string> &flst) {
	cout << "foreward list: ";
	for (auto &word : flst) {
		cout << word << " ";
	}
	cout << endl;
}

int main()
{
	forward_list<string> forlst {"chicken", "sandwitches", "are", "good"};
	printt(forlst);
	find_ins(forlst, "are", "pretty");
	printt(forlst);
	find_ins(forlst, "chicken", "meat in" );
	printt(forlst);
	return 0;
}
