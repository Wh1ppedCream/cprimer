// all size_type('s) are unsigned functions, so they are automatically turned into positive numbers, so 
// comparing to zero is not needed

#include <string>
#include <iostream>
#include <vector>
#include <memory>


class StrBlob {

	public:
		typedef std::vector<std::string>::size_type vstr_size;


		//constructors
		StrBlob();
		StrBlob(std::initializer_list<std::string>);


		// vector functions
		vstr_size size() const {return p1->size(); };
		bool empty() const {return p1->empty(); };


		// add/remove
		void push_back(const std::string &st) {p1->push_back(st);};
		void pop_back();


		//element access
		std::string& front()
		{
			check(0, "front on empty StrBlob");
			return p1->front();
		}
		std::string& back()
		{
			check(0, "back on empty StrBlob");
			return p1->back();
		}
		const std::string& front() const {
			check(0, "front on empty StrBlob");
			return p1->front();
		}
		const std::string& back() const {
			check(0, "back on empty StrBlob");
			return p1->back();
		}

	private: 

	void check(vstr_size i, const std::string &msg) const;

	private:
		std::shared_ptr<std::vector<std::string>> p1;
};

//constructors
StrBlob::StrBlob() : p1(std::make_shared<std::vector<std::string>>() ) {};

StrBlob::StrBlob(std::initializer_list<std::string> il) : 
	p1(std::make_shared<std::vector<std::string>> (il) ) {};


//add/remove 
void StrBlob::pop_back() {
	check(0, "pop_back on empty StrBlob");
	p1->pop_back();
}




//private
void StrBlob::check(vstr_size i, const std::string &msg) const {
	if (i > p1->size()) {
		throw std::out_of_range(msg);
	}
}

