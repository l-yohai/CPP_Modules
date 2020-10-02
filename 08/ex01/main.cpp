/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 06:20:16 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/03 00:38:22 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <random>

int subject()
{
	Span s = Span(5);
	s.addNumber(5);
	s.addNumber(3);
	s.addNumber(17);
	s.addNumber(9);
	s.addNumber(11);
	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;
	return (0);
}

int test()
{
	Span s = Span(10001);
	srand(time(NULL));

	try
	{
		for (unsigned int i = 0; i < s.getLen(); i++)
			s.addNumber(rand());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		int shortest = s.shortestSpan();
		int longest = s.longestSpan();
		std::cout << "shortest span: " << shortest << std::endl;
		std::cout << "longest span: " << longest << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}

int main()
{
	subject();
	test();
}