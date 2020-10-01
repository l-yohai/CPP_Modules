/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 05:12:14 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/01 21:05:00 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

void * serialize()
{
	std::string serial = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(INT_MIN, INT_MAX);

	char *ret = new char[sizeof(char) * 20];

	for (size_t i = 0; i < 8; i++)
		ret[i] = serial[dis(gen) % serial.length()];
	*reinterpret_cast<int *>(ret + 8) = dis(gen);
	for (size_t i = 13; i < 20; i++)
		ret[i] = serial[dis(gen) % serial.length()];
	return (static_cast<void *>(ret));
}

Data * deserialize(void * raw)
{
	Data *ret = new Data;

	ret->s1 = std::string(static_cast<char *>(raw), 8);
	ret->n = *reinterpret_cast<int *>(static_cast<char *>(raw) + 8);
	ret->s2 = std::string(static_cast<char *>(raw) + 12, 8);
	return (ret);
}