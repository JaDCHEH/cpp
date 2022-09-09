;/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:20:08 by cjad              #+#    #+#             */
/*   Updated: 2022/06/06 10:56:03 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const &name) : name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon (Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack (void)
{
	if (!this->weapon)
	{
		std::cout << this->name << " is unable to attack" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks with their " ;
	std::cout << this->weapon->get_type() << std::endl;
}