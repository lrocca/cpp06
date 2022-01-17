#include <iostream>
#include <limits>
#include <string>

void	printType(const std::string& type)
{
	std::cout << type << ": ";
}

void	cChar(double val)
{
	char	c = static_cast<char>(val);

	if (val != val || !isascii(val))
		std::cout << "impossible";
	else if (isprint(c))
		std::cout << "'" << c << "'";
	else
		std::cout << "Non displayable";
}

void	cInt(double val)
{
	int	i = static_cast<int>(val);

	if (val != val || val < INT_MIN || val > INT_MAX)
		std::cout << "impossible";
	else
		std::cout << i;
}

void	cFloat(double val)
{
	float	f = static_cast<float>(val);

	std::cout << f << "f";
}

int main(int ac, char **av)
{
	if (ac < 2)
		return 1;

	std::string	num = av[1];

	double	val = atof(av[1]);

	std::cout.precision(1);
	std::cout << std::fixed;

	printType("char");
	cChar(val);
	std::cout << std::endl;

	printType("int");
	cInt(val);
	std::cout << std::endl;

	printType("float");
	cFloat(val);
	std::cout << std::endl;

	printType("double");
	std::cout << val << std::endl;
}
