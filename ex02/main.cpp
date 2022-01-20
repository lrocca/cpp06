#include <iostream>
#include <random>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	std::random_device	rd;
	char				res = rd() % 3;

	if (res == 0)
		return new A;
	else if (res == 1)
		return new B;
	return new C;
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	else if (dynamic_cast<B*>(p))
		std::cout << "B";
	else if (dynamic_cast<C*>(p))
		std::cout << "C";
	else
		std::cout << "unknown";

	std::cout << std::endl;
}

void	identify(Base& p)
{
	try {
		void(dynamic_cast<A&>(p));
		std::cout << "A" << std::endl;
		return ;
	} catch(std::exception& e) {}

	try {
		void(dynamic_cast<B&>(p));
		std::cout << "B" << std::endl;
		return ;
	} catch(std::exception& e) {}

	try {
		void(dynamic_cast<C&>(p));
		std::cout << "C" << std::endl;
		return ;
	} catch(std::exception& e) {}

	std::cout << "unknown" << std::endl;
}

int	main()
{
	Base*	foo = generate();

	identify(foo);
	identify(*foo);

	delete foo;
}
