/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:11:26 by cjad              #+#    #+#             */
/*   Updated: 2022/06/24 14:28:00 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	
public:
	Intern();
	Form *makeForm(std::string type, std::string name);
	Form *ShrubberyForm(std::string Target);
	Form *RobotomyForm(std::string Target);
	Form *PresidentialForm(std::string Target);
	~Intern();
};

#endif