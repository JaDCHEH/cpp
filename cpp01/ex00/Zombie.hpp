/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:22:24 by cjad              #+#    #+#             */
/*   Updated: 2022/06/02 15:02:44 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
public:
	void announce( void );
	Zombie(std::string name);
	~Zombie();
private:
	std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif