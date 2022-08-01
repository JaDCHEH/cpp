/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:09:19 by cjad              #+#    #+#             */
/*   Updated: 2022/08/01 17:04:26 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>
# include <string>
class ClapTrap
{
protected:
	std::string name;
	unsigned int hitpoint;
	unsigned int energy;
	unsigned int ad;
	const static unsigned int initialhitpoint = 10;
	const static unsigned int initialenergy = 10;
	const static unsigned int initialad = 0;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &ClapTrap);
	void operator=(const ClapTrap &ClapTrap);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~ClapTrap();
};

#endif