#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.isbn() < rhs.isbn();
}

int main()
{
	// bookstore can have several transactions with the same ISBN
	// elements in bookstore will be in ISBN order
	multiset<Sales_data, decltype(compareIsbn)*>
		bookstore(compareIsbn);

	using comptype = bool (*) (const Sales_data&, const Sales_data&);
	multiset<Sales_data, comptype iter = bookstore.begin();
}

