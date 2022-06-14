/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:58:39 by cjad              #+#    #+#             */
/*   Updated: 2022/06/13 17:19:45 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::string str = "Garen";
	std::string str2 = "Lux";
	std::string str3 = "Katarina";
	ClapTrap clap(str);
	ScavTrap scav(str2);
	FragTrap frag(str3);

	clap.attack("Darius");
	scav.attack("Darius");
	frag.attack("Darius");
	clap.takeDamage(5);
	clap.beRepaired(5);
	scav.takeDamage(6);
	scav.beRepaired(6);
	frag.takeDamage(7);
	frag.beRepaired(7);
	scav.guardGate();
}