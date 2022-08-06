/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:19:28 by cjad              #+#    #+#             */
/*   Updated: 2022/08/04 17:50:07 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <vector>
# include <iostream>

template<typename T>
void easyfind(T container, int tofind)
{
	typename T::iterator a = std::find(container.begin(), container.end(), tofind);
	if (a == container.end())
		std::cout << "This integer " << tofind << " doesn't exist int the container" << std::endl;
	else
	{
		std::cout << "the index of the element to find is " << a - container.begin() << std::endl;
	}
}

#endif