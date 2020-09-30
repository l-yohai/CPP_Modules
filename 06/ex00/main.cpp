/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 04:11:29 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/01 04:12:49 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int exit_error(std::string msg)
{
	std::cerr << msg << std::endl;
	return (EXIT_FAILURE);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (exit_error("Error: arguments\n"));
	
	Convert value(argv[1]);
	value.toChar();
	value.toInt();
	value.toFloat();
	value.toDouble();

	return (EXIT_SUCCESS);
}