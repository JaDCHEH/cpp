/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHoard.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:51:50 by cjad              #+#    #+#             */
/*   Updated: 2022/06/02 18:17:30 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *newZombie;
	int i = 0;

	newZombie = new Zombie[N];
	while (i < N)
	{
		newZombie[i].setname(name);
		i++;
	}
	return(newZombie);
}