/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:17:42 by cjad              #+#    #+#             */
/*   Updated: 2022/06/12 13:28:28 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class point
{
private:
	Fixed const a;
	Fixed const b;
public:
	point();
	point(const float a, const float b);
	point(const point &point);
	void operator=(const point &point);
	~point();
};



#endif