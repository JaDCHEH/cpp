/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:37:52 by cjad              #+#    #+#             */
/*   Updated: 2022/09/13 18:52:32 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int Grade) : Name(name)
{
	if (Grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	if (Grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		this->Grade = Grade;
	}
}

Bureaucrat::Bureaucrat()
{
	
}

Bureaucrat::Bureaucrat(Bureaucrat & copy) : Name(copy.Name)
{
	this->Grade = copy.Grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat & copy)
{
	this->Grade = copy.Grade;
	return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return "This Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return "This Grade is too high";
}

int Bureaucrat::getGrade() const
{
	return this->Grade;
}

const std::string &Bureaucrat::getName() const
{
	return this->Name;
}

void Bureaucrat::incrementGrade()
{
	if (this->Grade - 1 < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
	{
		this->Grade -= 1;
	}
}

void Bureaucrat::decrementGrade()
{
	if (this->Grade + 1 > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		this->Grade += 1;
	}
}

std::ostream& operator<<(std::ostream& os, Bureaucrat &bureau)
{
	os << bureau.getName() << ", bureaucrat grade " << bureau.getGrade();
	return os;
}

Bureaucrat::~Bureaucrat()
{}
