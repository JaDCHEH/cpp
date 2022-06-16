/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:12:23 by cjad              #+#    #+#             */
/*   Updated: 2022/06/14 15:50:41 by cjad             ###   ########.fr       */
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

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor Called" << std::endl;
	this->name = "Unnamed";
	this->ad = 20;
	this->energy = 50;
	this->hitpoint = 100;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->ad << " points of damage!" << std::endl; 
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}