/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:07:58 by cjad              #+#    #+#             */
/*   Updated: 2022/06/14 15:50:10 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor Called" << std::endl;
	this->ad = 30;
	this->energy = 100;
	this->hitpoint = 100;
}

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor Called" << std::endl;
	this->name = "Unnamed";
	this->ad = 30;
	this->energy = 100;
	this->hitpoint = 100;
}

void FragTrap::attack(const std::string& target)
{
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->ad << " points of damage!" << std::endl; 
}

void FragTrap::highFivesGuys(void)
{
	
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor Called" << std::endl;
}