/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:13:02 by cjad              #+#    #+#             */
/*   Updated: 2022/08/09 14:50:14 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string Target) : Form("PresidentialPardonForm", 25, 5)
{
	this->Target = Target;
}

PresidentialPardonForm::PresidentialPardonForm(): Form(){
	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & copy): Form(copy){
	this->Target = copy.Target;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm &copy){
	this->Target = copy.Target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if(this->getStatus() == 0)
		throw Form::UnsignedException();
	else if (executor.getGrade() > this->getExecgrade())
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->Target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}