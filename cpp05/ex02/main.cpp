/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:58:28 by cjad              #+#    #+#             */
/*   Updated: 2022/06/23 11:09:05 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat bureau("Jad", 1);
	ShrubberyCreationForm form("house");
	RobotomyRequestForm form1("human");
	PresidentialPardonForm form2("criminel");
	
	std::cout << bureau << std::endl;
	std::cout << form << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	form.beSigned(bureau);
	form1.beSigned(bureau);
	form2.beSigned(bureau);
	form.executedBy(bureau);
	form1.executedBy(bureau);
	form1.executedBy(bureau);
	form1.executedBy(bureau);
	form1.executedBy(bureau);
	form1.executedBy(bureau);
	form1.executedBy(bureau);
	form1.executedBy(bureau);
	form1.executedBy(bureau);
	form2.executedBy(bureau);
}