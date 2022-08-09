/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:37:52 by cjad              #+#    #+#             */
/*   Updated: 2022/08/09 14:38:03 by cjad             ###   ########.fr       */
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


int Bureaucrat::getGrade()
{
	return this->Grade;
}

const std::string &Bureaucrat::getName()
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
