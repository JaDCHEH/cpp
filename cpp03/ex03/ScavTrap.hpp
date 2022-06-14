/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:04:13 by cjad              #+#    #+#             */
/*   Updated: 2022/06/14 15:31:31 by cjad             ###   ########.fr       */
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
	ScavTrap(std::string name);
	ScavTrap();
	void attack(const std::string &name);
	void guardGate();
	~ScavTrap();
};

#endif