/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:01:02 by cjad              #+#    #+#             */
/*   Updated: 2022/09/12 15:22:43 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ){
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal Constructor Called !" << std::endl;
}

WrongAnimal::~WrongAnimal( void ){
	std::cout << "WrongAnimal Destructor Called !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
	this->type =copy.type;
}

WrongAnimal & WrongAnimal::operator = (const WrongAnimal &copy){
	this->type =copy.type;
	return (*this);
}

std::string	WrongAnimal::getType( void ) const{
	return (this->type);
}

void    WrongAnimal::makeSound( void ) const{
	std::cout << "Any WrongAnimal Sound . . ." << std::endl; 
}