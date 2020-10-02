/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 00:39:43 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/03 01:21:26 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int subject()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

int test()
{
	MutantStack<float> mutant;

	mutant.push(1.1);
	mutant.push(2.2);
	mutant.push(3.3);
	mutant.push(4.4);
	mutant.push(5.5);
	mutant.push(6.6);
	mutant.push(7.7);
	mutant.push(8.8);
	mutant.push(9.9);
	mutant.push(10.3);
	mutant.push(150.2);

	MutantStack<float> mutant2(mutant);
	MutantStack<float> mutant3 = mutant;

	MutantStack<float>::const_iterator iter1 = mutant3.begin();
	MutantStack<float>::const_iterator iter2 = mutant3.end();
	while (iter1 != iter2)
	{
		std::cout << "Iter1: " << *iter1 << std::endl;
		iter1++;
	}

	iter1 -= mutant3.size();
	std::cout << "Iter1: " << *iter1 << std::endl << std::endl;

	MutantStack<float>::reverse_iterator riter1 = mutant2.rbegin();
	MutantStack<float>::reverse_iterator riter2 = mutant2.rend();

	try
	{
		*riter1 = 42.24;
		std::cout << "Successful" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	while (riter1 != riter2)
	{
		std::cout << "Reverse Iter1: " << *riter1 << std::endl;
		riter1++;
	}

	std::cout << std::endl;

	return 0;
}

int main()
{
	subject();
	test();
	return 0;
}