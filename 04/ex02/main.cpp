/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 10:14:46 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/26 20:14:32 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	// ISpaceMarine* A = new TacticalMarine;
	// ISpaceMarine* B = new TacticalMarine;
	// ISpaceMarine* C = new TacticalMarine;
	// ISpaceMarine* D = new TacticalMarine;
	// ISpaceMarine* E = new AssaultTerminator;

	// ISquad* TEST = new Squad;
	// TEST->push(A);
	// TEST->push(B);
	// TEST->push(C);
	// TEST->push(D);
	// TEST->push(E);
	// TEST->push(NULL);

	// for (int i = 0; i < TEST->getCount(); i++)
	// {
	// 	ISpaceMarine* cur = TEST->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }

	// ISquad* SQD = new Squad;
	// *(Squad *)SQD = *(Squad *)TEST;

	// for (int i = 0; i < SQD->getCount(); i++)
	// {
	// 	ISpaceMarine* cur = SQD->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }
	// delete SQD;
	// delete TEST;


	return 0;
}