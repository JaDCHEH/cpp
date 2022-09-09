/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:52:38 by cjad              #+#    #+#             */
/*   Updated: 2022/09/09 11:23:48 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const Point);

int main()
{
	Point a(0.5f,0.25f);
	Point b(13.5f,22.75f);
	Point c(12,3);
	Point x(7, 30);
	Point y(7.12f, 6.25f);
	
	std::cout << bsp(a, b, c ,x) << std::endl;
	std::cout << y.Tarea(a, b) << std::endl;
	std::cout << bsp(a, b, c ,y) << std::endl;
	return 0;
}