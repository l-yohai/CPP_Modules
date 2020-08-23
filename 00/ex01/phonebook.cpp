/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 00:05:25 by yohlee            #+#    #+#             */
/*   Updated: 2020/08/23 10:56:52 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact() {}

Contact:: Contact(std::string data[11]) :
	first_name(data[0]), last_name(data[1]), nickname(data[2]), login(data[3]),
	postal_address(data[4]), email_address(data[5]), phone_number(data[6]),
	birthday_date(data[7]), favorite_meal(data[8]), underwear_color(data[9]),
	darkest_secret(data[10])
{}

void Contact::str()
{
	(!first_name.empty()) ? std::cout << first_name << std::endl : std::cout;
	(!last_name.empty()) ? std::cout << last_name << std::endl : std::cout;
	(!nickname.empty()) ? std::cout << nickname << std::endl : std::cout;
	(!login.empty()) ? std::cout << login << std::endl : std::cout;
	(!postal_address.empty()) ? std::cout << postal_address << std::endl : std::cout;
	(!email_address.empty()) ? std::cout << email_address << std::endl : std::cout;
	(!phone_number.empty()) ? std::cout << phone_number << std::endl : std::cout;
	(!birthday_date.empty()) ? std::cout << birthday_date << std::endl : std::cout;
	(!favorite_meal.empty()) ? std::cout << favorite_meal << std::endl : std::cout;
	(!underwear_color.empty()) ? std::cout << underwear_color << std::endl : std::cout;
	(!darkest_secret.empty()) ? std::cout << darkest_secret << std::endl : std::cout;
}

std::string Contact::getFirstName(void) {
	return(first_name);
}

std::string Contact::getLastName(void) {
	return(last_name);
}

std::string Contact::getNicname(void) {
	return(nickname);
}
