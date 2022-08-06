/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:33:56 by cjad              #+#    #+#             */
/*   Updated: 2022/08/04 17:49:40 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int	ints[] = { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t ints_size( sizeof(ints) / sizeof(int) );
	std::vector<int> v(ints, ints + ints_size);
	
	
	easyfind(v , 0);
	easyfind(v , 45);
	easyfind(v , 1);
}