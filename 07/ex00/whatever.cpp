/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 23:33:11 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/01 23:48:40 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T &min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T &max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}

int main( void )
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	float f1 = 2.1f;
	float f2 = 2.2f;

	::swap(f1, f2);
	std::cout << "f1 = " << f1 << "f, f2 = " << f2 << "f" << std::endl;
	std::cout << "min( f1, f2 ) = " << ::min( f1, f2 ) << "f" << std::endl;
	std::cout << "max( f1, f2 ) = " << ::max( f1, f2 ) << "f" << std::endl;

	double d1 = 2.1;
	double d2 = 2.2;

	::swap(d1, d2);
	std::cout << "d1 = " << d1 << ", d2 = " << d2 << std::endl;
	std::cout << "min( d1, d2 ) = " << ::min( d1, d2 ) << std::endl;
	std::cout << "max( d1, d2 ) = " << ::max( d1, d2 ) << std::endl;

	char c1 = 'a';
	char c2 = 'b';

	::swap(c1, c2);
	std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
	std::cout << "min( c1, c2 ) = " << ::min( c1, c2 ) << std::endl;
	std::cout << "max( c1, c2 ) = " << ::max( c1, c2 ) << std::endl;

	return 0;
}
