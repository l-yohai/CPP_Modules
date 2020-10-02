/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 06:19:40 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/03 00:32:26 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>

class Span
{
	private:
		std::vector<int> _n;
		unsigned int _len;
		Span();

	public:
		Span(unsigned int N);
		Span(const Span &);
		Span& operator=(const Span &);
		~Span();

		void addNumber(int n);

		int shortestSpan();
		int longestSpan();

		unsigned int getLen() const;
};

#endif