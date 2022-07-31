/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:15:19 by cjad              #+#    #+#             */
/*   Updated: 2022/07/31 12:58:06 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

std::string &HumanA::getname()
{
	return this->name;
}

void HumanA::attack (void)
{
	std::cout << this->getname() << " attacks with their " ;
	std::cout << this->weapon.get_type() << std::endl;
}

HumanA::HumanA(std::string const &name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA()
{}