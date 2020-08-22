/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 00:05:25 by yohlee            #+#    #+#             */
/*   Updated: 2020/08/21 15:25:09 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact() {}

Contact::Contact(std::string info[11]) :
	_first_name(info[0]), _last_name(info[1]), _nickname(info[2]), _login(info[3]),
	_postal_address(info[4]), _email_address(info[5]), _phone_number(info[6]),
	_birthday_date(info[7]), _favorite_meal(info[8]), _underwear_color(info[9]),
	_darkest_secret(info[10])
{}

std::string Contact::getFirstName(void) { return (_first_name); }
std::string Contact::getLastName(void) { return (_last_name); }
std::string Contact::getLogin(void) { return (_login); }

void Contact::str()
{
	(!_first_name.empty()) ? std::cout << _first_name << std::endl : std::cout;
	(!_last_name.empty()) ? std::cout << _last_name << std::endl : std::cout;
	(!_nickname.empty()) ? std::cout << _nickname << std::endl : std::cout;
	(!_login.empty()) ? std::cout << _login << std::endl : std::cout;
	(!_postal_address.empty()) ? std::cout << _postal_address << std::endl : std::cout;
	(!_email_address.empty()) ? std::cout << _email_address << std::endl : std::cout;
	(!_phone_number.empty()) ? std::cout << _phone_number << std::endl : std::cout;
	(!_birthday_date.empty()) ? std::cout << _birthday_date << std::endl : std::cout;
	(!_favorite_meal.empty()) ? std::cout << _favorite_meal << std::endl : std::cout;
	(!_underwear_color.empty()) ? std::cout << _underwear_color << std::endl : std::cout;
	(!_darkest_secret.empty()) ? std::cout << _darkest_secret << std::endl : std::cout;
}