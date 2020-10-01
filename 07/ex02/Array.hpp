/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 00:27:44 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/02 01:43:18 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>
class Array
{
	private:
		T * _array;
		unsigned int _n;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &);
		Array& operator=(const Array &);
		virtual ~Array();

		T& operator[](unsigned int n) throw(std::exception);

		size_t size() const;
};

template<class T>
Array<T>::Array() : _n(0)
{
	_array = new T[_n];
}

template <class T>
Array<T>::Array(unsigned int n) : _n(n)
{
	_array = new T[_n];
}

template<class T>
Array<T>::Array(const Array & other) : _n(0)
{
	this->_array = new T[_n];
	*this = other;
}

template<class T>
Array<T>& Array<T>::operator=(const Array & other)
{
	delete _array;

	_n = other._n;
	_array = new T[_n];

	for (unsigned int i = 0; i < _n; i++)
		_array[i] = other._array[i];

	return (*this);
}

template<class T>
Array<T>::~Array()
{
	delete _array;
}

template<class T>
T& Array<T>::operator[](unsigned int n) throw(std::exception)
{
	if (!this->_array || n >= this->_n)
		throw std::out_of_range("ArrayIdxError: out of range.");
	return (this->_array[n]);
}

template<class T>
size_t Array<T>::size() const
{
	return (this->_n);
}

#endif