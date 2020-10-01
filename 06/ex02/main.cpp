/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 21:22:48 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/01 21:35:42 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	Base * ret;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 2);

	int n = dis(gen);

	if (n == 0)
		ret = new A;
	else if (n == 1)
		ret = new B;
	else
		ret = new C;

	return (ret);
}

void identify_from_pointer(Base * p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a)
		std::cout << "A" << std::endl;
	else if (b)
		std::cout << "B" << std::endl;
	else if (c)
		std::cout << "C" << std::endl;
	else
		std::cout << "None" << std::endl;
}

void identify_from_reference(Base & p)
{
	try
	{
		A a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e) {}

	try
	{
		B b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e) {}

	try
	{
		C c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e) {}

}

int main()
{
	Base * test = generate();

	identify_from_pointer(test);

	identify_from_reference(*test);

	delete test;

	return (EXIT_SUCCESS);
}