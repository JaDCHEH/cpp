/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:13:02 by cjad              #+#    #+#             */
/*   Updated: 2022/06/06 10:56:13 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
public:
	Weapon *weapon;
	std::string const &name;
	void setWeapon (Weapon &weapon);
	void attack (void);
	HumanB(std::string const &name);
	~HumanB();
};

#endif