/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:58:39 by cjad              #+#    #+#             */
/*   Updated: 2022/06/13 16:01:37 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::string str = "Garen";
	std::string str2 = "Lux";
	ClapTrap clap(str);
	ScavTrap scav(str2);

	clap.attack("Darius");
	scav.attack("Darius");
	clap.takeDamage(5);
	clap.beRepaired(5);
	scav.guardGate();
}