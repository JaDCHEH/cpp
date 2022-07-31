/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:32:58 by cjad              #+#    #+#             */
/*   Updated: 2022/07/31 12:24:29 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook Constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook Destructor called" << std::endl;
}

void PhoneBook::add(Contact &Contact, int i)
{
	this->contact[i % 8] = Contact;
}

void PhoneBook::printall(void)
{
	int	i;
	std::string index;

	i = 0;
	while (i < 8 && !this->contact[i].getFirstName().empty())
	{
		this->contact[i].printcolumn(i);
		i++;
	}
	std::cout << "Enter index" << std::endl;
	std::getline(std::cin, index);
	if (!index.empty() && index.find_first_not_of("0123456789") == std::string::npos
		&& (atoi(index.c_str()) < 8 && atoi(index.c_str()) >= 0))
		this->contact[atoi(index.c_str())].printcontact();
	else
		std::cout << "The index you entered is wrong" << std::endl;
}