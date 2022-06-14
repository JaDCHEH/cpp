/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:21:57 by cjad              #+#    #+#             */
/*   Updated: 2022/06/12 14:05:45 by cjad             ###   ########.fr       */
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

point::~point()
{
	
}
