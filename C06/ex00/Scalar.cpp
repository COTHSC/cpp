#include "Scalar.hpp"
#include <iostream>
#include <limits.h>
#include <math.h>

Scalar::Scalar( std::string & s ) : _value (s) {
	_parse();
	return ;
};


void	Scalar::_parse( void ) {
	char *end;
	int i = 0;
	
	if((_value.size() == 1 && !std::isdigit(_value[0])) || (_value.size() == 3 && _value[0] == '\'' && _value[2] == '\''))
	{
		while (_value[i] == '\'')
			i++;
		_double = _value[i];
	}
	else{
		
		this->_double = strtod(this->_value.c_str(), &end);
		if (*end)
		{
			if(*end == 'f')
				end++;
			while (*end)
			{
				if (!isspace(*end))
					throw Scalar::NotConvertibleException();
				end++;
			}
		}
	}
}

void	Scalar::print(void)
{
	try {
		std::cout << "Double: ";
		this->_toDouble();
		std::cout << std::endl;	
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << "\n\n";
	}
	try
	{
		std::cout << "Float:  ";
		this->_toFloat();
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n\n";
	}
	try
	{
		std::cout << "Int:    ";
		this->_toInt();
		std::cout << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n\n";
	}
	try
	{
		std::cout << "Char:   ";
		this->_toChar();
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n\n";
	}
	
	
	
}

void	Scalar::_toInt( void ) const {
	if (_double > INT_MAX || _double < INT_MIN || isnan(_double))
		throw Scalar::NotConvertibleException();
	std::cout << static_cast<int>(_double) << std::endl;	
}

void	Scalar::_toFloat( void ) const {
	float ret = static_cast<float>(_double);
	std::cout << ret;
	if(isinf(_double) || isnan(_double))
		std::cout << 'f';
	std::cout << std::endl;
}

void	Scalar::_toDouble( void ) const {
	std::cout << this->_double << std::endl;
}

void	Scalar::_toChar( void ) const {
	if (_double > 255 || _double < 0 || isnan(_double))
		throw Scalar::NotConvertibleException();
	char ret = static_cast<char>(_double);
	std::cout << ret << std::endl;
}

Scalar::Scalar( Scalar const & src ){

	std::cout << "Scalar - Copy constructor called\n";
	*this = src;
	return ;
};

Scalar	&Scalar::operator= ( Scalar const & rhs ) 
{
	this->_value = rhs._value;
	return *this;
};

const char * Scalar::NotConvertibleException::what() const throw() {
	return ("Value not convertible");	
}
