/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:01:21 by cjad              #+#    #+#             */
/*   Updated: 2022/09/12 15:21:21 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ){
    this->type = "WrongCat";
    std::cout << "WrongCat Constructor Called !" << std::endl;
}

WrongCat::~WrongCat( void ){
    std::cout << "WrongCat Destructor Called !" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy){
    this->type =copy.type;
}

WrongCat & WrongCat::operator = (WrongCat const &copy){
    this->type =copy.type;
    return (*this);
}

void WrongCat::makeSound( void ) const{
    std::cout << "Any WrongCat Sound . . ." << std::endl; 
}