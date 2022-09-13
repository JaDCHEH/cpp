/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:07:58 by cjad              #+#    #+#             */
/*   Updated: 2022/09/13 13:28:19 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "FragTrap" << this->name << "Constructor called" << std::endl;
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
	if(this->energy > 0 && this->hitpoint > 0)
	{
		this->energy--;
		std::cout << "FragTrap " << this->name << " requests 10 high fives" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->name << " is out of energy or hp" << std::endl;
	
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap "<< this->name <<" Destructor Called" << std::endl;
}