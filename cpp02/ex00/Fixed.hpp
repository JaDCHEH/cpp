/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:34:00 by cjad              #+#    #+#             */
/*   Updated: 2022/06/10 18:54:51 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed
{
private:
	int	number;
	static const int bites;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	void operator=(const Fixed &fixed);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	~Fixed();
};

#endif