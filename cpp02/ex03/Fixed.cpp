/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:33:43 by cjad              #+#    #+#             */
/*   Updated: 2022/06/20 15:54:20 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bites = 8;

Fixed::Fixed()
{
	this->setRawBits(0);
}

Fixed::Fixed(const int i)
{
	this->setRawBits(i << this->bites);
	
}
Fixed::Fixed(const float f)
{
	this->setRawBits(roundf(f * (1 << this->bites)));
}

Fixed::Fixed(const Fixed &fixed)
{
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
	this->setRawBits(fixed.getRawBits());
	return (*this);
}

Fixed Fixed::operator + (const Fixed &fixed)
{
	Fixed result;
	result.number = (this->toFloat() + fixed.toFloat()) * (1 << this->bites);
	return result;
}
Fixed Fixed::operator - (const Fixed &fixed)
{
	Fixed result;
	result.number = (this->toFloat() - fixed.toFloat()) * (1 << this->bites);
	return result;
}
Fixed Fixed::operator / (const Fixed &fixed)
{
	Fixed result;
	result.number = (this->toFloat() / fixed.toFloat()) * (1 << this->bites);
	return result;
}
Fixed Fixed::operator * (const Fixed &fixed)
{
	Fixed result;
	result.number = (this->toFloat() * fixed.toFloat()) * (1 << this->bites);
	return result;
}

Fixed Fixed::operator++(void)
{
	Fixed result;
	result.number = ++this->number;
	return result;
}

Fixed Fixed::operator--(void)
{
	Fixed result;
	result.number = --this->number;
	return result;
}

Fixed Fixed::operator++(int)
{
	Fixed result;
	result.number = this->number++;
	return result;
}

Fixed Fixed::operator--(int)
{
	Fixed result;
	result.number = this->number--;
	return result;
}


std::ostream& operator<<(std::ostream& os, const Fixed &fixed)
{
	float a = (float) fixed.number / (float) (1 << fixed.bites);
	os << a;
	return os;
}

int Fixed::operator<(const Fixed &fixed)
{
	if(this->number < fixed.number)
		return(1);
	return(0);
}
int Fixed::operator>(const Fixed &fixed)
{
	if(this->number > fixed.number)
		return(1);
	return(0);
}
int	Fixed::operator<=(const Fixed &fixed)
{
	if(this->number <= fixed.number)
		return(1);
	return(0);
}
int	Fixed::operator>=(const Fixed &fixed)
{
	if(this->number >= fixed.number)
		return(1);
	return(0);
}
int	Fixed::operator==(const Fixed &fixed)
{
	if(this->number == fixed.number)
		return(1);
	return(0);
}
int	Fixed::operator!=(const Fixed &fixed)
{
	if(this->number != fixed.number)
		return(1);
	return(0);
}

int Fixed::getRawBits(void) const
{
	return (this->number);
}

void Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

Fixed& Fixed::max(Fixed &n1, Fixed &n2)
{
	if(n1 > n2)
		return n1;
	return n2;
}
Fixed& Fixed::min(Fixed &n1, Fixed &n2)
{
	if(n1 < n2)
		return n1;
	return n2;
}
const Fixed& Fixed::max(const Fixed &n1, const Fixed &n2)
{
	if(n1.number > n2.number)
		return n1;
	return n2;
}
const Fixed& Fixed::min(const Fixed &n1, const Fixed &n2)
{
	if(n1.number < n2.number)
		return n1;
	return n2;
}

Fixed::~Fixed()
{
}