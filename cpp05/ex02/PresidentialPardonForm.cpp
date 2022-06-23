/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:13:02 by cjad              #+#    #+#             */
/*   Updated: 2022/06/23 10:37:05 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string Target) : Form("PresidentialPardonForm", 25, 5)
{
	this->Target = Target;
}

void PresidentialPardonForm::executedBy(Bureaucrat &bureau)
{
	if (this->getStatus() && this->getExecgrade() > bureau.getGrade())
	{
		std::cout << this->Target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else
		std::cout << bureau.getName() << " couldn't execute the form because it wasn't signed or the grade is too high" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}