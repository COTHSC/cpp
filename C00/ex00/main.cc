#include <iostream>

int main(void)
{
	char buf[512];

	std::cout << "input a word:" << std::endl;
	std::cin >> buf;
	std::cout << buf << std::endl;
	return 0;
}
