/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 00:39:55 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/03 01:13:02 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>
# include <deque>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack & other) : std::stack<T>(other) {*this = other;}
		MutantStack& operator=(const MutantStack & other)
		{
			this->c = other.c;
			return (*this);
		}
		~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin()
		{
			return (this->c.begin());
		}

		const_iterator begin() const
		{
			return (this->c.begin());
		}

		reverse_iterator rbegin()
		{
			return (this->c.rbegin());
		}

		const_reverse_iterator rbegin() const
		{
			return (this->c.rbegin());
		}

		iterator end()
		{
			return (this->c.end());
		}
		
		const_iterator end() const
		{
			return (this->c.end());
		}
		
		reverse_iterator rend()
		{
			return (this->c.rend());
		}
		
		const_reverse_iterator rend() const
		{
			return (this->c.rend());
		}
};

#endif