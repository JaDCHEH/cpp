/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:37:34 by cjad              #+#    #+#             */
/*   Updated: 2022/06/23 10:46:09 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string Target) : Form("RobotomyRequestForm", 72, 45)
{
	this->Target = Target;	
}

void RobotomyRequestForm::executedBy(Bureaucrat &bureau)
{
	if (this->getStatus() && this->getExecgrade() > bureau.getGrade())
	{
		if (rand() % 2)
			std::cout << this->Target << " has been robotomized successfully." << std::endl;
		else
			std::cout << "the robotomy failed." << std::endl;
	}
	else
		std::cout << bureau.getName() << " couldn't execute the form because it wasn't signed or the grade is too high" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}
