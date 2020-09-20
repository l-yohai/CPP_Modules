/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 06:07:05 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 00:31:55 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	private:
		std::string _name;
		std::string _title;

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer & copy);
		Sorcerer& operator=(const Sorcerer & assign);
		~Sorcerer(void);
		std::string introduce(void) const;
		void polymorph(std::string & victim) const;
		std::string getName(void) const;
		std::string getTitle(void) const;
		void polymorph(Victim const & victim) const;
};

std::ostream & operator<<(std::ostream & out, const Sorcerer & sorcerer);

#endif