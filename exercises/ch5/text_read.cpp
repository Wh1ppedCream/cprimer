#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	char ch, ch_prev;
	int avow = 0, evow = 0, ovow = 0, ivow = 0, uvow = 0, non = 0, bl = 0, tb = 0, nl = 0,
	    fi = 0, ff = 0, fl = 0;

	while (cin.get(ch)) {
		switch (ch) {
			case ' ' :
				++bl;
				break;
			case '\t' :
				++tb;
				break;
			case '\n' :
				++nl;
				break;
			case 'a' :
			case 'A' :
				++avow;
				break;
			case 'o' :
			case 'O' :
				++ovow;
				break;
			case 'e' :
			case 'E' :
				++evow;
				break;
			case 'i' :
				++ivow;
				if (ch_prev == 'f')
					++fi;
				break;
			case 'I' :
				++ivow;
				break;
			case 'u' :
			case 'U' :
				++uvow;
				break;
			case 'f' :
				++non;
				if (ch_prev == 'f') 
					++ff;
				break;
			case 'l' :
				++non;
				if (ch_prev == 'f')
					++fl;
				break;
			default:
				++non;
				break;
		}
		ch_prev = ch;
	}
	cout << "blanks " << bl << '\n'
	     << "tabs " << tb << '\n'
	     << "newlines " << nl << '\n'
	     << "fi vals " << fi << '\n'
	     << "ff vals " << ff << '\n'
	     << "fl vals " << fl << '\n'
	     <<	"Number of vowel a: \t" << avow << '\n'
	     << "Number of vowel e: \t" << evow << '\n'
	     << "Number of vowel i: \t" << ivow << '\n'
	     << "Number of vowel o: \t" << ovow << '\n'
	     << "Number of vowel u: \t" << uvow << '\n'
	     << "everything else: " << non << endl;
	return 0;
}
