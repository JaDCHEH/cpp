/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:45:05 by cjad              #+#    #+#             */
/*   Updated: 2022/07/29 16:39:36 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

animal::animal()
{
	std::cout << "Animal constructed" << std::endl;
	this->type = "Unknown";
}

std::string animal::getType() const
{
	return this->type;
}

animal::~animal()
{
	std::cout << "Animal Destructed" << std::endl;
}
