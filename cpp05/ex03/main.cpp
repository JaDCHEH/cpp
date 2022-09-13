/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:58:28 by cjad              #+#    #+#             */
/*   Updated: 2022/09/12 15:52:36 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	
	Intern inter;
	Bureaucrat bureau("Jad", 150);
	Form *a = inter.makeForm("RobotomyRequestForm","Robo");
	Form *b = inter.makeForm("ShrubberyCreationForm","tree");
	Form *c = inter.makeForm("PresidentialPardonForm","hehe");
	
	std::cout << bureau << std::endl;
	std::cout << *a << std::endl;
	std::cout << *b << std::endl;
	std::cout << *c << std::endl;
	bureau.SignForm(*a);
	bureau.SignForm(*b);
	bureau.SignForm(*c);
	bureau.executeForm(*a);
	bureau.executeForm(*b);
	bureau.executeForm(*c);
}
