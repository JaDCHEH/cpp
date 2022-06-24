/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:37:34 by cjad              #+#    #+#             */
/*   Updated: 2022/06/23 12:03:36 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string Target) : Form("RobotomyRequestForm", 72, 45)
{
	this->Target = Target;	
}

void RobotomyRequestForm::executed() const
{
	if (rand() % 2)
		std::cout << this->Target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "the robotomy failed." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}
