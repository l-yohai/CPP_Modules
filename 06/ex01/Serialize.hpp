/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 04:56:05 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/01 05:15:45 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <random>
# define SERIAL "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

struct Data
{
	std::string s1;
	std::string s2;
	int n;
};

void * serialize();
Data * deserialize(void * raw);

#endif