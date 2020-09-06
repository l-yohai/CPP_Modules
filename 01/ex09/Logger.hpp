/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 07:24:07 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/06 09:19:33 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <iomanip>

class Logger
{
	private:
		void logToConsole(std::string message);
		void logToFile(std::string message);
		void (Logger::*function_pointer[2])(std::string dest);
		std::string makeLogEntry(std::string message);

	public:
		Logger(void);
		void log(std::string const & dest, std::string const & message);

};

#endif