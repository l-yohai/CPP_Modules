/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 00:33:03 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 05:29:08 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string name);
		Peon(const Peon & copy);
		Peon& operator=(const Peon & assign);
		~Peon(void);
		virtual void getPolymorphed(void) const;
};

#endif