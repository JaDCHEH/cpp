/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:58:28 by cjad              #+#    #+#             */
/*   Updated: 2022/08/08 14:53:33 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// int main()
// {
// 	Bureaucrat bureau("Jad", 1);
// 	ShrubberyCreationForm form("house");
// 	RobotomyRequestForm form1("human");
// 	PresidentialPardonForm form2("criminel");
	
// 	std::cout << bureau << std::endl;
// 	std::cout << form << std::endl;
// 	std::cout << form1 << std::endl;
// 	std::cout << form2 << std::endl;
// 	form.beSigned(bureau);
// 	form1.beSigned(bureau);
// 	form2.beSigned(bureau);
// 	form.execute(bureau);
// 	form1.execute(bureau);
// 	form2.execute(bureau);
// }

int main()
{
	Bureaucrat bureau("Jad", 1);
	ShrubberyCreationForm form("house");
	ShrubberyCreationForm form0("house");
	RobotomyRequestForm form1("human");
	PresidentialPardonForm form2("criminel");
	
	std::cout << bureau << std::endl;
	std::cout << form << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	bureau.SignForm(form);
	bureau.SignForm(form1);
	bureau.SignForm(form2);
	bureau.executeForm(form);
	bureau.executeForm(form0);
	bureau.executeForm(form1);
	bureau.executeForm(form2);
}