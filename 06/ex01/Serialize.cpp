/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 05:12:14 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/01 05:20:49 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

void * serialize()
{
	char *value;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 1000);
	value = new char[sizeof(char) * 20];

	std::string serial = std::string(SERIAL);

	for (int i = 0; i < 20; i++)
	{
		if (i >= 9 && i <= 11)
			continue ;
		if (i == 8)
		{
			*reinterpret_cast<int *>(value + i) = dis(gen);
			continue ;
		}
		char tmp = serial[dis(gen) % serial.size()];
		value[i] = tmp;
	}
	return (static_cast<void *>(value));
}

Data * deserialize(void * raw)
{
	Data * ret;

	ret = new Data;
	ret->s1 = std::string(static_cast<char *>(raw), 8);
	ret->s2 = std::string(static_cast<char *>(raw) + 12, 8);
	ret->n = *reinterpret_cast<int *>(static_cast<char *>(raw) + 8);

	return (ret);
}