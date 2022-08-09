/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:37:34 by cjad              #+#    #+#             */
/*   Updated: 2022/08/08 20:02:35 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string Target) : Form("RobotomyRequestForm", 72, 45)
{
	this->Target = Target;	
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(this->getStatus() == 0)
		throw Form::UnsignedException();
	else if (executor.getGrade() > this->getExecgrade())
		throw Bureaucrat::GradeTooLowException();
	srand(time(NULL));
	if (rand() % 2)
		std::cout << this->Target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "the robotomy failed." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}
