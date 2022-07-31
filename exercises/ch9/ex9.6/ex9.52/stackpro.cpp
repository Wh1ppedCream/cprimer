/* Use a stack to process parenthesized expressions. 
   When you see an open parenthesis, note that it was seen. 
   When you see a close parenthesis after an open parenthesis, 
   pop elements down to and including the open parenthesis off the stack.
   ush a value onto the stack to indicate that a parenthesized expression was replaced.
   371 */

#include <stack>
#include <iostream>
#include <string>

using std::cout;
using std::stack;
using std::endl;
using std::string;

int str_eval(const string &str) {

	for (const auto &c : str) {
		if (c.isalnum()) {
		} else {
			switch(c) {
				case '+':
					op = +



stack<string> par_process(string &str, stack<string> &st) {
	stack<string> log;                                   //logs changes;
	int op_par = 0;                                      //no. of open parenthesis
	int cl_par = 0;                                      //no. of closing parenthesis

	for (auto &c : str) {

		if (c != ')') {
			st.push(c);				     //push each char onto stack st
			log.push(string(" pushed char: " + c + " onto stack "));
			++op_par;
		} else {
			

	}

}


int main()
{
	string expr = "(5 + (9 * (3 + 2) - (8 * 3)) - 5)";      //example expression;
	int op_par = 0;
