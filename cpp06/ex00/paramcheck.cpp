/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramcheck.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:25:33 by cjad              #+#    #+#             */
/*   Updated: 2022/06/28 14:40:31 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "paramcheck.hpp"

paramcheck::paramcheck(std::string arg)
{
	this->arg = arg;
}

bool paramcheck::check()
{
	if (this->arg.find("0123456789",0) != std::string::npos && (this->arg.find("abcdefghijklmnopqrstuvwxyz",0) != std::string::npos || this->arg.find("ABCDEFGHIJKLMNOPQRSTUVWXYZ",0) != std::string::npos))
		return 0;
	if ((this->arg.find("abcdefghijklmnopqrstuvwxyz",0) != std::string::npos || this->arg.find("ABCDEFGHIJKLMNOPQRSTUVWXYZ",0) != std::string::npos) && this->arg.size() > 1)
		return 0;
	if ((this->arg.find("abcdefghijklmnopqrstuvwxyz",0) != std::string::npos || this->arg.find("ABCDEFGHIJKLMNOPQRSTUVWXYZ",0) != std::string::npos) && this->arg.find(".",0))
		return 0;
}

paramcheck::~paramcheck()
{
	
}
