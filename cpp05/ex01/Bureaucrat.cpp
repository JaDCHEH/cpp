/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:37:52 by cjad              #+#    #+#             */
/*   Updated: 2022/06/21 15:26:07 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int Grade) : Name(name)
{
	try
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
	catch(Bureaucrat::GradeTooHighException &ex)
	{
		std::cout << ex.exception() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &ex)
	{
		std::cout << ex.exception() << std::endl;
	}
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
	try
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
	catch(Bureaucrat::GradeTooHighException &ex)
	{
		std::cout << ex.exception() << std::endl;
	}
}

void Bureaucrat::decrementGrade()
{
	try
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
	catch(Bureaucrat::GradeTooLowException &ex)
	{
		std::cout << ex.exception() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, Bureaucrat &bureau)
{
	os << bureau.getName() << ", bureaucrat grade " << bureau.getGrade();
	return os;
}

Bureaucrat::~Bureaucrat()
{}
