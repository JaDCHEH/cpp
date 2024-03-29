/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:28:19 by cjad              #+#    #+#             */
/*   Updated: 2022/09/09 12:53:04 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const Point)
{
	if (a.Tarea(b, c) == Point.Tarea(a , b) + Point.Tarea(a , c) + Point.Tarea(c , b))
		return 1;
	return 0;
}