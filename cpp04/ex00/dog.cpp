/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:02:35 by cjad              #+#    #+#             */
/*   Updated: 2022/08/07 15:20:53 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
}

Dog::Dog(Dog &copy)
{
	
}

Dog &Dog::operator=(Dog &copy)
{
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof!!!" << std::endl;
}
Dog::~Dog()
{
	
}