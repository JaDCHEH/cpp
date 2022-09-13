/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:04:13 by cjad              #+#    #+#             */
/*   Updated: 2022/09/13 13:04:09 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
protected:
	const static unsigned int initialhitpoint = 100;
	const static unsigned int initialenergy = 50;
	const static unsigned int initialad = 20;
public:
	ScavTrap();
	ScavTrap(std::string const &name);
	ScavTrap(const ScavTrap &Scav);
	ScavTrap & operator=(const ScavTrap &Scav);
	void attack(const std::string &target);
	void guardGate();
	~ScavTrap();
};

#endif