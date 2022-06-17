/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:45:05 by cjad              #+#    #+#             */
/*   Updated: 2022/06/17 18:47:24 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

animal::animal()
{
	std::cout << "Animal constructed" << std::endl;
}

std::string animal::getType()
{
	return this->type;
}

void animal::makeSound()
{
	
}

animal::~animal()
{
	std::cout << "Animal Destructed" << std::endl;
}
