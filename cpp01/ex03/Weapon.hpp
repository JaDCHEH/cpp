/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:49:44 by cjad              #+#    #+#             */
/*   Updated: 2022/08/30 15:52:42 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>

class Weapon
{
public:
	std::string const &get_type(void);
	void setType(std::string const &type);
	Weapon(std::string const &type);
	Weapon();
	~Weapon();
private:
	std::string type;
};

#endif