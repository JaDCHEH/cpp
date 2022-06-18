/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:23:51 by cjad              #+#    #+#             */
/*   Updated: 2022/06/18 13:08:18 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <string>
#include <iostream>

class brain
{
private:
	std::string ideas[100];
public:
	brain(/* args */);
	~brain();
};

#endif