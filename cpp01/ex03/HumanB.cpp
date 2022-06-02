/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:20:08 by cjad              #+#    #+#             */
/*   Updated: 2022/06/02 20:21:03 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon (Weapon &weapon)
{
	this->weapon = weapon;
}

void HumanB::attack (void)
{
	if (this->weapon.get_type().empty())
	{
		std::cout << this->name << " is unable to attack" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks with their " ;
	std::cout << this->weapon.get_type() << std::endl;
}
HumanB::HumanB(std::string name)
{
	this->name = name;
}
HumanB::~HumanB()
{}