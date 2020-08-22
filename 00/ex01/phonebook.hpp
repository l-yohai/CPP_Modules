/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 13:04:20 by yohlee            #+#    #+#             */
/*   Updated: 2020/08/21 15:43:41 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _login;
		std::string _postal_address;
		std::string _email_address;
		std::string _phone_number;
		std::string _birthday_date;
		std::string _favorite_meal;
		std::string _underwear_color;
		std::string _darkest_secret;
		
	public:
		Contact();
		Contact(std::string info[11]);
		void str();
		std::string getFirstName();
		std::string getLastName();
		std::string getLogin();
};

void	search_phone_book(Contact* pb, int pb_size);
Contact create_contact_from_input();
void	display_all_contacts(Contact pb[], int &pb_size);
void	print_f(std::string str);

#endif