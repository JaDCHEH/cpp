/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:02:50 by cjad              #+#    #+#             */
/*   Updated: 2022/08/07 15:35:53 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->CatBrain = new Brain();
	this->type = "Cat";
}

Cat::Cat(Cat &copy)
{
	this->CatBrain = copy.CatBrain;
}

Cat &Cat::operator=(Cat &copy)
{
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