/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:29:52 by cjad              #+#    #+#             */
/*   Updated: 2022/06/21 16:03:07 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signgrade, int execgrade) : name(name) , grade_requiredsign(signgrade), grade_requiredexec (execgrade)
{
	try
	{
		if (signgrade < 1 || execgrade < 1)
		{
			throw Form::GradeTooHighException();
		}
		if (signgrade > 150 || execgrade > 150)
		{
			throw Form::GradeTooLowException();
		}
	}
	catch(Form::GradeTooHighException &ex)
	{
		std::cout << ex.exception() << std::endl;
	}
	catch(Form::GradeTooLowException &ex)
	{
		std::cout << ex.exception() << std::endl;
	}
	this->status = 0;
}

std::ostream& operator<<(std::ostream& os, Form &Form)
{
	os << "Form " << Form.getName() << " status " << Form.getStatus() << " Grade required to sign " << Form.getSigngrade() << " Grade required to execute " << Form.getExecgrade(); 
	return os;
}

const std::string &Form::getName()
{
	return this->name;
}

bool Form::getStatus()
{
	return this->status;
}

int Form::getExecgrade()
{
	return this->grade_requiredexec;
}

int Form::getSigngrade()
{
	return this->grade_requiredsign;
}
void Form::beSigned(Bureaucrat &bureau)
{
	if (this->status == 0)
	{
		if (bureau.SignForm(this->getSigngrade()))
		{
			std::cout << bureau.getName() << " signed " << this->getName() << std::endl;
			this->status = 1;
		}
		else
		 std::cout << bureau.getName() << " couldn't sign " << this->getName() << " because Form grade is too high" << std::endl;
	}
	else
		std::cout << bureau.getName() << " couldn't sign " << this->getName() << " because Form is already signed" << std::endl;
}

Form::~Form()
{
	
}
