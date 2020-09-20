/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 06:28:26 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 05:29:26 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	private:
		std::string _name;
	public:
		Victim(std::string name);
		Victim(const Victim & copy);
		Victim& operator=(const Victim & assign);
		~Victim(void);
		std::string introduce(void) const;
		std::string getName(void) const;
		virtual void getPolymorphed(void) const;
};

std::ostream & operator<<(std::ostream & out, Victim & victim);

#endif