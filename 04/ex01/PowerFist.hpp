/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 06:31:08 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 06:44:33 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist(std::string const & name, int apcost, int damage);
		PowerFist(const PowerFist & copy);
		PowerFist& operator=(const PowerFist & assign);
		~PowerFist(void);
		virtual void attack() const = 0;
};

#endif