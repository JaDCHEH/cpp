/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:37:52 by cjad              #+#    #+#             */
/*   Updated: 2022/06/20 16:02:02 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int Grade)
{
	try
	{
		if (Grade < 1 || Grade > 150)
		{
			throw (Grade);
		}
		else
		{
			this->Name = name;
			this->Grade = Grade;
		}
	}
	catch(int Grade)
	{
		if (Grade < 1)
			std::cout << "Bureaucrat::GradeTooHighException" << std::endl;
		if (Grade > 150)
			std::cout << "Bureaucrat::GradeTooLowException" << std::endl;
		this->~Bureaucrat();
	}
	
}

int Bureaucrat::getGrade()
{
	return this->Grade;
}

std::string &Bureaucrat::getName()
{
	return this->Name;
}

void Bureaucrat::incrementGrade()
{
	try
	{
		if (this->Grade - 1  < 1)
		{
			throw (this->Grade);
		}
		else
		{
			this->Grade -= 1;
		}
	}
	catch(int Grade)
	{
		std::cout << "Bureaucrat::GradeTooHighException" << std::endl;
	}
}

void Bureaucrat::decrementGrade()
{
	try
	{
		if (this->Grade + 1 > 150)
		{
			throw (this->Grade);
		}
		else
		{
			this->Grade += 1;
		}
	}
	catch(int Grade)
	{
		std::cout << "Bureaucrat::GradeTooLowException" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, Bureaucrat &bureau)
{
	os << bureau.getName() << ", bureaucrat grade " << bureau.getGrade();
	return os;
}

Bureaucrat::~Bureaucrat()
{}
