/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:49:44 by cjad              #+#    #+#             */
/*   Updated: 2022/06/02 19:48:37 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>

class Weapon
{
public:
	std::string& get_type(void);
	void setType(std::string type);
	Weapon(std::string type);
	Weapon();
	~Weapon();
private:
	std::string type;
};

#endif