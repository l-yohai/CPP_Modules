/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 04:41:21 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/02 06:19:14 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::cout << "=============== vector ===============" << std::endl;
	std::vector<int> vec;

	for (int i = 0; i < 5; i++)
		vec.push_back(i);
	
	for (std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
		std::cout << *iter << " ";
	std::cout << std::endl;

	try
	{
		int n = easyfind(vec, 2);
		std::cout << "find nums: " << n << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		int n = easyfind(vec, 8);
		std::cout << "find nums: " << n << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "=============== list ===============" << std::endl;
	std::list<int> lst;

	for (int i = 0; i < 5; i++)
		lst.push_back(i);
	
	for (std::list<int>::iterator iter = lst.begin(); iter != lst.end(); ++iter)
		std::cout << *iter << " ";
	std::cout << std::endl;

	try
	{
		int n = easyfind(lst, 2);
		std::cout << "find nums: " << n << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		int n = easyfind(lst, 8);
		std::cout << "find nums: " << n << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "=============== deque ===============" << std::endl;
	std::deque<int> dq;

	for (int i = 0; i < 5; i++)
		dq.push_back(i);
	
	for (std::deque<int>::iterator iter = dq.begin(); iter != dq.end(); ++iter)
		std::cout << *iter << " ";
	std::cout << std::endl;

	try
	{
		int n = easyfind(dq, 2);
		std::cout << "find nums: " << n << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		int n = easyfind(dq, 8);
		std::cout << "find nums: " << n << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}