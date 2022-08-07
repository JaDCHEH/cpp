/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:58:28 by cjad              #+#    #+#             */
/*   Updated: 2022/08/07 15:06:33 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	
	Intern inter;
	Bureaucrat bureau("Jad", 1);
	Form *a = inter.makeForm("RobotomyRequestForm","Robo");
	Form *b = inter.makeForm("ShrubberyCreationForm","tree");
	Form *c = inter.makeForm("PresidentialPardonForm","hehe");
	Form *d = inter.makeForm("RobotomyRequestForm","Robo");
	
	std::cout << bureau << std::endl;
	std::cout << *a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	a->beSigned(bureau);
	b->beSigned(bureau);
	c->beSigned(bureau);
	d->beSigned(bureau);
	a->execute(bureau);
	b->execute(bureau);
	c->execute(bureau);
	d->execute(bureau);
}
