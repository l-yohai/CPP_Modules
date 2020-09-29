/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:57:01 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/28 16:30:03 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat major("major", 1);
	Bureaucrat minor("minor", 150);

	std::cout << major << std::endl;
	std::cout << minor << std::endl;

	{
		std::cout << "======================== Form ========================" << std::endl;
		try
		{
			Form test("form test 1 fail", 151, 10);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			Form test2("form test 2 fail", 0, 10);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "======================== Sign Fail ========================" << std::endl;
		Form test3("test3", 130, 20);
		std::cout << "======================== Before ========================" << std::endl;
		std::cout << test3;
		std::cout << "======================== After ========================" << std::endl;
		minor.signForm(test3);
		std::cout << test3;
		std::cout << std::endl << "======================== Sign Success ========================" << std::endl;
		std::cout << "======================== Before ========================" << std::endl;
		std::cout << test3;
		std::cout << "======================== After ========================" << std::endl;
		major.signForm(test3);
		std::cout << test3;
	}

	return (0);
}