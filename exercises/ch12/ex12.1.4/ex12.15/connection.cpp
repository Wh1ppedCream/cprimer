#include <memory>
#include <iostream>
#include <string>

using std::string;
using std::make_shared;
using std::shared_ptr;
using std::cin;
using std::cout;
using std::endl;

struct destination
{
	string address;
	int active_con = 0;
	destination() = default;
	destination(const string &st) : address(st) { };
};

struct connection 
{
	string address;
	int port;
	connection() = default;
	connection(const string &st, int num) : address(st), port(num) { };
};


connection connect(destination *dst) { // open the connection
	return connection(dst->address, dst->active_con);
}


void disconnect(connection &con) {	// close the given connection
	(con.address).clear();
	con.port = 0;
}

void end_connection(connection *p) {
	disconnect(*p);
}

void f(destination &d /* other parameters */) {
	d.active_con += 1;
	connection c = connect(&d);

	shared_ptr<connection> p(&c, [] (connection *p) { disconnect(*p); } );
	cout << "connection number: " << p->port << endl;
	d.active_con -= 1;
}


int main()
{
	auto d = destination("Talha's wifi");
	f(d);
	return 0;


}

