/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 06:29:52 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 05:34:54 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim & copy)
{
	this->_name = copy._name;
}

Victim& Victim::operator=(const Victim & assign)
{
	this->_name = assign._name;
	return (*this);
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::introduce(void) const
{
	std::string msg;

	msg = "I'm " + this->_name + " and I like otters!\n";
	return (msg);
}

std::string Victim::getName(void) const
{
	return (this->_name);
}

void Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream & operator<<(std::ostream & out, Victim & victim)
{
	return (out << victim.introduce());
}
