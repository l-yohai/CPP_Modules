/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 06:48:12 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 06:54:54 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	private:
		int _hp;
		std::string const _type;
	public:
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy & copy);
		Enemy& operator=(const Enemy & assign);
		~Enemy(void);
		std::string getType() const;
		int getHP() const;

		virtual void takeDamage(int damage);
};

#endif