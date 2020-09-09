/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 09:22:39 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/09 09:08:41 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int standard_input(void)
{
	std::string line;

	for (std::string line; std::getline(std::cin, line);)
		std::cout << line << std::endl;
	return (0);
}

int read_file(std::string file_name)
{
	std::ifstream f;

	f.open(file_name);
	if (!f.is_open())
	{
		std::cerr << "cat: " << file_name << ": No such file or directory" << std::endl;
		return (1);
	}
	for (std::string line; std::getline(f, line);)
	{
		std::cout << line;
		if (!f.eof())
			std::cout << std::endl;
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		return (standard_input());
	else
	{
		for (int i = 1; i < argc; i++)
			if (read_file(std::string(argv[i])) == 1)
				return (1);
	}
	return (0);
}