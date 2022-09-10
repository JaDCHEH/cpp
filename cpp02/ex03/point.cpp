/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:21:57 by cjad              #+#    #+#             */
/*   Updated: 2022/09/09 12:53:27 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : a(0), b(0)
{
}

Point::Point(const float i, const float j) : a(i), b(j)
{
}

Point::Point(const Point &Point) : a(Point.a), b(Point.b)
{
}

void Point::operator=(const Point &Point)
{
	(void) Point;
}

Fixed Point::Geta() const
{
	return this->a;
}

Fixed Point::Getb() const
{
	return this->b;
}

Fixed Point::Tarea(const Point &a, const Point &b) const
{
	Fixed x(0.5f);
	Fixed area (x * (this->Geta() * (a.Getb() - b.Getb()) + a.Geta() * (b.Getb()-this->Getb()) + b.Geta() * (this->Getb() - a.Getb())));
	if (area < 0)
		area = area * -1;
	return area;
}

Point::~Point()
{
	
}
