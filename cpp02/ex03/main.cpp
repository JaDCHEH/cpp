/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:52:38 by cjad              #+#    #+#             */
/*   Updated: 2022/06/16 15:24:30 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"
#include <iostream>

bool bsp( point const a, point const b, point const c, point const point);

int main()
{
	point a(0.5f,0.25f);
	point b(13.5f,22.75f);
	point c(12,3);
	point x(7, 30);
	point y(7.12f, 6.25f);
	
	std::cout << bsp(a, b, c ,x) << std::endl;
	std::cout << y.Tarea(a, b) << std::endl;
	std::cout << bsp(a, b, c ,y) << std::endl;
	return 0;
}