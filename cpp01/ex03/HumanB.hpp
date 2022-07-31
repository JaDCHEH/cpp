/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:13:02 by cjad              #+#    #+#             */
/*   Updated: 2022/07/31 13:01:27 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
private:
	Weapon *weapon;
	std::string name;
public:
	std::string &getname();
	void setWeapon (Weapon &weapon);
	void attack (void);
	HumanB(std::string const &name);
	~HumanB();
};

#endif