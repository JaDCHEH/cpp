/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:12:23 by cjad              #+#    #+#             */
/*   Updated: 2022/07/31 15:08:40 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << this->name << " constructor Called" << std::endl;
	this->ad = 20;
	this->energy = 50;
	this->hitpoint = 100;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->ad << " points of damage!" << std::endl; 
}

ScavTrap::ScavTrap()
{
	this->name = "";
	this->ad = 20;
	this->energy = 50;
	this->hitpoint = 100;
}

ScavTrap::ScavTrap(const ScavTrap &Scav)
{
	this->name = Scav.name;
	this->ad = Scav.ad;
	this->energy = Scav.energy;
	this->hitpoint = Scav.hitpoint;
}

void ScavTrap::operator=(const ScavTrap &Scav)
{
	this->name = Scav.name;
	this->ad = Scav.ad;
	this->energy = Scav.energy;
	this->hitpoint = Scav.hitpoint;
}



ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}