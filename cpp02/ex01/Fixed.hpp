/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:34:00 by cjad              #+#    #+#             */
/*   Updated: 2022/06/11 13:36:43 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <math.h>

class Fixed
{
private:
	int	number;
	static const int bites;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const int i);
	Fixed(const float f);
	void operator=(const Fixed &fixed);
	friend std::ostream& operator<<(std::ostream& os, const Fixed &fixed);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
	~Fixed();
};

#endif