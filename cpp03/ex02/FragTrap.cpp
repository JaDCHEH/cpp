/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:07:58 by cjad              #+#    #+#             */
/*   Updated: 2022/06/14 11:43:16 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string &name) : ClapTrap(name)
{
	std::cout << "FragTrap " << this->name << " constructor Called" << std::endl;
	this->ad = 30;
	this->energy = 100;
	this->hitpoint = 100;
}

void FragTrap::highFivesGuys(void)
{
	
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor Called" << std::endl;
}