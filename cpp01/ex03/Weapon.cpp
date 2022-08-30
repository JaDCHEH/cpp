/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:57:18 by cjad              #+#    #+#             */
/*   Updated: 2022/08/30 15:52:45 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string const &Weapon::get_type(void)
{
	return (this->type);
}

void Weapon::setType(std::string const &type)
{
	this->type = type;
}

Weapon::Weapon(std::string const &type)
{
	this->type = type;
}
Weapon::Weapon()
{}
Weapon::~Weapon()
{}