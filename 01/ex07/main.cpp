/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 22:33:23 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/06 06:52:17 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4 || strlen(argv[1]) == 0 ||\
		strlen(argv[2]) == 0 || strlen(argv[3]) == 0) {
		std::cerr << "Invalid arguments." << std::endl;
		return (1);
	}
	std::string line;
	std::string filename(argv[1]);
	size_t find_len = strlen(argv[2]);
	size_t replace_len = strlen(argv[3]);
	std::ifstream file_in(filename);
	if (!file_in.is_open()) {
		std::cerr << "File could not be opend!" << std::endl;
		return (1);
	}
	std::ofstream file_out(filename += ".replace");
	while (std::getline(file_in, line)) {
		for (size_t i = 0; (i = line.find(argv[2], i)) != std::string::npos; ) {
			line.replace(i, find_len, argv[3]);
			i += replace_len;
		}
		file_out << line << std::endl;
	}
	return (0);
}