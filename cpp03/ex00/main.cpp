/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:58:39 by cjad              #+#    #+#             */
/*   Updated: 2022/06/13 13:02:14 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::string str = "Garen";
	ClapTrap clap(str);

	clap.attack("Darius");
	clap.takeDamage(5);
	clap.beRepaired(5);
}