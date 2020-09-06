/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 06:55:06 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/06 07:17:58 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const & target) {
	std::cout << "Melle attack " << target << std::endl;
}

void Human::rangedAttack(std::string const & target) {
	std::cout << "Ranged attack " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target) {
	std::cout << "Intimidating shout " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {
	std::string actions[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	typedef void (Human::*memFuncPtr) (std::string const & target);
	memFuncPtr function_pointer[] = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};

	for (int i = 0; i < 3; i++) {
		if (action_name == actions[i]) {
			(this->*function_pointer[i]) (target);
			return ;
		}
	}
}
