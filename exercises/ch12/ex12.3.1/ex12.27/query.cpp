// The TextQuery and QueryResult classes use only capabilities that
// we have already covered. Without looking ahead, write your own versions of these
// classes.


#include <iostream>
#include <fstream>
#include <memory>
#include <vector>
#include <string>
#include <map>
#include <set>

using std::ifstream;
using std::map;
using std::set;
using std::ostream;
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

class QueryResult;
ostream& print(ostream&, const QueryResult&);

/* TextQuery, will hold a vector and a map. 
   The vector will hold the text of the input file;
   the map will associate each word in that file to the set of line numbers on which that word appears.
   This class will have a constructor that reads a given input file and an operation to perform the queries. */

class TextQuery {
	friend QueryResult;
	public:
		explicit TextQuery(ifstream&);


		QueryResults query(const string &s);
	private:
		vector<string> lntxt;
		map<string, set<int>> lnwords;
};

/* we need to know how often it occurred, the line numbers on which it
   occurred, and the corresponding text for each of those line numbers.*/

class QueryResult {
	friend ostream& print(ostream &os, const QueryResult&);
	public:
		QueryResult(int i, string& s, shared_ptr<map<const int, const string>> mp) : 
			times(i), str(s), lns(mp) { }

	private:
		const int times;
		const string &str;
		shared_ptr<map<const int, const string>> lns;

};

TextQuery::TextQuery(ifstream &in) {
	string line, word;
	int num = 1;
	while (getline(in, line)) {
		istringstream words(line);
		set<int> fir = {num};
		while (words >> word) {
			auto ret = lnwords.emplace(word, fir);
			if (!ret.second) {
				lnwords[word].insert(num);
			}
		}
		lntxt.push_back(line);
		++num;
	}
}

QueryResult TextQuery::query(const string &s) {
	shared_ptr<map<const int, const string>> ptr;
	map<const int, const string> lines;
	set<int> &st = lnwords[s];
	int times = 0;
	for (auto iter = st.begin(); iter != st.end(); ++iter) {
		++times;
		lines.push_back(*iter, lntxt[*iter]);
	}
	ptr = make_shared(lines);
	return QueryResult(times, s, ptr);
}

ostream& QueryResult::print(ostream &os, const QueryResult& qry) {
	os << "the word: " << qry.str << " occurred " << qry.times << " times\n";
	os << "this word occurred on lines: \n";
	for (auto iter = lns.begin(); iter != lns.end(); ++iter) {
		os << "Line No." << iter->first << "    ";
		os << iter->second << "\n\n";
	}
	return os;
}







void runQueries(ifstream &infile)
{
	// infile is an ifstream that is the file we want to query
	TextQuery tq(infile); // store the file and build the query map
			      // iterate with the user: prompt for a word to find and print results
	while (true) {
		cout << "enter word to look for, or q to quit: ";
		string s;
		// stop if we hit end-of-file on the input or if a ’q’ is entered
		if (!(cin >> s) || s == "q") break;
		// run the query and print the results
		print(cout, tq.query(s)) << endl;
	}
}

int main(int argv, char* argc[])
{

}

