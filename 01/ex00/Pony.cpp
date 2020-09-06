/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 12:11:21 by yohlee            #+#    #+#             */
/*   Updated: 2020/08/23 14:40:27 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string addr, int age, int height) :
	_name(name), _addr(addr), _age(age), _height(height)
{ std::cout << "Pony is created." << std::endl; }

Pony::~Pony() { std::cout << "Pony is destroyed." << std::endl; }

void	Pony::ponyOnTheHeap(std::string name, std::string addr, int age, int height)
{
	Pony	*new_pony;

	new_pony = new Pony(name, addr, age, height);
	std::cout << "Heap Pony's name: " << name << " addr: " << addr << " age: " << std::to_string(age) << " height: " << std::to_string(height) << std::endl;
	delete new_pony;
}

void	Pony::ponyOnTheStack(std::string name, std::string addr, int age, int height)
{
	Pony	new_pony(name, addr, age, height);
	std::cout << "Stack Pony's name: " << name << " addr: " << addr << " age: " << std::to_string(age) << " height: " << std::to_string(height) << std::endl;
}