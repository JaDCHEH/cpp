/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:15:33 by cjad              #+#    #+#             */
/*   Updated: 2022/06/24 14:36:56 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	
}

Form *Intern::ShrubberyForm(std::string Target)
{
	return new ShrubberyCreationForm(Target);
}

Form *Intern::RobotomyForm(std::string Target)
{
	return new RobotomyRequestForm(Target);
}

Form *Intern::PresidentialForm(std::string Target)
{
	return new PresidentialPardonForm(Target);
}

Form *Intern::makeForm(std::string type, std::string Target)
{
	typedef Form* (Intern::*fun)(std::string);
	int i = 0;
	std::string a[3] = {"ShrubberyCreationForm","RobotomyRequestForm:","PresidentialPardonForm"};
	fun f[3] = {&Intern::ShrubberyForm, &Intern::RobotomyForm , &Intern::PresidentialForm};
	while (i < 0)
	{
		if(type.compare(a[i]) == 0)
			return (this->*(f[i]))(Target);
		i++;
	}
	std::cout << "Invalid Type of Requests" << std::endl;
	return NULL;
}

Intern::~Intern()
{
	
}
