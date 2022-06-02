/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:57:18 by cjad              #+#    #+#             */
/*   Updated: 2022/06/02 20:19:28 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string& Weapon::get_type(void)
{
	std::string& ref = this->type;
	return ref;
}

void Weapon::setType(std::string type)
{
	this->type = type;
	std::cout << " ;:type:: " << type << " ::weapon type :" << this->type <<std::endl;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}
Weapon::Weapon()
{}
Weapon::~Weapon()
{}