/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 06:13:37 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 05:36:20 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & copy)
{
	this->_name = copy._name;
	this->_title = copy._title;
}

Sorcerer& Sorcerer::operator=(const Sorcerer & assign)
{
	this->_name = assign._name;
	this->_title = assign._title;
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::introduce(void) const
{
	std::string msg;

	msg = "I am " + this->getName() + ", " 
			+ this->getTitle() + ", and I like ponies!\n";
	return (msg);
}

std::string Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string Sorcerer::getTitle(void) const
{
	return (this->_title);
}

void Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}

std::ostream & operator<<(std::ostream & out, const Sorcerer & sorcerer)
{
	return (out << sorcerer.introduce());
}