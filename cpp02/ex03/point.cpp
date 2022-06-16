/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:21:57 by cjad              #+#    #+#             */
/*   Updated: 2022/06/16 13:02:30 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

point::point() : a(0), b(0)
{
}

point::point(const float i, const float j) : a(i), b(j)
{
}

point::point(const point &point)
{
	*this = point;
}

void point::operator=(const point &point)
{
	*this = point;
}

Fixed point::Tarea(const point &a, const point &b)
{
	Fixed x(0.5f);
	Fixed area (x * (this->a*(a.b-b.b)+a.a*(b.b-this->b)+b.a*(this->b - a.b)));
	if (area < 0)
		area = area * -1;
	return area;
}

point::~point()
{
	
}
