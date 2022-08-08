/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:45:05 by cjad              #+#    #+#             */
/*   Updated: 2022/08/07 15:18:32 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructed" << std::endl;
	this->type = "Unknown";
}

Animal::Animal(Animal &copy)
{
	this->type = copy.type;
}

Animal &Animal::operator= (Animal & copy)
{
	this->type = copy.type;
	return *this;
}


std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "I don't know what to say" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructed" << std::endl;
}
