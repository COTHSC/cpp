
#include "Scalar.hpp"

int main( int argc, char **argv )
{
	if (argc == 2)
	{
		std::string to_be_converted;
		to_be_converted = argv[1];
		Scalar done(to_be_converted);
		done.print();
	}
	return 0;
}
