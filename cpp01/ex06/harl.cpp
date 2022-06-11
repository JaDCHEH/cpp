/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:42:28 by cjad              #+#    #+#             */
/*   Updated: 2022/06/10 15:12:11 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"


harl::harl()
{
}
harl::~harl()
{
}

void harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}
void harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl << std::endl;
}
void harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}
void harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void harl::complain(std::string level)
{
	typedef void (harl::*fun)(void);
	fun f[4] = {&harl::debug, &harl::info, &harl::warning, &harl::error};
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while (i < 4)
	{
		if (level.compare(str[i]) == 0)
			break;
		i++;
	}
	switch (i)
	{
	case 0:
		(this->*(f[0]))();
	case 1:
		(this->*(f[1]))();
	case 2:
		(this->*(f[2]))();
	case 3:
		(this->*(f[3]))();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}