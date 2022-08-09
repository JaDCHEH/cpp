/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:37:52 by cjad              #+#    #+#             */
/*   Updated: 2022/08/09 14:38:30 by cjad             ###   ########.fr       */
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

void Bureaucrat::SignForm(Form &form)
{
	if (form.getStatus() == 1)
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because Form is already signed" << std::endl;

	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << this->getName() << " signed " << form.getName() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
		}
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
		form.executed();
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, Bureaucrat &bureau)
{
	os << bureau.getName() << ", bureaucrat grade " << bureau.getGrade();
	return os;
}

Bureaucrat::~Bureaucrat()
{}
