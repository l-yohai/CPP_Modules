/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 14:52:47 by yohlee            #+#    #+#             */
/*   Updated: 2020/08/23 15:04:16 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <random>

class	ZombieEvent {

	private:
		std::string	_type;

	public:
		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name);
		void	randomChump(void);
};

#endif