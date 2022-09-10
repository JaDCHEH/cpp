/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:01:02 by cjad              #+#    #+#             */
/*   Updated: 2022/09/10 19:01:07 by cjad             ###   ########.fr       */
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

WrongAnimal::WrongAnimal(WrongAnimal const & _p1){
	this->type = _p1.type;
}

WrongAnimal & WrongAnimal::operator = (WrongAnimal const & _p1){
	this->type = _p1.type;
	return (*this);
}

std::string	WrongAnimal::getType( void ) const{
	return (this->type);
}

void    WrongAnimal::makeSound( void ) const{
	std::cout << "Any WrongAnimal Sound . . ." << std::endl; 
}