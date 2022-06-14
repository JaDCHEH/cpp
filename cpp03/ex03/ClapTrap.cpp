/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:19:21 by cjad              #+#    #+#             */
/*   Updated: 2022/06/14 15:51:57 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->ad = 0;
	this->energy = 10;
	this->hitpoint = 10;
	std::cout << "ClavTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap()
{
	std::cout << "ClavTrap Constructor called" << std::endl;
	this->name = "unnamed";
	this->ad = 0;
	this->energy = 10;
	this->hitpoint = 10;
}


void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->ad << " points of damage!" << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitpoint -= amount;
	std::cout << "ClapTrap " << this->name << " took " << amount << " amount of damage!" << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hitpoint += amount;
	std::cout << "ClapTrap " << this->name << " Healed " << amount << " Hp!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClavTrap Destructor called" << std::endl;
}
