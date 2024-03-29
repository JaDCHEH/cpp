/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:22:24 by cjad              #+#    #+#             */
/*   Updated: 2022/06/02 17:56:39 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <new>

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