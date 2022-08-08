/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:29:52 by cjad              #+#    #+#             */
/*   Updated: 2022/08/08 14:48:00 by cjad             ###   ########.fr       */
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

const std::string &Form::getName() const
{
	return this->name;
}

bool Form::getStatus() const
{
	return this->status;
}

int Form::getExecgrade() const
{
	return this->grade_requiredexec;
}

int Form::getSigngrade() const
{
	return this->grade_requiredsign;
}

void Form::beSigned(Bureaucrat &bureau)
{
	if (this->getSigngrade() < bureau.getGrade())
		throw Form::GradeTooLowException();
	else
		this->status = 1;
}

void Form::execute(Bureaucrat const & executor) const
{
	if(this->status == 0)
		throw Form::UnsignedException();
	else if (executor.getGrade() > this->getExecgrade())
		throw Bureaucrat::GradeTooLowException();
}

void Form::executed() const
{
	std::cout << "this Form has no execution" << std::endl;
}

Form::~Form()
{
	
}
