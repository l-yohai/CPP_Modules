/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 12:11:25 by yohlee            #+#    #+#             */
/*   Updated: 2020/08/23 14:37:29 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <iomanip>

class	Pony {
	public:
		Pony(std::string name, std::string addr, int age, int height);
		~Pony();
		static void	ponyOnTheHeap(std::string name, std::string addr, int age, int height);
		static void	ponyOnTheStack(std::string name, std::string addr, int age, int height);
	private:
		std::string	_name;
		std::string	_addr;
		int			_age;
		int			_height;
};

#endif