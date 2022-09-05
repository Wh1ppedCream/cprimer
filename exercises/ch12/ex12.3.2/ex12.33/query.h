/* Define your own versions of the TextQuery and QueryResult
   classes and execute the runQueries function from § 12.3.1 (p. 486). */

#include "strblob.h"
#include <sstream>
#include <iostream>
#include <fstream>
#include <memory>
#include <vector>
#include <string>
#include <map>
#include <set>

using std::make_shared;
using std::istringstream;
using std::shared_ptr;
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

class TextQuery {
	friend QueryResult;
	public:
		TextQuery(ifstream&);
		QueryResult query(const string &s) const;

	
	private:
		StrBlob lntxt;
		map<string, shared_ptr<set<int>>> lnwords;
};


class QueryResult {
	friend ostream& print(ostream &os, const QueryResult&);
	public:
		QueryResult(const string& s, StrBlob f, shared_ptr<set<int>> p) :
			str(s), vstr(f), lns(p) { }
		
		set<int>::iterator begin() const {
			auto iter = lns->begin();
			return iter;
		}

		set<int>::iterator end() const {
			auto iter = lns->end();
			return iter;
		}

		shared_ptr<StrBlob> get_file() const { return make_shared<StrBlob>(vstr);}



	private:
		const string &str;
		StrBlob vstr;
		shared_ptr<set<int>> lns;
};

TextQuery::TextQuery(ifstream &in)
{
	string line;
	int num = 1;
	while (getline(in, line)) {
		lntxt.push_back(line);
		istringstream words(line);
		string word;  
		while (words >> word) {
			auto &lines = lnwords[word];
			if (!lines)
				lines.reset(new set<int>);
			lines->insert(num); 
		}
		++num;
	}
}


QueryResult TextQuery::query(const string &s) const 
{
	static shared_ptr<set<int>> nodata(new set<int>);
	auto locat = lnwords.find(s);
	if (locat == lnwords.end())
		return QueryResult(s, lntxt, nodata);
	else 
		return QueryResult(s, lntxt, locat->second);
}



ostream& print(ostream &os, const QueryResult& qry) {
	os << "the word: " << qry.str << " occurred " << qry.lns->size() << " times\n";
	os << "this word occurred on lines: \n";
	for (auto num : *qry.lns) {
		os << "\n" << num << "\n";
		os << "Line No." << num << "    ";
		os << (qry.vstr).at(num - 1) << endl;
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

