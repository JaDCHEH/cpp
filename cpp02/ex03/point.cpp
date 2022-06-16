/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:21:57 by cjad              #+#    #+#             */
/*   Updated: 2022/06/16 15:08:44 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

point::point() : a(0), b(0)
{
}

point::point(const float i, const float j) : a(i), b(j)
{
}

point::point(const point &point) : a(point.a), b(point.b)
{
}

void point::operator=(const point &point)
{
	(void) point;
}

Fixed point::Geta() const
{
	return this->a;
}

Fixed point::Getb() const
{
	return this->b;
}

Fixed point::Tarea(const point &a, const point &b) const
{
	Fixed x(0.5f);
	Fixed area (x * (this->Geta() * (a.Getb() - b.Getb()) + a.Geta()*(b.Getb()-this->Getb())+b.Geta()*(this->Getb() - a.Getb())));
	if (area < 0)
		area = area * -1;
	return area;
}

point::~point()
{
	
}
