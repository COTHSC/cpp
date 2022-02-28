#ifndef SPAN_HPP
#define SPAN_HPP


#include <vector>
#include <algorithm>
#include <iostream>

class Span {

	public:

		Span( void );
		Span( unsigned int N );
		Span( Span const & src );
		~Span( void );

		
		Span	&operator= ( Span const & rhs );
		//Overloaded addnumber
		void	addNumber(int const &);
		void	addNumber(std::vector<int>::iterator, std::vector<int>::iterator);

		unsigned int shortestSpan();
		unsigned int longestSpan();
	private:
		unsigned int _N;
		std::vector<int> _stored_int;

};
#endif
