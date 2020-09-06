/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 07:02:05 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/06 07:03:15 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main(void)
{
	Human human;

	human.action("meleeAttack", "42");
	human.action("rangedAttack", "42");
	human.action("intimidatingShout", "42");
	return (0);
}