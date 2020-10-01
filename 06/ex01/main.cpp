/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 05:19:16 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/01 21:07:36 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main(void)
{
	void *raw;
	Data* data;

	raw = serialize();
	data = deserialize(raw);

	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "n: " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;

	if (raw)
		delete static_cast<char *>(raw);
	if (data)
		delete data;
}