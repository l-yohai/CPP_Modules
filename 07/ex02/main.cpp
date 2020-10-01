/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 00:44:17 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/02 01:44:52 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T>
void print(Array<T> &array)
{
	try
	{
		std::cout << "array: ";
		for (unsigned int i = 0; i < array.size() + 1; i++)
			std::cout << array[i] << ", ";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int main()
{
	std::cout << "============================ int ============================" << std::endl;

	Array<int> int_array(10);

	for (int i = 0; i < 10; i++)
		int_array[i] = i;
	std::cout << "origin: ";
	for (int i = 0; i < 10; i++)
		std::cout << int_array[i] << " ";
	std::cout << std::endl;

	print(int_array);

	std::cout << std::endl;
	std::cout << "============================ float ============================" << std::endl;

	Array<float> float_array(10);
	for (int i = 0; i < 10; i++)
		float_array[i] = i + 0.1f;
	std::cout << "origin: ";
	for (int i = 0; i < 10; i++)
		std::cout << float_array[i] << " ";
	std::cout << std::endl;

	print(float_array);

	std::cout << std::endl;
	std::cout << "============================ double ============================" << std::endl;

	Array<double> double_array(10);
	for (int i = 0; i < 10; i++)
		double_array[i] = i + 0.01;
	std::cout << "origin: ";
	for (int i = 0; i < 10; i++)
		std::cout << double_array[i] << " ";
	std::cout << std::endl;

	print(double_array);

	std::cout << std::endl;
	std::cout << "============================ char ============================" << std::endl;

	Array<char> char_array(10);
	for (int i = 0; i < 10; i++)
		char_array[i] = i + 'a';
	std::cout << "origin: ";
	for (int i = 0; i < 10; i++)
		std::cout << char_array[i] << " ";
	std::cout << std::endl;

	print(char_array);

	std::cout << std::endl;
	std::cout << "============================ copy ============================" << std::endl;
	Array<int> copy(int_array);
	print(copy);
	copy[0] = 100;
	std::cout << "copy[0]=100: ";
	print(copy);
	std::cout << "origin_array: ";
	print(int_array);

	std::cout << std::endl;
	std::cout << "============================ assign ============================" << std::endl;
	Array<int> assign;
	assign = int_array;
	print(assign);
	assign[0] = 100;
	std::cout << "assign[0]=100: ";
	print(assign);
	std::cout << "origin_array: ";
	print(int_array);

	std::cout << std::endl;
	std::cout << "============================ constructor ============================" << std::endl;
	Array<int> test;
	try
	{
		std::cout << test[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}