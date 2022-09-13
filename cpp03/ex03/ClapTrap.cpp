/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:19:21 by cjad              #+#    #+#             */
/*   Updated: 2022/09/13 13:28:32 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name)
{
	this->name = name;
	this->ad = 0;
	this->energy = 10;
	this->hitpoint = 10;
	std::cout << "ClapTrap " << this->name << " Constructor called" << std::endl;
}

ClapTrap::ClapTrap()
{
	this->name = "";
	this->ad = 0;
	this->energy = 10;
	this->hitpoint = 10;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap)
{
	this->name = ClapTrap.name;
	this->ad = ClapTrap.ad;
	this->energy = ClapTrap.energy;
	this->hitpoint = ClapTrap.hitpoint;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &ClapTrap)
{
	this->name = ClapTrap.name;
	this->ad = ClapTrap.ad;
	this->energy = ClapTrap.energy;
	this->hitpoint = ClapTrap.hitpoint;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if(this->energy > 0 && this->hitpoint > 0)
	{
		this->energy--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->ad << " points of damage!" << std::endl; 
	}
	else
		std::cout << "ClapTrap " << this->name << " is out of energy or hp" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitpoint -= amount;
	std::cout << "ClapTrap " << this->name << " took " << amount << " amount of damage!" << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->energy > 0 && this->hitpoint > 0)
	{
		this->energy--;
		this->hitpoint += amount;
		std::cout << "ClapTrap " << this->name << " Healed " << amount << " Hp!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " is out of energy or hp " << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap "<< this->name <<" Destructor called" << std::endl;
}
