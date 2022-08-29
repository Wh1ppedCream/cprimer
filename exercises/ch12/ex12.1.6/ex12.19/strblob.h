/*Define your own version of StrBlobPtr and update your StrBlob class with 
  the appropriate friend declaration and begin and end members. */

#ifndef STRLOB_H
#define STRLOB_H

#include <string>
#include <iostream>
#include <vector>
#include <memory>

class StrBlobPtr;

class StrBlob {
		friend class StrBlobPtr;

	public:
		
		StrBlobPtr begin();
		StrBlobPtr end();

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


class StrBlobPtr {

	public:
		//constructors
		StrBlobPtr() : curr(0) { };
		StrBlobPtr(StrBlob &a, size_t sz = 0) : 
			wp(a.p1), curr(sz) { };

		std::string& deref() const;
		StrBlobPtr& incr();

	private: 

		std::shared_ptr<std::vector<std::string>>
			check(size_t, const std::string&) const;

	private:

		std::weak_ptr<std::vector<std::string>> wp;
		size_t curr;

};

std::shared_ptr<std::vector<std::string>>
StrBlobPtr::check(size_t i, const std::string& msg) const {
	auto sp = wp.lock();
	if (wp.expired()) {
		throw std::runtime_error("unbound StrBlobPtr");
	}
	if (i > sp->size()) {
		throw std::out_of_range(msg);
	}
	return sp;
}

std::string& StrBlobPtr::deref() const {
	auto ptr = check(curr, "dereferece past end");
	return (*ptr)[curr];
}

StrBlobPtr& StrBlobPtr::incr() {
	auto ptr = check(curr, "incremented past end");
	++curr;
	return *this;
}

StrBlobPtr StrBlob::begin() {return StrBlobPtr(*this, 0); };
StrBlobPtr StrBlob::end() {return StrBlobPtr(*this, p1->size()); };

#endif
