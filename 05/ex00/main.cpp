/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:57:01 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/28 12:05:01 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	{
		std::cout << "======================== Too High & Low ========================" << std::endl;
		Bureaucrat *test = 0;
		try
		{
			test = new Bureaucrat("Too high", -1);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			test = new Bureaucrat("Too Low", 200);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "======================== Assign ========================" << std::endl;

		Bureaucrat test2("test2", 50);
		std::cout << test2 << std::endl;
		try
		{
			Bureaucrat test3("test3", 100);
			test2 = test3;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << test2 << std::endl;
	}
	{
		std::cout << "======================== Copy ========================" << std::endl;

		Bureaucrat test4("test4", 100);
		Bureaucrat test5(test4);
		std::cout << "test4: " << test4 << std::endl;
		std::cout << "test5: " << test5 << std::endl;
	}
	{
		std::cout << "======================== Decrease ========================" << std::endl;
		Bureaucrat test6("test6", 150);
		std::cout << test6 << std::endl;
		try
		{
			test6.decreaseGrade();
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << test6 << std::endl;

		std::cout << "======================== Increase ========================" << std::endl;
		Bureaucrat test7("test7", 1);
		std::cout << test7 << std::endl;
		try
		{
			test7.increaseGrade();
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << test7 << std::endl;
	}
	return (0);
}