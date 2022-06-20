/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:02:35 by cjad              #+#    #+#             */
/*   Updated: 2022/06/18 13:06:51 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

dog::dog()
{
	this->dogbrain = new brain();
	this->type = "dog";
}
void dog::makeSound() const
{
	std::cout << "Woof Woof!!!" << std::endl;
}
dog::~dog()
{
	delete this->dogbrain;
	std::cout << "dog destroyed" << std::endl;
}