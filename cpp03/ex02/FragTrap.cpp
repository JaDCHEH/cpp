/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:07:58 by cjad              #+#    #+#             */
/*   Updated: 2022/08/06 18:45:24 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
	this->ad = 30;
	this->energy = 100;
	this->hitpoint = 100;
}

FragTrap::FragTrap()
{
	this->name = "";
	this->ad = 30;
	this->energy = 100;
	this->hitpoint = 100;
}

FragTrap::FragTrap(const FragTrap &Frag)
{
	this->name = Frag.name;
	this->ad = Frag.ad;
	this->energy = Frag.energy;
	this->hitpoint = Frag.hitpoint;
}

FragTrap & FragTrap::operator=(const FragTrap &Frag)
{
	this->name =Frag.name;
	this->ad =Frag.ad;
	this->energy = Frag.energy;
	this->hitpoint = Frag.hitpoint;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->name << " requests 10 high fives" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor Called" << std::endl;
}