#include "query.h"
#include <fstream>

int main(int argv, char* argc[])
{

	std::ifstream in(argc[1]);
        runQueries(in);
        return 0;
}
