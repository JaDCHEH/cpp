/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:07:31 by cjad              #+#    #+#             */
/*   Updated: 2022/07/31 12:57:08 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
private:
	Weapon &weapon;
	std::string name;

public:
	std::string &getname();
	void attack (void);
	HumanA(std::string const &name, Weapon &weapon);
	~HumanA();
};

#endif