/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 04:09:54 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/01 04:39:57 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstdlib>
# include <string>
# include <iomanip>
# include <cfloat>
# include <cmath>
# include <typeinfo>

class Convert
{
	private:
		bool _error;
		double _conv;
		Convert();

	public:
		Convert(const char * input);
		Convert(const Convert &);
		Convert& operator=(const Convert &);
		~Convert();

		void check(const char * input, char * pos);
		void toChar() const;
		void toInt() const;
		void toFloat() const;
		void toDouble() const;
};

#endif