#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class iterator
{
public:
	iterator(void){};
	iterator(T *it)
	{
		_iterator = it;
	};
	iterator(const iterator &src)
	{
		this->_iterator = src._iterator;
	};
	iterator &operator=(iterator const &rhs)
	{
		_iterator = rhs._iterator;
		return _iterator;
	};
	T operator*(void)
	{
		return *_iterator;
	};
	iterator &operator+=(const int &i)
	{
		_iterator += i;
		return *_iterator;
	};
	iterator &operator-=(const int &i)
	{
		_iterator -= i;
		return *_iterator;
	};
	iterator &operator++(void)
	{
		this->_iterator += 1;
		return *this;
	};
	iterator operator++(int)
	{
		iterator tmp(*this);
		this->_iterator += 1;
		return tmp;
	};
	iterator operator--(int)
	{
		iterator tmp(*this);
		this->_iterator -= 1;
		return tmp;
	};
	iterator &operator--(void)
	{
		this->_iterator -= 1;
		return *this;
	};
	bool operator!=(const iterator &rhs)
	{
		return ((this->_iterator == rhs._iterator) ? 0 : 1);
	};
	bool operator==(const iterator &rhs)
	{
		return ((this != rhs ? 0 : 1));
	};

protected:
	T *_iterator;
};


template <typename T>
class reverse_iterator : public iterator<T>
{
public:
	reverse_iterator(void) : iterator<T>(){};
	reverse_iterator(T *it) : iterator<T>(it){};

	reverse_iterator &operator+=(const int &i)
	{
		this->_iterator -= i;
		return *this->_iterator;
	};
	reverse_iterator &operator-=(const int &i)
	{
		this->_iterator += i;
		return *this->_iterator;
	};
	reverse_iterator &operator++(void)
	{
		this->_iterator -= 1;
		return *this;
	};
	reverse_iterator &operator--(void)
	{
		this->_iterator += 1;
		return *this;
	};
	reverse_iterator operator++(int)
	{
		reverse_iterator tmp(*this);
		this->_iterator -= 1;
		return tmp;
	};
	reverse_iterator operator--(int)
	{
		reverse_iterator tmp(*this);
		this->_iterator += 1;
		return tmp;
	};
};

template<typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T , Container> {
	public:
	typedef iterator<T> iterator;
	typedef reverse_iterator<T> reverse_iterator;
		MutantStack<T>( void ) : std::stack<T>() {
			return ;
		};
		MutantStack( MutantStack const & src ) { (void)src;} ;
		
		~MutantStack( void ) {};
		
		iterator end(void)
		{
			return &this->top() + 1;
		}
		iterator begin(void)
		{
			return &this->top() - (this->size() - 1);
		}
		reverse_iterator rbegin(void)
		{
			return &this->top();
		}
		reverse_iterator rend(void)
		{
			return &this->top()  - this->size();
		}

		MutantStack	&operator= ( MutantStack const & rhs ) ;

	private:

};
#endif
