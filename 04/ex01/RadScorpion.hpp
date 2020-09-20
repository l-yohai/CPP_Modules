/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 07:01:53 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 07:04:12 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion(int hp, std::string const & type);
		RadScorpion(const RadScorpion & copy);
		RadScorpion& operator=(const RadScorpion & assign);
		~RadScorpion(void);

};

#endif