/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 05:19:16 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/01 05:19:22 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main(void)
{
	void *test = serialize();
	Data* a = deserialize(test);
	std::cout <<"s1: " << a->s1 << std::endl;
	std::cout <<"s2: " << a->s2 << std::endl;
	std::cout <<"n: " << a->n << std::endl;
	delete test;
	delete a;
}