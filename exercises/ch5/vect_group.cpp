#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> fir = {0, 1, 1, 4, 2, 8};
	vector<int> sec = {0, 1, 1, 2, 3, 5, 8};
	int fir_siz = fir.size();
	int sec_siz = sec.size();
	int n1, n2 = 0;
	if (fir_siz == sec_siz) {
		cout << ((fir == sec) ? "whole match" : "nomatch");
	} else {
		while ((n1 <= (fir_siz - 1)) && (n2 <= (sec_siz - 1))) {
			if (fir[n1] == sec[n2]) {
				++n1;
				++n2;
			} else {
				++n2;
			}
		}
		if ((n1 == fir_siz) && (n2 == sec_siz)) {
			cout << "they match";
		} else {
			cout << "no match";
		}
	}
	return 0;
}
