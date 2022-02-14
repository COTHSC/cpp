#include <iostream>
#include "FixedPoint.hpp"

int main(void) {
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	Fixed const f(2896);
	Fixed z;

	a = Fixed(1234.4321f);
	z = a + b;

	Fixed g(10);
	Fixed h;

	std::cout << "this is g " << --g << std::endl;
	std::cout << "this is g " << g-- << std::endl;
	std::cout << "this is g " << g-- << std::endl;
	std::cout << "this is g " << g-- << std::endl;

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
	std::cout << "min between a and d is " << a.min(a, d) << std::endl;
	std::cout << "max between a and d is " << a.max(a, d) << std::endl;
	std::cout << "min between a and z is " << a.min(a, z) << std::endl;
	std::cout << "max between a and z is " << a.max(z, a) << std::endl;


	Fixed x;
	Fixed const k(Fixed(5.05f) * Fixed(2));
	std::cout << x << std::endl;
	std::cout << ++x << std::endl;
	std::cout << x << std::endl;
	std::cout << x++ << std::endl;
	std::cout << x << std::endl;
	std::cout << k << std::endl;
	std::cout << Fixed::max(x, k) << std::endl;
}
