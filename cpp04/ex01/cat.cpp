/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:02:50 by cjad              #+#    #+#             */
/*   Updated: 2022/06/18 12:33:12 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

cat::cat()
{
	this->catbrain = new brain();
	this->type = "cat";
}

void cat::makeSound() const
{
	std::cout << "Meoooowwww!!!" << std::endl;
}

cat::~cat()
{
	delete this->catbrain;
	std::cout << "cat destroyed and it's brain deleted" << std::endl;
}