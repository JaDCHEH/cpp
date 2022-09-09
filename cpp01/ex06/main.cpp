/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 12:37:29 by cjad              #+#    #+#             */
/*   Updated: 2022/09/02 15:47:24 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"


int main(int ac, char **av)
{
	harl h;
	if (ac != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	std::string str(av[1]);
	h.complain(str);
}