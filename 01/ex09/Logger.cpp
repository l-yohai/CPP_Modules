/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 07:24:31 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/06 09:21:46 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(void) {
	function_pointer[0] = &Logger::logToConsole;
	function_pointer[1] = &Logger::logToFile;
}

void Logger::logToConsole(std::string message) {
	std::cout << message << std::endl;
}

void Logger::logToFile(std::string message) {
	std::ofstream outfile;

	outfile.open(message.substr(0, message.find("\n")), std::ios::out);
	outfile << message;
}

std::string Logger::makeLogEntry(std::string message) {
	time_t current;
	struct tm* tm_info;
	std::string ret;

	current = time(NULL);
	tm_info = localtime(&current);
	ret = std::to_string(tm_info->tm_year + 1900) + '.'
		+ '0' + std::to_string(tm_info->tm_mon + 1) + '.'
		+ '0' + std::to_string(tm_info->tm_mday) + '.'
		+ std::to_string(tm_info->tm_hour) + ':'
		+ std::to_string(tm_info->tm_min) + ':'
		+ std::to_string(tm_info->tm_sec) + "\n";
	ret = ret + message;
	return (ret);
}

void Logger::log(std::string const & dest, std::string const & message) {
	std::string dests[] = {"logToConsole", "logToFile"};
	std::string input;

	for (int i = 0; i < 2; i++) {
		if (dests[i] == dest) {
			input = makeLogEntry(message);
			(this->*function_pointer[i])(input);
			return ;
		}
	}
}