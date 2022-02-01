#include <iostream>
#include "FixedPoint.hpp"

int main(void) {
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	Fixed const f(2896);

	a = Fixed(1234.4321f);

	Fixed g(10);
	std::cout << "this is g " << g << std::endl;
	std::cout << "this is g " << g-- << std::endl;
	std::cout << "this is g " << --g << std::endl;

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "c + c is " << c + c << std::endl;
	std::cout << "c - d is " << c - d << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "d + d is " << d + d << std::endl;
	std::cout << "d - d is " << d - d << std::endl;
	std::cout << "d * d is " << d * d << std::endl;
	std::cout << "a * d is " << a * d << std::endl;
	std::cout << "a * a is " << a * a << std::endl;
	std::cout << "f * f is " << f * f << std::endl;
	std::cout << "a / d is " << a / d << std::endl;
	std::cout << "d / c is " << d / c << std::endl;
	std::cout << "d / d is " << d / d << std::endl;
	std::cout << "a / a is " << a / a << std::endl;
	std::cout << "a * a is " << 1234.4321f * 1234.4321f << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
}
