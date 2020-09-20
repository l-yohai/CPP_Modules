/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 06:55:40 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 06:57:45 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant(int hp, std::string const &type);
		SuperMutant(const SuperMutant & copy);
		SuperMutant& operator=(const SuperMutant & assign);
		~SuperMutant(void);

		virtual void takeDamage(int damage);
};

#endif