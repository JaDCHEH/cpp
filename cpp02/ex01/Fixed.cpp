/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:33:43 by cjad              #+#    #+#             */
/*   Updated: 2022/06/16 14:52:55 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bites = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const int i)
{
	std::cout << "int constructor called" << std::endl;
	this->setRawBits(i << this->bites);
}
Fixed::Fixed(const float f)
{
	std::cout << "float constructor called" << std::endl;
	this->setRawBits(roundf(f * (1 << this->bites)));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

float Fixed::toFloat( void ) const
{
	float a = (float) this->number / (float) (1 << this->bites);
	return a;
}
int Fixed::toInt( void ) const
{
	int a = this->number / (1 << this->bites);
	return a;
}

Fixed & Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(fixed.getRawBits());
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed &fixed)
{
	float a = (float) fixed.number / (float) (1 << fixed.bites);
	os << a;
	return os;
}

int Fixed::getRawBits(void) const
{
	return (this->number);
}

void Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}