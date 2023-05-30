/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:02:35 by cjad              #+#    #+#             */
/*   Updated: 2023/05/30 14:10:58 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->DogBrain = new Brain();
	this->type = "Dog";
}

Dog::Dog(const Dog &copy)
{
	this->DogBrain = new Brain();
	this->DogBrain = copy.DogBrain;
	this->type = copy.type;
}

Dog &Dog::operator=(const Dog &copy)
{
	delete this->DogBrain;
	this->DogBrain = new Brain();
	this->DogBrain = copy.DogBrain;
	this->type = copy.type;
	return(*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof!!!" << std::endl;
}
Dog::~Dog()
{
	delete this->DogBrain;
	std::cout << "Dog destroyed" << std::endl;
}