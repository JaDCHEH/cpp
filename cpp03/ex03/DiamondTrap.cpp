/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:21:50 by cjad              #+#    #+#             */
/*   Updated: 2022/06/14 15:51:16 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "Diamond constructor called" << std::endl;
	this->name = name;
	this->ClapTrap::name = name + "_name_clap";
	this->hitpoint = this->FragTrap::initialhitpoint;
	this->energy = this->ScavTrap::initialenergy;
	this->ad = this->FragTrap::initialad;
}

void DiamondTrap::attack(const std::string &target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoiam()
{
	std::cout << "Claptrap name : " << this->ClapTrap::name << std::endl;
	std::cout << "DiamondTrap name : " << this->name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond destructor called" << std::endl;
}
