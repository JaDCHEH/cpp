/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:54:44 by cjad              #+#    #+#             */
/*   Updated: 2022/07/31 12:01:35 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int	i;
	int	a;
	std::string str;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			a = 0;
			str = av[i];
			while (str[a])
			{
				str[a] = toupper(str[a]);
				a++;
			}
			std::cout << str;
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}