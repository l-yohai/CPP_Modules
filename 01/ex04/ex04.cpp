/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 17:54:53 by yohlee            #+#    #+#             */
/*   Updated: 2020/08/23 17:59:00 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	s = "HI THIS IS BRAIN";
	std::string	*p = &s;
	std::string	&ref1 = *p;
	std::string	&ref2 = s;

	std::cout << "==== pointer ====" << std::endl;
	std::cout << *p << std::endl;
	std::cout << "==== reference to pointer ====" << std::endl;
	std::cout << ref1 << std::endl;
	std::cout << "==== reference to string ====" << std::endl;
	std::cout << ref2 << std::endl;
}