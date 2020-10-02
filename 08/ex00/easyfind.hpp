/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 04:41:24 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/02 06:19:07 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <deque>

class Error : public std::exception
{
	public:
		Error() {}
		Error(const Error & other)
		{
			*this = other;
		}
		Error& operator=(const Error& other)
		{
			static_cast<void>(other);
			return (*this);
		}
		virtual ~Error() throw() {};
		virtual const char* what() const throw()
		{
			return ("Not Found.");
		}
};

template <typename T>
int &easyfind(T &container, int n)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), n);
	if (iter == container.end())
		throw Error();
	return (*iter);
}

#endif
