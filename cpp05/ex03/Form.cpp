/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:29:52 by cjad              #+#    #+#             */
/*   Updated: 2022/08/08 14:02:01 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signgrade, int execgrade) : name(name) , grade_requiredsign(signgrade), grade_requiredexec (execgrade)
{
	if (signgrade < 1 || execgrade < 1)
	{
		throw Form::GradeTooHighException();
	}
	if (signgrade > 150 || execgrade > 150)
	{
		throw Form::GradeTooLowException();
	}
	else
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
	if (this->getSigngrade() < bureau.getGrade())
		throw Form::GradeTooLowException();
	else
		bureau.SignForm(this->grade_requiredsign, this->name, this->status);
}

void Form::execute(Bureaucrat & executor)
{
	if(this->status == 0)
		throw Form::UnsignedException();
	else if (executor.getGrade() > this->getExecgrade())
		throw Bureaucrat::GradeTooLowException();
	else
		this->executed();
}

void Form::executed() const
{
	std::cout << "this Form has no execution" << std::endl;
}

Form::~Form()
{
	
}
