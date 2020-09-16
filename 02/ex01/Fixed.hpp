/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 11:53:20 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/16 19:11:40 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int value;
	static const int bits = 8;
public:
	Fixed();
	Fixed(const Fixed& copy);
	Fixed(int const fixed);
	Fixed(float const fixed);
	Fixed& operator=(const Fixed& assign);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	~Fixed();
};

std::ostream& operator<<(std::ostream &out, const Fixed& fixed);

#endif