/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 23:49:51 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/02 00:11:48 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>
void iter(T *array, int length, void (*f)(T const &))
{
	if (array == nullptr)
		return ;
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void ft_print(T & v)
{
	std::cout << v << ", ";
}

int main()
{
	std::cout << "============================ int ============================" << std::endl;

	int int_array[10];
	for (int i = 0; i < 10; i++)
		int_array[i] = i;
	for (int i = 0; i < 10; i++)
		std::cout << int_array[i] << " ";
	std::cout << std::endl;

	iter(int_array, 10, ft_print);
	std::cout << std::endl;

	iter(int_array, (size_t)10, ft_print);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "============================ float ============================" << std::endl;

	float float_array[10];
	for (int i = 0; i < 10; i++)
		float_array[i] = i + 0.1f;
	for (int i = 0; i < 10; i++)
		std::cout << float_array[i] << " ";
	std::cout << std::endl;

	iter(float_array, 10, ft_print);
	std::cout << std::endl;

	iter(float_array, (size_t)10, ft_print);
	std::cout << std::endl;


	std::cout << std::endl;
	std::cout << "============================ double ============================" << std::endl;

	double double_array[10];
	for (int i = 0; i < 10; i++)
		double_array[i] = i + 0.01;
	for (int i = 0; i < 10; i++)
		std::cout << double_array[i] << " ";
	std::cout << std::endl;

	iter(double_array, 10, ft_print);
	std::cout << std::endl;

	iter(double_array, (size_t)10, ft_print);
	std::cout << std::endl;


	std::cout << std::endl;
	std::cout << "============================ char ============================" << std::endl;

	char char_array[10];
	for (int i = 0; i < 10; i++)
		char_array[i] = i + 'a';
	for (int i = 0; i < 10; i++)
		std::cout << char_array[i] << " ";
	std::cout << std::endl;

	iter(char_array, 10, ft_print);
	std::cout << std::endl;

	iter(char_array, (size_t)10, ft_print);
	std::cout << std::endl;


	std::cout << std::endl;
	std::cout << "============================ string ============================" << std::endl;

	std::string string_array[10] = {"hello", "world", "my", "name", "is", "yohlee", "nice", "to", "meet", "you"};

	for (int i = 0; i < 10; i++)
		std::cout << string_array[i] << " ";
	std::cout << std::endl;

	iter(string_array, 10, ft_print);
	std::cout << std::endl;

	iter(string_array, (size_t)10, ft_print);
	std::cout << std::endl;
}