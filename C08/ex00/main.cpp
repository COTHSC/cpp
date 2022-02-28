#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iterator>

int randBetween(int low, int high) {	
	return (rand() % (high - low + low) + low);
}

template<typename T>
void fill_list(T & l) {
	typename T::iterator it = l.begin();
	while (it != l.end())
	{
		*it = randBetween(41, 43);
		it++;
	}
}

template<typename T>
void test_lists(void)
{	
	typename std::list<T> l(100); 
	fill_list(l);
	try
	{
		typename std::list<T>::const_iterator it = easyfind(l, 42);
		typename std::list<T>::const_iterator begin = l.begin();
		std::cout << "Value: " << *it << " found @ " << std::distance(begin, it) << std::endl ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

template<typename T>
void test_vectors(void)
{	
	typename std::vector<T> l(100); 
	fill_list(l);
	try
	{
		typename std::vector<T>::const_iterator it = easyfind(l, 42);
		typename std::vector<T>::const_iterator begin = l.begin();
		std::cout << "Value: " << *it << " found @ " << std::distance(begin, it) << std::endl ;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int main( void )
{
	srand(time(NULL));
	test_lists<int>();
	test_lists<unsigned int>();
	test_lists<float>();

	test_vectors<int>();
	test_vectors<unsigned int>();
	test_vectors<size_t>();
	test_vectors<float>();

	return 0;
}
