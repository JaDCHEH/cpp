/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:17:42 by cjad              #+#    #+#             */
/*   Updated: 2022/09/09 11:22:59 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
private:
	const Fixed a;
	const Fixed b;
public:
	Point();
	Point(const float a, const float b);
	Point(const Point &Point);
	void operator=(const Point &Point);
	Fixed Tarea(const Point &a, const Point &b) const;
	~Point();
	Fixed Geta() const;
	Fixed Getb() const;
};



#endif