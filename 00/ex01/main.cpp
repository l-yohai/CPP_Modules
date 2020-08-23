/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 15:27:47 by yohlee            #+#    #+#             */
/*   Updated: 2020/08/23 11:21:57 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact	create_contact()
{
	std::string	data[11];
	std::string msg[11] = {"First Name: ", "Last Name: ",\
								"Nickname: ", "Login : ", "Postal Address: ",\
								"Email Address: ", "Phone Number: ",\
								"Birthday Date: ", "Favorite Meal: ",\
								"Underwear Color: ", "Darkest Secret: "};

	std::cout << "Enter your information: " << std::endl;
	for (int i = 0; i < 11; i++) {
		std::cout << msg[i];
		std::getline(std::cin, data[i]);
	}
	return (Contact(data));
}

void	print_contact(std::string str)
{
	if (str.length() > 10)
		std::cout << '|' << str.substr(0, 9) << '.';
	else
		std::cout << '|' << std::setw(10) << std::setfill(' ') << str;
}

void	display_contacts(Contact pb[], int &pb_size)
{
	std::string col[4] = {"Index", "First Name", "Last Name", "Nickname"};

	for (int i = 0; i < 4; i++)
		print_contact(col[i]);
	std::cout << "|" << std::endl;
	for (int i = 0; i < pb_size; i++) {
		std::cout << '|' << std::setw(10) << std::setfill(' ') << i;
		print_contact(pb[i].getFirstName());
		print_contact(pb[i].getLastName());
		print_contact(pb[i].getNicname());
		std::cout << "|" << std::endl;
	}
}

void	search_contact(Contact *pb, int pb_size)
{
	std::string	index;

	if (pb_size == 0) {
		std::cout << "Empty Phonebook." << std::endl;
		return ;
	}
	display_contacts(pb, pb_size);
	std::cout << "Select contact via index: ";
	std::getline(std::cin, index);
	try {
		std::stoi(index);
	}
	catch (const std::exception& e) {
		std::cout << "Invalid index!" << std::endl;
		return ;
	}
	if (index.find_first_not_of("0123456789", 0) != std::string::npos ||\
			std::stoi(index) > pb_size - 1 || std::stoi(index) < 0) {
		std::cout << "Invalid index!" << std::endl;
		return ;
	}
	pb[std::stoi(index)].str();
}

int	main(void)
{
	Contact		phonebook[8];
	int			pb_size = 0;
	std::string	cmd;

	std::cout << "- ADD" << std::endl << "- SEARCH" <<
		std::endl << "- EXIT" << std::endl << std::endl;
	do {
		std::cout << "% ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD") {
			if (pb_size == 8)
				std::cout <<"Error: Phonbook is full." << std::endl;
			else {
				phonebook[pb_size] = create_contact();
				pb_size++;
			}
		}
		else if (cmd == "SEARCH")
			search_contact(phonebook, pb_size);
	}
	while (cmd != "EXIT");
	return (0);
}
