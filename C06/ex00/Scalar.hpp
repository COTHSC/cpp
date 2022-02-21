#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>

class Scalar {

	public:
		Scalar( void ) {};
		Scalar( std::string & );
		Scalar( Scalar const & src );
		~Scalar( void ) {};
		
		//Hello operators.
		Scalar	&operator= ( Scalar const & rhs );
		void	print( void );


		//Exceptions
		class NotConvertibleException : public std::exception {
			public:
				virtual const char * what() const throw();
		};

	private:
		std::string		_value;
		void	_parse( void );


		double	_double;
		
		//Conversion functions
		void	_toInt() const;
		void	_toFloat() const;
		void	_toDouble() const;
		void	_toChar() const;
};
#endif
