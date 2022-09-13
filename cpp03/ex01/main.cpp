/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:58:39 by cjad              #+#    #+#             */
/*   Updated: 2022/09/13 13:05:36 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap("Garen");
	ScavTrap scav("Lux");

	clap.attack("Darius");
	scav.attack("Darius");
	clap.takeDamage(5);
	clap.beRepaired(5);
	scav.guardGate();
}