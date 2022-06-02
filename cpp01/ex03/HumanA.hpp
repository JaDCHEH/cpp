/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:07:31 by cjad              #+#    #+#             */
/*   Updated: 2022/06/02 20:23:31 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
public:
	Weapon weapon;
	std::string name;
	void attack (void);
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
};

#endif