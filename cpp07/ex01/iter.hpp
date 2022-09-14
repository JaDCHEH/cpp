/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:43:34 by cjad              #+#    #+#             */
/*   Updated: 2022/09/14 18:56:56 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void iter(T *array, int size, void (*func)(T &))
{
	int i = 0;
	if (!array)
		return;
	while (i < size)
	{
		func(array[i]);
		i++;
	}
}

template<typename T>
void print(T &a)
{
	std::cout << a << ' ';
}

template<typename T>
void add1(T &a)
{
	a++;
}

#endif