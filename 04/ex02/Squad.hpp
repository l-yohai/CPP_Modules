/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 10:00:57 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/21 13:02:33 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		int _count;
		ISpaceMarine** _unit;
	public:
		Squad();
		Squad(const Squad & copy);
		Squad & operator=(const Squad & assign);
		~Squad();
		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		virtual int push(ISpaceMarine*);
		void deleteSquad();
};

#endif