/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:48:48 by cjad              #+#    #+#             */
/*   Updated: 2022/09/14 18:56:01 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{ 
	int ints[] = {0,1,2,3,4,5,6,7,8,9};
	char chars[] = {'a','b','c','d','e','f'};
	std::string strs[] = { "ez", "to" , "check", "this", "?"};
	std::cout << "Print integer array : " << std::endl;
	iter<const int>(ints, 10, print);
	std::cout << std::endl;
	iter<int>(ints, 10, add1);
	std::cout << "Print integer array after add1: " << std::endl;
	iter<const int>(ints, 10, print);
	std::cout << std::endl;
	std::cout << "Print char array : " << std::endl;
	iter<const char>(chars, 6, print);
	std::cout << std::endl;
	iter<char>(chars, 6, add1);
	std::cout << "Print char array after add1: " << std::endl;
	iter<const char>(chars, 6, print);
	std::cout << std::endl;
	std::cout << "Print std::string array :" << std::endl;
	iter<const std::string>(strs, 5, print);
	std::cout << std::endl;
}