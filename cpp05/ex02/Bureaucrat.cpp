/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:37:52 by cjad              #+#    #+#             */
/*   Updated: 2022/06/23 11:48:06 by cjad             ###   ########.fr       */
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

bool Bureaucrat::SignForm(int signgrade)
{
	if (this->Grade < signgrade)
	{
		return 1;
	}
	return 0;
}

std::ostream& operator<<(std::ostream& os, Bureaucrat &bureau)
{
	os << bureau.getName() << ", bureaucrat grade " << bureau.getGrade();
	return os;
}

Bureaucrat::~Bureaucrat()
{}
