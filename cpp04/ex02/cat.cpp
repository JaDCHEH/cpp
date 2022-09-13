/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:02:50 by cjad              #+#    #+#             */
/*   Updated: 2022/09/13 13:31:03 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->CatBrain = new Brain();
	this->type = "Cat";
}

Cat::Cat(const Cat &copy)
{
	this->CatBrain = new Brain();
	this->CatBrain = copy.CatBrain;
	this->type = copy.type;
}

Cat &Cat::operator=(const Cat &copy)
{
	delete this->CatBrain;
	this->CatBrain = new Brain();
	this->CatBrain = copy.CatBrain;
	this->type = copy.type;
	return(*this);
}


void Cat::makeSound() const
{
	std::cout << "Meoooowwww!!!" << std::endl;
}

Cat::~Cat()
{
	delete this->CatBrain;
	std::cout << "Cat destroyed" << std::endl;
}