/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 06:19:48 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/03 00:33:59 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N) : _len(N) {}

Span::Span(const Span & other)
{
	*this = other;
}

Span & Span::operator=(const Span & other)
{
	this->_len = other._len;
	this->_n = other._n;
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int n)
{
	if (_n.size() >= _len)
		throw std::runtime_error("Size over.");

	_n.push_back(n);
}

int Span::shortestSpan()
{
	if (_n.size() <= 1)
		throw std::runtime_error("Store more numbers.");

	std::vector<int> tmp = _n;
	std::sort(tmp.begin(), tmp.end());

	int ret = INT_MAX;

	for (std::vector<int>::iterator iter = tmp.begin() + 1; iter < tmp.end() - 1; ++iter)
	{
		int span = *iter - *(iter - 1);
		if (span && span < ret)
			ret = span;
	}

	if (ret == INT_MAX)
		throw std::runtime_error("No span.");

	return (ret);
}

int Span::longestSpan()
{
	if (_n.size() <= 1)
		throw std::runtime_error("Store more numbers.");

	int ret = *std::max_element(_n.begin(), _n.end()) - *std::min_element(_n.begin(), _n.end());

	if (!ret)
		throw std::runtime_error("No span.");

	return (ret);
}

unsigned int Span::getLen() const
{
	return (this->_len);
}