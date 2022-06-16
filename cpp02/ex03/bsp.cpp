/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:28:19 by cjad              #+#    #+#             */
/*   Updated: 2022/06/16 15:05:49 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

bool bsp( point const a, point const b, point const c, point const point)
{
	if (a.Tarea(b, c) == point.Tarea(a , b) + point.Tarea(a , c) + point.Tarea(c , b))
		return 1;
	return 0;
}