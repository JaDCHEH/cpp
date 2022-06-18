/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:45:05 by cjad              #+#    #+#             */
/*   Updated: 2022/06/17 19:06:53 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

animal::animal()
{
	std::cout << "Animal constructed" << std::endl;
	this->type = "Unknown";
}

std::string animal::getType() const
{
	return this->type;
}

void animal::makeSound() const
{
	std::cout << "I don't know what to say" << std::endl;
}

animal::~animal()
{
	std::cout << "Animal Destructed" << std::endl;
}
