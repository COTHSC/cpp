#include "Span.hpp"
#include <iostream>

Span::Span( unsigned int N ) : _N(N) {

	// std::cout << "Span - Default constructor called\n";
	return ;
};

Span::Span( Span const & src ){

	// std::cout << "Span - Copy constructor called\n";
	*this = src;
	return ;
};

Span::~Span( void ){

	// std::cout << "Span - Destructor called\n";
	return;
};

Span	&Span::operator= ( Span const & rhs ){

	this->_N = rhs._N;
	return *this;
};

void	Span::addNumber(int const & nbr)
{
	if (this->_stored_int.size() < this->_N)
	{
		this->_stored_int.insert(_stored_int.begin(), nbr);
		std::sort(_stored_int.begin(), _stored_int.end());
	}
}

void	Span::addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{
	if(std::distance(it, ite) + _stored_int.size() > _N)
	{
		//throw an exception here;
	}
	copy(it, ite, back_inserter(_stored_int));
	std::sort(_stored_int.begin(), _stored_int.end());
}

unsigned int Span::longestSpan() {
	if (_N > 1)
		return (*max_element(_stored_int.begin(), _stored_int.end()) - *min_element(_stored_int.begin(), _stored_int.end()));
	//THROW error here
	return 0;
}

unsigned int Span::shortestSpan()
{
	unsigned int ret;
	std::vector<int>::iterator it = _stored_int.begin();

	if (_N > 1)
	{
		ret = (*it + 1) - *it;
		while ((it + 1) != _stored_int.end())
		{
			if (((unsigned int )((*it + 1) - *it)) < ret)
				ret = (*it + 1) - *it;
			it++;
		}
		return ret;
	}
	//throw an expectiong hree
	return 0;
}

