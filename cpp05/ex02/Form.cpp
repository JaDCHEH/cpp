/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:29:52 by cjad              #+#    #+#             */
/*   Updated: 2022/09/12 15:39:50 by cjad             ###   ########.fr       */
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

Form::Form(): name("noname") , grade_requiredsign(1), grade_requiredexec (1){
	
}

Form::Form(Form & copy): name(copy.name) , grade_requiredsign(copy.grade_requiredsign), grade_requiredexec (copy.grade_requiredexec){
	this->status = copy.status;
}

Form & Form::operator=(Form &copy){
	(void)copy;
	std::cout << "Copy operator can't do anything" << std::endl;
	return *this;
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

Form::~Form()
{
	
}
