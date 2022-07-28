/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:43:34 by cjad              #+#    #+#             */
/*   Updated: 2022/07/26 11:51:01 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void iter(T *array, int size, void (*func)(T &))
{
	int i = 0;
	
	while (i < size)
	{
		func(array[i]);
		i++;
	}
}

template<typename T>
void print(T &a)
{
	std::cout << a;
}

template<typename T>
void add1(T &a)
{
	a++;
}

#endif