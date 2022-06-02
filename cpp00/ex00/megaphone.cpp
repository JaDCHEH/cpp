/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:54:44 by cjad              #+#    #+#             */
/*   Updated: 2022/05/28 18:32:43 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	a;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			a = 0;
			while (av[i][a])
			{
				if (av[i][a] >= 'a' && av[i][a] <= 'z')
					av[i][a] = av[i][a] - 32;
				a++;
			}
			std::cout << av[i];
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}