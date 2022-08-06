/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:21:50 by cjad              #+#    #+#             */
/*   Updated: 2022/08/06 18:48:12 by cjad             ###   ########.fr       */
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

DiamondTrap::DiamondTrap()
{
	this->name = "";
	this->ClapTrap::name = name + "_name_clap";
	this->hitpoint = this->FragTrap::initialhitpoint;
	this->energy = this->ScavTrap::initialenergy;
	this->ad = this->FragTrap::initialad;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diam)
{
	this->name = diam.name ;
	this->ClapTrap::name = diam.ClapTrap::name ;
	this->hitpoint = diam.hitpoint ;
	this->energy = diam.energy ;
	this->ad = diam.ad ;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &diam)
{
	this->name = diam.name ;
	this->ClapTrap::name = diam.ClapTrap::name ;
	this->hitpoint = diam.hitpoint ;
	this->energy = diam.energy ;
	this->ad = diam.ad ;
	return *this;
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
