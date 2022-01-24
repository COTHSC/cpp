#include <ctype.h>
#include <iostream>

int	strtoupper(std::string & str)
{
	int i = 0;

	while (str[i])
	{
		if ('a' <= str[i]  && str[i] <= 'z')
			str[i] = toupper(str[i]);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	std::string	str;
	int i;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (argv[i])
		{
			str = argv[i];
			strtoupper(str);
			std::cout << str;
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}
