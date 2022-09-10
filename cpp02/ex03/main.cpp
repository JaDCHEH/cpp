/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:52:38 by cjad              #+#    #+#             */
/*   Updated: 2022/09/09 13:14:27 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const Point);

int main()
{
	Point a(0.f,0.f);
	Point b(25.f,0.f);
	Point c(0.f,15.f);
	Point x(7, 2);
	Point y(7, 31.5f);
	
	std::cout << bsp(a, b, c ,x) << std::endl;
	std::cout << c.Tarea(a, b) << std::endl;
	std::cout << y.Tarea(a, b) << std::endl;
	std::cout << bsp(a, b, c ,y) << std::endl;
	return 0;
}