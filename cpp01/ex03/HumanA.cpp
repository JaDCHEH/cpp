/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:15:19 by cjad              #+#    #+#             */
/*   Updated: 2022/06/06 10:51:37 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack (void)
{
	std::cout << this->name << " attacks with their " ;
	std::cout << this->weapon.get_type() << std::endl;
}

HumanA::HumanA(std::string const &name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA()
{}