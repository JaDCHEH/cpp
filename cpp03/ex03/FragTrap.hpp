/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:18:50 by cjad              #+#    #+#             */
/*   Updated: 2022/07/31 15:42:46 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
protected:
	const static unsigned int initialhitpoint = 100;
	const static unsigned int initialenergy = 100;
	const static unsigned int initialad = 30;
public:
	FragTrap();
	FragTrap(const FragTrap &Frag);
	void operator=(const FragTrap &Frag);
	FragTrap(std::string name);
	void highFivesGuys(void);
	~FragTrap();
};

#endif